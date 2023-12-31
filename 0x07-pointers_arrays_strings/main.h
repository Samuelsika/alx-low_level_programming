#ifndef MAIN_H
#define MAIN_H

char *_memsetr(char *s, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[1]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
