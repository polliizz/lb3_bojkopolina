#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int factorial = 1;
    int i = 1;
    int number;
    cout << "Число для обчислення факторіалу: ";
    cin >> number;
    while (i <= number) {
        factorial *= i;  
        i++;            
    }
    cout << "Факторіал числа " << number << " = " << factorial << endl;
    return 0;
}
