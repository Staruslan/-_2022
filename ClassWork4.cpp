/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   short *uk;
    short massiv[12]={0,1,2,3,4,5,6,7,8,9,10,11};
    uk=&massiv[0];
    for (int i=0;i<12;i++){
        cout<<*(uk+i)<<":"<<uk+i<<"\n";
        cout<<massiv[i]<<"[M]\n";
    }
    return 0;
}