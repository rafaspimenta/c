#include<stdio.h>

void f(int* p) {
  printf("f %d\n", *p);
  int b = 2;
  *p = b;
  
  printf("%d\n", *p);
}

int main() {
  int a = 1;
  int *p = &a;
  f(&a);
  printf("%d\n", a);
}