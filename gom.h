#ifndef gom_h
#define gom_h
#include "chec.h"
typedef int (*cond) (int);
/*ћен€етс€ массив a длины n, остаютс€ элементы, не удовлетвор€ющие условию cond, выводитс€ новое число элементов, массив a измен€ет размер до нужного*/
size_t remov_if(int* a, size_t n, cond c);
#endif // gom_h
