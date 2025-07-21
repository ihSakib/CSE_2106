#include <bits/stdc++.h>
using namespace std;

double fx(double x)
{
    return x * x * x - x - 2;
}

double fpx(double x)
{
    return 3 * x * x - x - 2;
}

void np(double x0)
{
    double x = x0;

    while (fabs(fx(x)) > 0.05)
    {
        double f = fx(x);
        double fp = fpx(x);

        if (fp == 0)
        {
            cout << "mara" << endl;
            return;
        }

        x = x - (f / fp);
    }

    cout << "Root: " << x << endl;
}

int main()
{
    double x0;
    cin >> x0;

    np(x0);
    return 0;
}