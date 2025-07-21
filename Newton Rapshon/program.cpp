#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
  return x * x * x - x - 2;
}

double f_prime(double x)
{
  return 3 * x * x - 1;
}

void nr(double x0)
{
  while (fabs(f(x0)) > 0.5)
  {
    double fx = f(x0);
    double fpx = f_prime(x0);

    if (fpx == 0)
    {
      cout << "Math error: derivative is zero." << endl;
      return;
    }

    x0 = x0 - (fx / fpx);
  }

  cout << "Root: " << x0 << endl;
}

int main()
{

  double x0 = 1;

  nr(x0);

  return 0;
}