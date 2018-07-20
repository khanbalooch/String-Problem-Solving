// Name   : Muhammad Ibrahim
//Roll No :13i-1821


#include <iostream>
using namespace std;

/**************************************************************************///function

int     sumi ( int  *arr ,  int x) {

if ( x==0 ) {
		return arr[0];}
else{
		return arr[x]+sumi(arr,x-1);     }};
/**************************************************************************///main

int main(){
		int  * x = new  int ;
 
                int *arr = new int [*x] ;

		cout << "Enter the size of array : " ;

		cin >> *x ;

for( int i = 0 ;  i < * x ; i++ ) {

		cout << "Element No " << i+1 << ":" ;

		cin >> arr [ i ] ;       }

int sum = sumi ( arr , *x ) ;

cout << "sum=" << sum << endl ;

		delete x;

		delete[] arr;
return 0;}
