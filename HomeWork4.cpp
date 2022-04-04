/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
 
int main()
{
    system("chcp 1251");
 
    const char *arr[] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    int n;
 
    std::cin >> n;
    std::cout << ( (n>=0 && n<=9) ? (arr[n]) : ("Ошибка ввода числа.") ) << std::endl;
 
    system("pause");
    return 0;
}