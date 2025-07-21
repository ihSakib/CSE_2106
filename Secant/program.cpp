#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
  return x * x * x - x - 2;
}

// Secant Method
void secant(double x0, double x1)
{
  double x2;

  do
  {
    double f0 = f(x0);
    double f1 = f(x1);

    if (fabs(f1 - f0) < 1e-12)
    {
      cout << "Division by zero." << endl;
      return;
    }

    x2 = x1 - f1 * (x1 - x0) / (f1 - f0);

    x0 = x1;
    x1 = x2;

  } while (fabs(f(x2)) > 0.001);

  cout << "Approximate root: " << x2 << endl;
}

int main()
{
  double x0, x1;
  cout << "Enter two initial guesses: ";
  cin >> x0 >> x1;

  secant(x0, x1);
  return 0;
}
