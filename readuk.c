#include "readuk.h"
void readuk(double* a, size_t n)
{
    double* b=a+n;
    while(a!=b)
    {
        scanf("%lf", a);
        a++;
    }
}
void i_readuk(int* a, size_t n)
{
    int* b=a+n;
    while(a!=b)
    {
        scanf("%d", a);
        a++;
    }
}
void writeuk(const double* a, size_t n)
{
    double* b=a+n;
    while(a!=b)
    {
        printf("%lf\t", *a);
        a++;
    }
    printf("\n");
}
void i_writeuk(const int* a, size_t n)
{
    int* b=a+n;
    while(a!=b)
    {
        printf("%d\t", *a);
        a++;
    }
    printf("\n");
}
