#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file with specified content
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;
    
    /* Check if filename is NULL */
    if (filename == NULL)
        return (-1);
    
    /* Create or truncate file with rw------- permissions */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);
    
    /* Write text_content if it's not NULL */
    if (text_content != NULL)
    {
        bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1)
        {
            close(fd);
            return (-1);
        }
    }
    
    close(fd);
    return (1);
}
