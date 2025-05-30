//
// 완전제곱수
//

#include <iostream>
using namespace std;

int main() {
    int m, n, sum = 0, min = 0;
    cin >> m >> n;

    for (int i = 1; i*i <= n; i++) { //1부터 n까지 돌면서 m이상의 완전제곱수 찾기
        if (i*i >= m) {
            if (sum == 0) min = i*i;
            sum += i*i;
        }
    }

    if (sum == 0) cout << -1 << endl;
    else cout << sum << "\n" << min << endl;


}