#include<iostream>

using namespace std;

int main(){
    int a=12;
    int b =14;

    int c=a;
    a=b;
    b=c;

    cout << a << endl;
    cout<<b << endl;

    return 0; 
}