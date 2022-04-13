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
    char s1[80];
    cout << "Введите строку: ";
    cin >> s1;//ввод строки с клавиатуры
    cout <<"Вот ваша строка:" ;
    for (int i = 0; i < strlen(s1); i++) {
        cout <<char (s1[i] + 1);
        
    }
    return 0;
}
