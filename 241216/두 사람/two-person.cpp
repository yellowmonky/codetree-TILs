#include <iostream>
using namespace std;

int main() {
    struct person{
        int age;
        char sex;
    }; // 세미콜론 추가

    person person1, person2;

    cin >> person1.age >> person1.sex;
    cin >> person2.age >> person2.sex;

    if ((person1.sex == 'M'&&person1.age>=19) || (person2.sex == 'M'&&person2.age>=19)) {
        cout << 1;
    }
    else cout<<0;

    return 0;
}
