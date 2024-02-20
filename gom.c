#include "gom.h"
#include "malloc.h"
size_t remov_if(int* a, size_t n, cond c)
{
    int* b=a+n;
    int* d=a;
    int* e=a;
    size_t l=0;
    while(e!=b)
    {
        if(!c(*e))
        {
            *d=*e;
            d++;
        }
        e++;
    }
    l=d-a;
    a=realloc(a, l*sizeof(int));
    return l;
}
