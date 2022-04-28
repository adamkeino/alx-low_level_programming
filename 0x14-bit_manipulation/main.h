#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int  _putchar(char);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned long int _pow(unsigned int base, unsigned int power);
int get_bit(unsigned long int n, unsigned int index);

#endif
