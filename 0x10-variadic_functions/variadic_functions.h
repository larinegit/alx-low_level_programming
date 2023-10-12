#ifndef VARIADIC_FUNCTIONS.H
#define  VARIADIC_FUNCTIONS.H

#include <stdio.h>
#include <stdargs.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
