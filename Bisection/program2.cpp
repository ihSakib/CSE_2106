#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
  return x * x * x - x - 2;
}

void bisection(double xl, double xu)
{
  if (f(xl) * f(xu) >= 0)
  {
    cout << "No root found in the interval.\n";
    return;
  }

  double xr;

  do
  {
    xr = (xl + xu) / 2;

    if (f(xr) == 0)
    {
      break;
    }

    if (f(xl) * f(xr) < 0)
    {
      xu = xr;
    }
    else
    {
      xl = xr;
    }

  } while ((fabs(f(xr)) > 0.05));

  cout
      << "Approximate root: " << xr << endl;
}

int main()
{
  double xl, xu;
  cin >> xl >> xu;

  bisection(xl, xu);
  return 0;
}
