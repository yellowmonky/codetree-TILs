#include <iostream>
using namespace std;

int main() {
    double a,b;
    
    cin>>a>>b;
    //int c =(a+b)/(a-b)
    cout<<fixed;
    cout.precision(2);

    cout<<(a+b)/(a-b);

    return 0;
}