#include <bits/stdc++.h>
using namespace std;

double det(double m[3][3])
{
  return m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) - m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) + m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
}

void solve(double m[3][3], double c[3])
{
  double D = det(m);

  if (D == 0)
  {
    cout << "No unique solution" << endl;
    return;
  }

  double A[3][3], B[3][3], C[3][3];

  for (size_t i = 0; i < 3; i++)
  {
    A[i][0] = c[i];
    A[i][1] = m[i][1];
    A[i][2] = m[i][2];

    B[i][0] = m[i][0];
    B[i][1] = c[i];
    B[i][2] = m[i][2];

    C[i][0] = m[i][0];
    C[i][1] = m[i][1];
    C[i][2] = c[i];
  }

  double D1 = det(A);
  double D2 = det(B);
  double D3 = det(C);

  cout << "X1 " << D1 / D << endl;
  cout << "X2 " << D2 / D << endl;
  cout << "X3 " << D3 / D << endl;
}

int main()
{

  double A[3][3];
  double B[3];

  cout << "Enter coefficients of 3 equations:\n";
  for (int i = 0; i < 3; i++)
  {
    cout << "Equation " << i + 1 << ": ";
    cin >> A[i][0] >> A[i][1] >> A[i][2];
  }

  cin.ignore(100, '\n');

  cout << "Enter constants of the equations: ";
  for (int i = 0; i < 3; i++)
  {

    cin >> B[i];
  }

  solve(A, B);

  return 0;
}