/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Bucket 
{
        
public://видимымый доступ
    double volume;
    double used;
    Bucket (int A, int B) {volume = A, used = B;}
    

    
    void flush()
    {
        used = 0;
        
    }
    
    float fill(float C)
    {   
        
        float rest = C - (volume - used); 
        used = used + C;   
        
        if (used >= volume) {
            used = volume;
        } 
        if (rest <= 0)
        {
            rest = 0;
        }
        return rest;    
        
        
    }
private: // закрытый доступ

    
};


int main()
{

     Bucket test_01(12, 3);
     cout << "1) " << test_01.volume << ", " << test_01.used << "\n";

     int rest = test_01.fill(14);
     cout << "2) " << test_01.used << ", " << rest << "\n";

     test_01.flush();
     rest = test_01.fill(8);
     cout << "3) " << test_01.used << ", " << rest << "\n";
    
    
    
    return 0;
}