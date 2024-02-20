#include "chec.h"
int mtn(int a)
{
    return a>0;
}
int dt(int a)
{
    return a%2==0;
}
int kv(int a)
{
    if(a<0)
        return 0;
    int b=sqrt(a);
    return b*b==a;
}
