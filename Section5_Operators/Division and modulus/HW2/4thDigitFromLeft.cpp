#include<iostream>
using namespace std;


int main(void) 
{

    int Num, FourthDigit ; 
	
    cin>>Num ; 
	
	Num = Num / 1000 		; // remove last 3 digits.

	FourthDigit = Num % 10 	; // get the 4th digit.

	cout<< FourthDigit <<endl ;


	return 0;
}

