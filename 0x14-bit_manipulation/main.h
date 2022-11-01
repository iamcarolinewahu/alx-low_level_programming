#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _strlen(const char *s);
int power(int base, int exp);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
