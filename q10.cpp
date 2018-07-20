//============================================================================
// Name        :  Muhammad Ibrahim
// Roll No     : 13i-1821
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

bool       ispdrm ( string    str,    int i   , int j   ) {



			int c;

			if ( i == 0  ) {
								c = 1 ;

			}

			else{

				if ( str [ i ] == str [ j ] ) {


					 ispdrm ( str   , i-1   , j+1  ) ;
		}
				else{
					 c = 0 ;

			return false ; }}

return c;};



int      clear   (  string  &str ,  int len ) {

		string str1=str;

		int  j = 0 ;

for ( int  i = 0 ;  i < len ;  i++ ) {

			if ( isalnum ( str [ i ] ) ) {

					str [ j ] = str1 [ i ] ;

					j++;

		}}

						return j;};
int main( ) {

			int  len ;

			string      str,     ostr,    fstr;

			cout << "Your Input: " << endl ;

			getline ( cin , str ) ;

			len = str . length ( ) ;


			len = clear ( str , len ) ;

			ostr = str . substr ( 0 , len ) ;

for ( int  i = 0 ;  i < len ; i++ ){

				if ( isalpha  ( ostr [ i ] )  ) {

					 fstr[i]= toupper ( ostr [ i ] ) ;
}else{
	fstr[i]=ostr[i];
}
			}



int y,s,k=len/2;
if(len%2==0){


			 s=k ; y=k-1;
}
else{

	 y= k - 1 ;

				  s = k + 1  ;
}




			if ( ispdrm ( fstr ,  y   , s ) ) {

				          cout << endl<<"It is a palindrom" << endl ;

			}
			else{
				           cout <<endl<< "IT is not a palindrom" << endl ;
			}
	return 0;}
