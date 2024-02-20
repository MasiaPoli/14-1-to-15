#include <stdio.h>
#include <stdlib.h>
#include "readuk.h"
#include "gom.h"
int main()
{
    int n;
    int* b;
    printf("Write the size\n");
    scanf("%d", &n);
    b=malloc(n*sizeof(int));
    i_readuk(b, n);
    int k;
    printf("Write type of function 0 - >0, 1 - 2k, 2 - is square\n");
    scanf("%d", &k);
    cond c;
    switch(k)
    {
    case 0:
        c=mtn;
        break;
    case 1:
        c=dt;
        break;
    case 2:
        c=kv;
    }
    n=remov_if(b, n, c);
    i_writeuk(b, n);
    return 0;
}
