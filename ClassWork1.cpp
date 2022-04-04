/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;

int main()
{
    char  text[16]="Testing";
    char text2[]="Any loooong text";
    char lines[3][16]={
        "Testing string",
        "Ruslan",
        "Testing sting"
    };
    cout<<lines[1];
    lines[1][1]='X';
    cout<<lines[1];
    return 0;
}