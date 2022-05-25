#include <stdio.h>
#include "functions.h"

int main(void)
{
    double x[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double y[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;

    printf("beta0: %f\n", beta0(x, y, n));
    printf("beta1: %f\n", beta1(x, y, n));
}