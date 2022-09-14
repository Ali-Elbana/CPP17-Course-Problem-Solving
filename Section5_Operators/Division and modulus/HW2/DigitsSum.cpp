#include<iostream>
using namespace std;


int main(void) 
{

    int Num, digit1, digit2, digit3, sum = 0 ; 
	
    cin>>Num ; 
	
	digit1 = Num % 10 	;
	
	Num = Num / 10 		;

	digit2 = Num % 10 	;
	
	Num = Num / 10 		;
	
	digit3 = Num % 10 	;

	sum = digit1 + digit2 + digit3 ;

	cout<<sum <<endl ;


	return 0;
}

