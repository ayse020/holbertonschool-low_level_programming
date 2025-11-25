#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_error - prints error message to stderr and exits
 * @code: error code
 * @message: error message
 * @arg: argument for the message
 */
void print_error(int code, char *message, char *arg)
{
	dprintf(2, message, arg);
	exit(code);
}

/**
 * close_fd - closes a file descriptor with error checking
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_files - opens source and destination files
 * @av: argument vector
 * @fd_from: pointer to source file descriptor
 * @fd_to: pointer to destination file descriptor
 */
void open_files(char *av[], int *fd_from, int *fd_to)
{
	*fd_from = open(av[1], O_RDONLY);
	if (*fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	*fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close_fd(*fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}
}

/**
 * copy_content - copies content from source to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @av: argument vector
 */
void copy_content(int fd_from, int fd_to, char *av[])
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error(99, "Error: Can't write to %s\n", av[2]);
		}
	}

	if (bytes_read == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		print_error(98, "Error: Can't read from file %s\n", av[1]);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, various error codes on failure
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(av, &fd_from, &fd_to);
	copy_content(fd_from, fd_to, av);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
