
#include<iostream>


 using namespace std ;


int main( void )
{
	
	double Num1{0} ;
	double Num2{0} ;
	
	cout<<"Enter the first number: ";
	cin>>Num1 ;
	
	cout<<"Enter the second number: ";
	cin>>Num2 ;
	
	
	// Doing addition to the two numbers.
	cout<<Num1 <<" + " <<Num2 <<" = " <<Num1 + Num2 <<endl;
	
	// Doing substraction to the two numbers.
	cout<<Num1 <<" - " <<Num2 <<" = " <<Num1 - Num2 <<endl; 
	
	if( Num2 != 0 )
	{
		// Doing division to the two numbers.
		cout<<Num1 <<" / " <<Num2 <<" = " << Num1 / Num2 <<endl;
	}
	
	else if( Num2 == 0 )
	{
		cout<<" Fatal error: \"Division on zero\" " <<endl;
	}
	
	// Doing multiplication to the two numbers.
	cout<<Num1 <<" * " <<Num2 <<" = " << Num1 * Num2 <<endl;
	

}


