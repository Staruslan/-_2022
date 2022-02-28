/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{  setlocale(LC_ALL,"rus");
   float r,s,p;
   cout<<"Введите радиус"<< endl;
   cin>>r;
   s=pow(r,2)*M_PI;
   cout<<"Площадь круга"<<s<<endl;
   p=3*r*M_PI;
   cout<<"Периметр круга"<<p<<endl;
   

    return 0;
}