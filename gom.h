#ifndef gom_h
#define gom_h
#include "chec.h"
typedef int (*cond) (int);
/*�������� ������ a ����� n, �������� ��������, �� ��������������� ������� cond, ��������� ����� ����� ���������, ������ a �������� ������ �� �������*/
size_t remov_if(int* a, size_t n, cond c);
#endif // gom_h
