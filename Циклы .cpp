/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Задание 2.1

#include <iostream>
 
using namespace std;
 
int main()
{
    for(int i = 0; i <= 100; i++)
        if(i%3 == 0)
            cout << i << endl;
    return 0;
}

//Задание 2.2

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int j = 0;
    while (i < 1000)
    {
        cout << i << endl;    
        if (i % 7 == 0) {
           j += i;
       }  

       i += 4;
     
    }
    cout << "Сумма всех чисел:" <<j << endl;
    return 0;
}
