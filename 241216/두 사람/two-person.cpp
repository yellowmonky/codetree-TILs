#include <iostream>
using namespace std;

int main() {
    
struct {
    int age;
    char sex;
} person; // 여기에 세미콜론 추가

    person person1,person2;

    cin>>person1.age>>person1.sex;
    cin>>person2.age>>person2.sex;

    if(person1.sex=='M'||person2.sex=='M'){
        cout<<1;
    }


    return 0;
}