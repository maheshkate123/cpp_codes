#include <iostream>

using namespace std;

int main(){
    int day;

    cout <<  "day "<< endl;
    cin >> day;

    switch(day){
        case 1: cout << "it;s Monday" ;
        break;
        case 2:cout << "it;s Tuesday" ;
        break;
        case 3:cout << "it;s Wednesday" ;
        break;
        case 4:cout << "it;s thursday ";
        break;
        case 5:cout << "it;s friday" ;
        break;
        case 6:cout << "it;s saturday, enjoy weekend" ;
        break;
        case 7:cout << "its sunday , enjoy weekend ";
        break;

        default:
        cout << "wrrong selecttion..........!";
        break;

        return 0;

    }

}