#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/* Helper funksiyalar */
void handle_error(int exit_code, char *msg, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
	exit(exit_code);
}

int open_source_file(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (fd);
}

int open_dest_file(char *filename, int fd_from)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		if (fd_from != -1)
			close(fd_from);
	}
	return (fd);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, various exit codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		handle_error(97, "Usage: cp file_from file_to", -1, -1);

	fd_from = open_source_file(argv[1]);
	if (fd_from == -1)
		exit(98);

	fd_to = open_dest_file(argv[2], fd_from);
	if (fd_to == -1)
		exit(99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			handle_error(99, "Error: Can't write to file", fd_from, fd_to);
	}

	if (bytes_read == -1)
		handle_error(98, "Error: Can't read from file", fd_from, fd_to);

	if (close(fd_from) == -1)
		handle_error(100, "Error: Can't close fd", fd_from, fd_to);

	if (close(fd_to) == -1)
		handle_error(100, "Error: Can't close fd", fd_from, fd_to);

	return (0);
}
