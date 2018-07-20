// Name   : Muhammad Ibrahim
//Roll No :13i-1821





#include <iostream>
using namespace std;

/*************************************************************///function

int   prod( int x , int y ){

if ( y==1 ) {
		return x;}

else{

		return x + prod ( x , y - 1 ) ;       }};

/**************************************************************///main

int main(){

		int      x,    y,      product;

		cout << "Enter values for a and b \n" ;

		cout << "a=" ;

		cin >> x ;

		cout << "b=" ;

		cin >> y ;


		product =  prod( x , y ) ;

		cout << "The product is: "  << product << endl ;
return 0;}
