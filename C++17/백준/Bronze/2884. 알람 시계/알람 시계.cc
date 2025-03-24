#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    if (M < 45) { // H가 바뀌어야 할 때
        M = 60 - 45 + M;
        if (H == 0) H = 23;
        else H--;
    } else { // M만 바뀌면 될 때
        M -= 45;
    }

    cout << H << " " << M;
}