
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float n, m, s;

    cout << "Git changes" << endl;

    cout << "Enter divisor n: ";
    cin >> n;

    cout << "Enter quotient m: ";
    cin >> m;

    cout << "Enter remainder s: ";
    cin >> s;

    double numberC = (double)n * m + s;

    double numberCPP = static_cast<double>(n) * m + s;

    cout << "Result using C-style conversion: "
        << numberC << endl;

    cout << "Result using static_cast: "
        << numberCPP << endl;

    double x, y, a, b;
    double pi = 3.14159265358979323846;

    printf("Calculate a and b\n");

    printf("Enter x: ");
    if (scanf_s("%lf", &x) != 1)
        return 1;

    printf("Enter y (y >= 0): ");
    if (scanf_s("%lf", &y) != 1)
        return 1;

    if (y < 0)
    {
        printf("For real results, y must be >= 0.\n");
        return 1;
    }

    a = (pow(fabs(x), 2.0 / 3.0)
        + 2.0 * cbrt(x * y)
        + 4.0 * pow(y, 3.0 / 2.0))
        / (fabs(8.0 * x - 5.0 * y) + exp(3.0 * y));

    double numeratorB =
        pow(sin(x), 2.0)
        + cos(pi / 6.0)
        - 2.0 * pow(sin(pi / 2.0 - 4.0), 2.0);

    double denominatorB =
        pow(cos(3.0 * x), 2.0)
        + cos(5.0 * pow(x, 3.0));

    printf("\nResult a = %.6f\n", a);

    if (fabs(denominatorB) < 1e-12)
    {
        printf("Cannot calculate b: denominator is zero.\n");
    }
    else
    {
        b = numeratorB / denominatorB;
        printf("Result b = %.6f\n", b);
    }

    return 0;
}
