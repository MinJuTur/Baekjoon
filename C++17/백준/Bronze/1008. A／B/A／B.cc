#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    cout << fixed;       // 고정 소수점(fixed-point) 방식으로 출력
    cout.precision(9);   // 소수점 아래 9자리까지 출력

    cout << a / b << endl;
    return 0;
}