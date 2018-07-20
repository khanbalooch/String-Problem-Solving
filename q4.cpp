//Name    : Muhammad Ibrahim
//Roll No : 13i-1821



#include <iostream>
using namespace std;

float   pie ( float n, int m) {

		if( n == 1 ) {

			       return 1/n;

}
		else{

			if(m%2==0){

				return (-1/n)+pie(n-2,m+1);

}

		else{

				return (1/n)+pie(n-2,m+1);
		}
	}};



int main(){
		float  n,    a,    k;

		int    m   =  1  ;

		cout  <<  "Enter the NUmber:"  ;

		cin  >>  n ;

		cout<<  "The value of Pie upto 1/"  <<  n  <<  "th term :";

		cout<<  4*  pie (n , m )   <<  endl; ; 
return 0;}

