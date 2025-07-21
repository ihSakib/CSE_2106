#include <bits/stdc++.h>
using namespace std;

void solve(double am[3][4])
{
  double d = am[0][0] * (am[1][1] * am[2][2] - am[2][1] * am[1][2]) - am[0][1] * (am[1][0] * am[2][2] - am[2][0] * am[1][2]) + am[0][2] * (am[1][0] * am[2][1] - am[2][0] * am[1][1]);

  double d1 = am[0][3] * (am[1][1] * am[2][2] - am[2][1] * am[1][2]) - am[0][1] * (am[1][3] * am[2][2] - am[2][3] * am[1][2]) + am[0][2] * (am[1][3] * am[2][1] - am[2][3] * am[1][1]);

  double d2 = am[0][0] * (am[1][3] * am[2][2] - am[2][3] * am[1][2]) - am[0][3] * (am[1][0] * am[2][2] - am[2][0] * am[1][2]) + am[0][2] * (am[1][0] * am[2][3] - am[2][0] * am[1][3]);

  double d3 = am[0][0] * (am[1][1] * am[2][3] - am[2][1] * am[1][3]) - am[0][1] * (am[1][0] * am[2][3] - am[2][0] * am[1][3]) + am[0][3] * (am[1][0] * am[2][1] - am[2][0] * am[1][1]);

  double x1 = d1 / d, x2 = d2 / d, x3 = d3 / d;

  cout << "X1 = " << x1 << endl;
  cout << "X2 = " << x2 << endl;
  cout << "X3 = " << x3 << endl;
}

int main()
{
  double am[3][4]; // am = augmented matrix

  cout << "Input coefficients of EQ1 ";
  cin >> am[0][0] >> am[0][1] >> am[0][2] >> am[0][3];

  cout << "Input coefficients of EQ2 ";
  cin >> am[1][0] >> am[1][1] >> am[1][2] >> am[1][3];

  cout << "Input coefficients of EQ3 ";
  cin >> am[2][0] >> am[2][1] >> am[2][2] >> am[2][3];

  solve(am);

  return 0;
}