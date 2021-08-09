/*
 * File: 0-read_textfile.c
 * Author: Oghenekparobo Onosemuode
 */

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: pointer to filename
 * @letters: bytes to print
 * Return: actual bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	register int fd, r, w;
	char *buffer = NULL;

	if (!filename)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[letters] = '\0';
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
