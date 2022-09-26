#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
unsigned int _strspn(char *s, char *accept);
void print_diagsums(int *a, int size);

#endif
