

// Задание 3.1

#include<fstream>
#include<iostream>
using namespace std;
int main()
{

    ofstream fout("output.txt");
    int A, B;
    cin >> A >> B;
    for (int i = A; i <= B ; i++)
    {
        fout << i * 3 << endl;
    }
    fout.close();

    return 0;
}


//Задание 3.2

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int j;

    ifstream file("output.txt");

    if (file.is_open()) {
        j = 0;
        while (getline(file, line)) {
            cout << ++j << ". ";
            cout << line << '\n';
        }
        file.close();
    }

    return 0;
}