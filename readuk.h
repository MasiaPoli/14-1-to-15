#ifndef REAKUK_H
#define READUK_H
#include <stdio.h>
#include <stdlib.h>
/*—читывание из консоли n целых чисел и запись их в a*/
void i_readuk(int* a, size_t n);
/*—читывание из консоли n вещественных чисел и запись их в a*/
void readuk(double* a, size_t n);
/*¬ывод n целых чисел из a*/
void i_writeuk(const int* a, size_t n);
/*¬ывод n вещественных чисел из a*/
void writeuk(const double* a, size_t n);

#endif // REAKUK_H
