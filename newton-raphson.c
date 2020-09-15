// newton-raphson method

#include <stdio.h>
#include <math.h>

double f(double x);
double df(double x);

int main()
{
    // initial guess p0
    double p0 = 1;

    // error tolerance
    double TOL = 10e-5;
    
    // maximum iterations
    int N = 100;

    printf("n\tp\tf(p)\n");
    double p;
    int n = 1;
    while (n <= N)
    {
        p = p0 - f(p) / df(p);
        printf("%d\t%lf\t%lf\n", n, p, f(p));

        if (fabs(p - p0) < TOL)
            break;

        n++;
        p0 = p;
    }

    return 0;
}

double f(double x)
{
    // example function f(x)=x^2-x-1
    return pow(x, 2) - x - 1;
}

double df(double x)
{
    // first derivative of f
    return 2 * x - 1;
}

