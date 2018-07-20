// Name   : Muhammad Ibrahim
//Roll No :13i-1821




#include <iostream>
using namespace std;

/**********************************************************************///

int   som ( int  x ){ 

if( x==1 ) {
		return 1;}

else{
		return  x + som ( x - 1 ) ;    }};

/*********************************************************************///

int main(){
		int     x,    z ;

		cout << "Input:" ;

		cin >> x ;

		z = som ( x ) ; 

		cout << "The sum up to  " << x << "  : " << z << endl ;
return 0;}
