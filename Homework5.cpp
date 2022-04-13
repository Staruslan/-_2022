/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>


using namespace std;

  int i, j;
  double sqrs(double i,double j) {
      return ((i+j)*(i+j));
  }
  int main()
{
    double i,j;
  cout << "Ввести два дробных числа:";
  cin >> i;
  cin >> j;
  cout << "Квадрат их суммы:"<< sqrs(i,j);
 
    return 0;
}