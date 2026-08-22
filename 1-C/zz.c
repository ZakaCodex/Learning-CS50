#include <stdio.h>

int main (void)
{

    int n = 5, x;

    x = ++n * --n;
    printf("n = %d /  x = %d \n",n,x);
}