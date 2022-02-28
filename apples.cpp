/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "rus");
   int first_box,second_box,sum_box;
   cout<<"Колличество в первой коробке-" << endl;
   cin>>first_box;
   cout<<"Колличество во второй коробке-" << endl;
   cin>> second_box;
   cout<< "В первой коробке-" << first_box<<endl;
   cout<< "Во второй коробке-"<< second_box<< endl;
   sum_box=first_box+second_box;
   cout<<"Всего"<<sum_box<<"яблок"<<endl;
    return 0;
}