//
// 생일
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int day, month, year;

    Student(string name, int day, int month, int year): name(name), day(day), month(month), year(year) {}
};

int main() {
    int n;
    cin >> n;

    vector<Student> students;
    while (n--) {
        string name;
        int day, month, year;
        cin >> name >> day >> month >> year;

        students.push_back(Student(name, day, month, year));
    }

    // 오름차순 정렬
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        if (a.year != b.year) return a.year < b.year;
        if (a.month != b.month) return a.month < b.month;
        return a.day < b.day;
    });

    cout << students[students.size()-1].name << "\n" << students[0].name << endl;
}
