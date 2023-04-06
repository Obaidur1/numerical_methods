#include <iostream>
#include <cmath>
using namespace std;
#define EP 0.01
double func(double x)
{
    return (3 * x - cos(x) - 1);
}

void false_position(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
    double c = a;
    int it = 1;
    int max_it = 10;
    cout << "N"
         << "\t"
         << "a"
         << "\t"
         << "b"
         << "\t\t"
         << "c"
         << "\t\t"
         << "f(x)"
         << "\t\t"
         << "Error"
         << "\n";
    while (max_it--)
    {

        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        if (func(c) == 0.0)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
        cout << it << "\t" << a << "\t" << b << "\t" << c << "\t" << func(c) << "\t" << b - a << "\n";
        it++;
    }
    cout << "The value of root is : " << c;
}
int main()
{
    double a = 0, b = 1;
    false_position(a, b);
    return 0;
}