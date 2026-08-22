#include <stdio.h>

double divide(double x, double y);

int main()
{
    double result = divide(8.5,3.2);
    printf("%f\n", result);
    return 0;
}
double divide(double x, double y)
{
    return x / y;
}