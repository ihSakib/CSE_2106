#include <bits/stdc++.h>
using namespace std;

double fn(double x)
{
  return x * x * x - x - 2;
}

void falsePosition(double xl, double xu)
{
  double xr;

  if (fn(xl) * fn(xu) >= 0)
  {
    cout << "Mara" << endl;
    return;
  }

  do
  {
    xr = xu - ((fn(xu) * (xl - xu)) / (fn(xl) - fn(xu)));

    if (fn(xr) == 0)
    {
      break;
    }
    else if (fn(xl) * fn(xr) < 0)
    {
      xu = xr;
    }
    else
    {
      xl = xr;
    }

  } while (fabs(fn(xr)) > 0.05);

  cout << "Root: " << xr << endl;
}

int main()
{
  double xl, xu;

  cin >> xl >> xu;

  falsePosition(xl, xu);

  return 0;
}