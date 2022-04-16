/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void Sort(int array[10]) { // задаю массив
    int k; //временное хранилище для обмена элементов
    for (int i = 0; i < 9; i++) { //пузырьковая сортировка
        for (int j = i+1; j < 10; j++) {
            if (array[j] > array[i]) { // сравнение соседних элементов
                k = array[j];
                array[j] = array[i];
                array[i] = k;
            }
        }
    }
}

int main()
{
    int array[10];
    cout << "Введите 10 чисел из массива: ";
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }
    Sort(array);
    for (int i = 0; i < 10; i++)
        cout << array[i] << "\n";
    return 0;
}
