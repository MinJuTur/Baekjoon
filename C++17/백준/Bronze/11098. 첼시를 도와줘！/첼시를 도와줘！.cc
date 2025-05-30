//
// 첼시를 도와줘!
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Player {
    int price;
    string name;
public:
    Player(int p, string n): price(p), name(n) {}

    int getPrice() const { return price; }
    string getName() const { return name; }

};

int main() {
    int n;
    cin >> n;

    while (n--) {
        int p;
        cin >> p;

        vector<Player> players;

        while (p--) {
            int c;
            string n;
            cin >> c >> n;
            players.push_back(Player(c, n));
        }

        sort(players.begin(), players.end(), [](const Player& a, const Player& b) {
            return a.getPrice() > b.getPrice();
        });
        cout << players[0].getName() << endl;
    }
}

