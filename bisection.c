// bisection method

#include <stdio.h>
#include <math.h>

double f(double x);

int main()
{
    // initial bounds
    // requires a < b, f(a) * f(b) < 0
    double a = 0;
    double b = 2;

    // error tolerance
    double TOL = 10e-5;

    // maximum iterations
    int N = 100;

    printf("n\tp\tf(p)\n");
    double p;
    int n = 1;
    while (n <= N)
    {
        p = (a + b) / 2;
        printf("%d\t%lf\t%lf\n", n, p, f(p));

        // stopping criterion
        // alternatives exist, e.g. |f(p)| <= TOL
        if ((b - a) / 2 < TOL)
            break;

        if (f(a) * f(p) > 0)
            a = p;
        else
            b = p;
        n++;
    }

    return 0;
}

double f(double x)
{
    // example function f(x)=x^2-x-1
    return pow(x, 2) - x - 1;
}

