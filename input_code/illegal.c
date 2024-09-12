#include <stdlib.h>
#include <stdio.h>

int main(){
int *pa = NULL;
*pa = 34;
int b = 4, *pb = &b;
*pb = 5;
int *pc;
printf("pc is equal to %p\n", pc);
printf("*pc is equal to %d\n", *pc);
pc = malloc(sizeof(int));
*pc = -2;
pa = pc;
free(pa);
int x = -4;
pc = &x;
}