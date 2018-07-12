#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
  Matrix<float, 3, 3> m3;
  m3 << 1,2,3 ,4,5,6 ,7,8,9;
  Matrix<float, 3, 1> v;
  v << 1, 2, 3;
  cout << "Here is the matrix A:\n" << m3 << endl;
  cout << "Here is the vector b:\n" << v << endl;
  Vector3f x = m3.colPivHouseholderQr().solve(v);
  cout << "The solution is: \n" << x << endl;
  return 0;
}
