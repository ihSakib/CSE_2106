#include <iostream>
#include <cmath>
using namespace std;

double fn(double x)
{
  return (2 * x * x * x) - (5 * x * x) - 100;
}

void bisection(double xl, double xu)
{
  if (fn(xl) * fn(xu) >= 0)
  {
    cout << "Solution not possible by this method!" << endl;
    return;
  }

  double xr, prev_xr = 0;
  double approx_error = 100.0;

  while (approx_error > 0.05)
  {
    xr = (xl + xu) / 2;

    if (fn(xl) * fn(xr) < 0)
      xu = xr;
    else
      xl = xr;

    approx_error = fabs((xr - prev_xr) / xr) * 100;

    prev_xr = xr;
  }

  cout << "\nFinal Approximate Root: " << xr << endl;
}

int main()
{
  double xl, xu;
  cout << "Enter lower and upper guesses: ";
  cin >> xl >> xu;

  bisection(xl, xu);

  return 0;
}
