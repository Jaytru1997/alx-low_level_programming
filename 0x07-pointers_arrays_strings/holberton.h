#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/* 0-memset.c */
char *_memset(char *s, char b, unsigned int n);

/* 1-memcpy.c */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2-strchr.c */
char *_strchr(char *s, char c);

/* 3-strspn.c */
unsigned int _strspn(char *s, char *accept);

/* 4-strpbrk.c */
char *_strpbrk(char *s, char *accept);

/* 5-strstr.c */
char *_strstr(char *haystack, char *needle);

/* 7-print_chessboard.c */
void print_chessboard(char (*a)[8]);

/* 8-print_diagsums.c */
void print_diagsums(int *a, int size);

/* 100-set_string.c */
void set_string(char **s, char *to);

#endif
