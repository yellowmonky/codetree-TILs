#include <iostream>
using namespace std;

int main() {
    int money;
    cin>>money;

    if(money>=3000){
        cout<<"book";
    }
    else if(money>=1000){
        cout<<"mask";
    }
    else{
        cout<<"no";
    }
    return 0;
}