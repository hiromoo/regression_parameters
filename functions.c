#include "functions.h"

double sum(double *x, int n)
{
    int i;
    double sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += x[i];
    }

    return sum;
}

double sum2(double *x, double *y, int n)
{
    int i;
    double sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += x[i] * y[i];
    }

    return sum;
}

void mul(double *x, double *y, int n, double *xy)
{
    int i;

    for (i = 0; i < n; i++)
    {
        xy[i] = x[i] * y[i];
    }
}

double ave(double *x, int n)
{
    return sum(x, n) / n;
}

double ave2(double *x, int n)
{
    int i;
    double sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += x[i];
    }

    return sum / n;
}

double beta1(double *x, double *y, int n)
{
    double xy[n];
    double xx[n];
    double x_ave;
    double y_ave;

    mul(x, y, n, xy);
    mul(x, x, n, xx);
    x_ave = ave(x, n);
    y_ave = ave(y, n);

    return (sum(xy, n) - n * x_ave * y_ave) / (sum(xx, n) - n * x_ave * x_ave);
}

double beta1_2(double *x, double *y, int n)
{
    double x_ave = ave2(x, n);
    double y_ave = ave2(y, n);

    return (sum2(x, y, n) - n * x_ave * y_ave) / (sum2(x, y, n) - n * x_ave * x_ave);
}

double beta0(double *x, double *y, int n)
{
    return ave(y, n) - beta1(x, y, n) * ave(x, n);
}

double beta0_2(double *x, double *y, int n)
{
    return ave2(y, n) - beta1_2(x, y, n) * ave2(x, n);
}