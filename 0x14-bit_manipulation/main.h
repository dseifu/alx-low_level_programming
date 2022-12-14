#ifndef M_H

#define M_H

#include<stddef.h>
int _putchar(char);
unsigned int binary_to_uint(const char *);
int is_bin(const char *, int *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);
unsigned int flip_bits(unsigned long int, unsigned long int);
int get_endianness(void);

#endif
