#include <bits/stdc++.h>
using namespace std;

double fn(double x)
{
  return x * x * x - x - 2;
}

void secant(double x0, double x1)
{
  double x2;

  do
  {
    double f0 = fn(x0);
    double f1 = fn(x1);

    if (fabs(f1 - f0) < 1e-12)
    {
      cout << "Mara" << endl;
      return;
    }

    x2 = x1 - (f1 * (x1 - x0) / (f1 - f0));

    x0 = x1;
    x1 = x2;

  } while (fabs(fn(x2)) > 0.05);

  cout << "Root: " << x2 << endl;
}

int main()
{

  double x0, x1;
  cin >> x0 >> x1;

  secant(x0, x1);

  return 0;
}