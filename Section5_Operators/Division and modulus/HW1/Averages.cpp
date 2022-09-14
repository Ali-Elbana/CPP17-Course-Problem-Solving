#include<iostream>
using namespace std;


int main(void) 
{

    int Num1, Num2, Num3, Num4, Num5 ; 
	
    cin>>Num1 >>Num2 >>Num3 >>Num4 >>Num5 ; 
	
	double average = ( Num1 + Num2 + Num3 + Num4 + Num5 ) / 5.0 ;
	
    cout<<average <<endl ;

	cout<< (double) ( Num1 + Num2 + Num3 ) / (double) ( Num4 + Num5 ) <<endl ;

	average = (double) (( Num1 + Num2 + Num3 ) / 3.0) /  (double) (( Num4 + Num5 ) / 2.0) ;

	cout<<average <<endl ;

	return 0;
}

