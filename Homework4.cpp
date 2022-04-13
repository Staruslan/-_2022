/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Задание 4.1
#include <iostream>
using namespace std;
 
int main()
{
 
 string str[10] = { "ноль","один","два","три","четыре","пять","шесть","семь","восемь","девять" };
    int i;
    cin >> i;
    cout << str[i] << endl;
 
 return 0;
}

//Задание 4.2
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[80];
    cin >> str;
            
            int i = 0;
            while (i < strlen(str))
            {
               int ascii = (int)str[i];
                if (ascii == 122)
                {
                    ascii = (int)str[i] - 25; 
                }
                else ascii = (int)str[i] + 1;
                cout << (char)ascii;
                ++i;
            }
        char c;
    return 0;
}
