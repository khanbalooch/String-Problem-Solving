// Name   :   Muhammad Ibrahim
//Roll No :   13i-1821



#include <iostream>
using namespace std;

void		sol ( int  arr [ ] ,   int  sz  , int   j  ,  int  k  ) {

				//if(j == sz){

				if(arr [ j ] == 0 ){

					cout  <<  "The puzzle is solvable"  ;

				}

				else{

					cout  <<  "the puzzle is unsolvable" ;
				}//****************************************************************************///base case



				if(j==0){

						j = j + arr [ j ] ;

						sol ( arr  ,  sz  ,    j  ,   k  );

					}



				if(j - arr [ j ] > -1){

						j = j - arr [ j ] ;

						sol ( arr  ,  sz  ,    j  ,   k  );

				}
		else{

				if( j + arr [ j ] < sz+1) {


						j = j + arr [ j ] ;

						sol ( arr  ,  sz  ,    j  ,   k  );

				}

		else{


						cout  <<  "the puzzle is unsolvable"  <<  endl  ;
		}
		}




};


int main ( ) {

				int      sz,   j=0,     k=0;

				cout  << "Enter the Number of Elements: "  ;

				cin  >>  sz ;

				int  * arr ;

				arr  =  new  int [ sz ] ;

	for ( int  i = 0 ;    i < sz ;    i++ ) {

				cout  <<  "Element No "  <<  i + 1 <<  " : "  <<  endl  ;

				cin  >>  arr [ i ] ;

	}


				sol  ( arr ,   sz   ,   j , k) ;
return 0;}

