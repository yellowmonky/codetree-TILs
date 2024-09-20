#include <iostream>
using namespace std;

int main() {
    string p;
    cin >> p;

    string p1 = p.substr(0,3);
    string p2 = p.substr(3,5);
    string p3 = p.substr(8,5);

    cin >> p;

    cout << p1 ;
    cout << p3 ;
    cout << p2 ;
    return 0;
}