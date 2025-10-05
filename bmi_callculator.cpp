#include <iostream>

using namespace std;


int main(){

    float weight , height;

    cout <<"ENter the wt :"<<endl;
    cin >> weight;

    cout <<"ENter the ht:"<<endl;
    cin >> height;

    float BMI = weight / (height* height); 



    if(BMI < 18.5){
        cout <<"underweight" <<endl;
    }
    else{
        if(BMI>=18.5 && BMI<=24.9){
            cout << "Normal weight" <<endl;
        }
        else{
            cout << " overwight " << endl;
        }
    // cout <<" YOur BMI is:"  <<BMI;

    }

    cout <<" YOur BMI is:"  << BMI;




}