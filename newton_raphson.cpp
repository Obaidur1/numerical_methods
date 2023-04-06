#include <bits/stdc++.h>
using namespace std;
#define EP 0.001

double func(double x)
{
    return ((x * x * x) - (5 * x) + 3);
}

double deriv_func(double x)
{
    return ((3 * x * x) - 5);
}

void Newton_Raphson(double x)
{
    double h = func(x) / deriv_func(x);
    int max_iterations = 100;
    int i = 0;
    while (abs(h) >= EP)
    {
        h = func(x) / deriv_func(x);
        // cout << h << "\n";
        x = x - h;
        i++;
    }
    if (i == max_iterations)
    {
        cout << "Method did not converge->" << x << "\n";
    }
    else
    {
        cout << "The root is: " << x << "\n";
    }
}

int main()
{

    double x = 1.0;
    Newton_Raphson(x);
    return 0;
}
