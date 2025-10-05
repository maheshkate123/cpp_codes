#include <iostream>
using namespace std;

int main(){
    float a , b, c;
    cout << " enter the length of triangle " << endl;
    cin >> a >> b >> c;

    if(a==b && b==c){
        cout << "equilateral trianle" << endl;
    }
    else{
        if(a!=b && a!=c && b!=c){
            cout << "Scalence trianle " ;
        }
        else{
            cout << "isosceles triangle" << endl;
        }
    }
}