#include <bits/stdc++.h>
using namespace std;
double func(double x)
{
    // double a = cos(x);
    // a = a * (M_PI / 180);
    // return sqrt(fabs(a));
    return sin(x);
}
int main()
{

    double a, b, h, n;
    cout << "Enter Lower and Upper Bound :";
    cin >> a >> b;
    cout << "Enter n :";
    cin >> n;
    h = (b - a) / n;
    double x = a;
    vector<double> vec(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        double temp = func(x);
        cout << x << " deg -> " << temp << "\n";
        vec[i] = temp;
        x = x + h;
    }
    double sum = 0;
    sum = vec[a] + vec[n];
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += 2 * vec[i];
        }
        else
        {
            sum += 4 * vec[i];
        }
    }
    sum *= (h / 3.0);
    cout << "Ans: " << sum << "\n";
    return 0;
}