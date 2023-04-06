#include <bits/stdc++.h>
using namespace std;
#define EP 0.001
double func(double x)
{
    return x * x * x * x * x * x - x - 1;
}
void secant(double x0, double x1)
{
    double h = (func(x1) * (x1 - x0)) / (func(x1) - func(x0));
    double x2;
    int it = 2;
    while (abs(h) >= EP)
    {
        h = (func(x1) * (x1 - x0)) / (func(x1) - func(x0));
        x2 = x1 - h;
        cout << "x" << it << "=" << x2 << "\n";
        x0 = x1;
        x1 = x2;
        it++;
    }
    cout << "The root is " << x2 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double a = 1, b = 2;
    secant(a, b);

    return 0;
}