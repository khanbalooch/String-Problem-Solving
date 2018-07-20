//============================================================================
// Name        :  Muhammad Ibrahim
// Roll No     :  13i-1821
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void        find (int arr [ ] , int sz,   int target){

	if(arr[sz]==target){

			cout << "the number you Entered is sitting in box No :" << sz+1 <<endl<<"******************"<< endl;

	}

	else{

			find ( arr ,sz-1  ,target);

	}
};


void        go  (int arr [ ] ,  int sz ,   int target  ){

							cout << "do you want to search a number you entered( 1 / 2 ): ";

							cout << "\n1.Yes \n2.No" << endl ;

							cout << "Enter Here :";

							cin>> target;

	switch  ( target  ){

	case 1:
							cout << "Enter The Number : ";

							cin>>target;

							find (arr  ,sz ,target ) ;
							break;

	case 2:

							cout << "programme Ended\n";

							break;

	default:

							cout << "Invalid Input \nInput again\n";
							break;

	};
	 	 	 	if(target !=2){ 	 	 	 	 go  ( arr  ,   sz ,    target  );
	 	 	 	}};


int main(){

			const int     sz = 10 ;

			int           arr [ sz ],      target     ;

			for (  int i=0;  i<sz;  i++ ){

							cout << "Enter Element No " << i+1 << ": " << endl;

							cin>>arr[i];
			}

			go( arr , sz  ,   target  );





return 0;}

