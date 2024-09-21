#include <iostream>
using namespace std;

int main() {
    int n;

    cin>>n;

    if(n<=5){
        cout<<n*n;
    }
    else{
        cout<<"tiny";
    }
    return 0;
}