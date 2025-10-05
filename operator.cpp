#include <iostream>
using namespace std;

int main(){
	//arithmatic opertor
	
	int a=21;
	double b =32.34;

	cout << a+b <<endl;
	cout << a-b <<endl;
	cout << a*1 << endl;
	cout << a/b << endl;
	cout <<endl;

	a++;
	--a;
	cout << a <<endl;
	cout <<a++ <<endl;
	cout << a<< endl;


	//comaparision operator

	cout <<(a==b) <<endl;
	cout <<(a!=b) <<endl;
	cout <<(a<b) << endl;
	cout <<(a>b) <<endl;
	cout <<(a<=b) <<endl;
	cout <<(a>=b) << endl;

	cout << endl;

	//assignment operator

	int x=a +=3 ;
	cout << x <<endl;

	double y =b-=5;
	cout << y << endl;

	int zx=a*=3 ;
	cout << x <<endl;

	int p=a %=3 ;
	cout << x <<endl;

	int q=a &=3 ;
	cout << x <<endl;

	int r=a >>=3 ;
	cout << x <<endl;

	int g=454;
	g+=3;
	cout << "G::" << g <<endl;


	cout << endl;
	
	//logical

	cout << (a>b) && (a>b);
	cout <<endl;
	cout << (a<b) || (a>b);
	// cout << (a>b) ! (a>b);

    cout << endl;


	//operator precedence

	//arithmatic , comparision, logical


	cout <<(a==5 && b== 5+4);






	return 0;
}
