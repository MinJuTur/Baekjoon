#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << num1*(num2%10) << "\n" << num1*((num2/10)%10) << "\n" << num1*(num2/100) << "\n" << num1*num2;
}