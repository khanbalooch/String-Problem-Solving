// Name   : Muhammad Ibrahim
//Roll No :13i-1821




#include <iostream>
#include <cstring>
using namespace std;

/********************************************************************///

void   reverse  ( string  line   , int  x ) {

if ( x==0 ) { 

		cout <<  line [ 0 ] ; } 

else{

		cout << line [ x ] ;

		reverse ( line , x - 1 ) ;  }};
/*********************************************************************///

int main(){

		int  x   ,    y ,    i = 0 ;

		string   line ;

		cout  <<   "Enter string: "   ;

		getline ( cin , line ) ;

while ( line[ i ]!='\0'){

				i++;}

		x = i ;

		reverse ( line ,  x ) ;

		cout << endl ;
return 0;}
