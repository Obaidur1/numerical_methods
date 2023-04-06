#include <bits/stdc++.h>
using namespace std;
double func(double x)
{
    return 1 / (1 + x * x);
}
int main()
{

    double a, b, h, n;
    cout << "Enter Lower and Upper Bound: ";
    cin >> a >> b;
    cout << "Enter n: ";
    cin >> n;
    h = (b - a) / n;
    double x = a;
    vector<double> arr(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = func(x);
        x = x + h;
    }
    for (auto it : arr)
    {
        cout << it << "\n";
    }

    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 2 * arr[i];
    }
    double ans = (h / 2) * (arr[0] + arr[n + 1] + sum);
    cout << "Ans: " << ans;
    return 0;
}