// fixed point iteration method

#include <stdio.h>
#include <math.h>

double g(double x);

int main()
{
    // initial guess p0
    double p0 = 1;

    // error tolerance
    double TOL = 10e-5;

    // maximum iterations
    int N = 100;

    printf("n\tp\tf(p)\n");

    int n = 1;
    double p;
    while (n <= N)
    {
        p = g(p0);
        printf("%d\t%lf\t%lf\n", n, p, g(p));

        if (fabs(p - p0) < TOL)
            break;

        n++;
        p0 = p;
    }

    return 0;
}

double g(double x)
{
    // example function f(x)=x^2-x-1
    return cos(x);
}

