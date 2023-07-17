#include <iostream>
#include <string.h>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void 	Get2Nums	( double &n1, double &n2 ) 	;

double 	Sum2Nums	( double n1, double n2 ) 	; 

double 	Sub2Nums	( double n1, double n2 ) 	; 

double	Mult2Nums	( double n1, double n2 ) 	; 

double 	Div2Nums	( double n1, double n2 ) 	;

int 	DispMenu	( void ) 					;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{

	system( "cls" ) ;
	
	double 			num1 			{0} ;
	double 			num2 			{0} ;
	int   		 	choice			{0} ;
	unsigned int 	operationsNum	{0} ;
	
	do
	{
		
		choice = DispMenu( ) ;
		
		switch( choice )
		{
			
			// sum //
			case 1: 
				
				Get2Nums( num1, num2 ) ;
				
				cout<<endl <<' ' <<num1 <<" + " <<num2 <<" = " 
				<<Sum2Nums( num1, num2 ) <<endl;
			 
				operationsNum++ ;
			 
			break ;
			
			// sub //
			case 2:
			 
				Get2Nums( num1, num2 ) ;
				
				cout<<endl <<' ' <<num1 <<" - " <<num2 <<" = " 
				<<Sub2Nums( num1, num2 ) <<endl;
			 
				operationsNum++ ;
			 
			break ;
			
			// mult //
			case 3:
				
				Get2Nums( num1, num2 ) ;
				
				cout<<endl <<' ' <<num1 <<" x " <<num2 <<" = " 
				<<Mult2Nums( num1, num2 ) <<endl;
				
				operationsNum++ ;
				
			break ;
			
			// div //
			case 4:
				
				Get2Nums( num1, num2 ) ;
				
				if( num2 == 0 )
				{
					cout<<endl <<"Error, division by zero" <<endl ;
				}
				else
				{
					cout<<endl <<' ' <<num1 <<" / " <<num2 <<" = " 
					<<Div2Nums( num1, num2 ) <<endl;
				}
				
				operationsNum++ ;
				
			break ;
			
			// end //
			case 5:
			 
				cout<<endl <<"End the program" <<endl;
				
			break ;
			
			default:
			 
				cout<<endl <<"Not an option, try again" <<endl;
			 
			break ;
			
		}
		
	}while( choice != 5 ) ;
	
	cout<<endl <<"Number of operations = " <<operationsNum <<endl ;
	
	return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void Get2Nums( double &n1, double &n2 )
{
	
	cout<<endl <<"Enter the two numbers: " ;
	cin>>n1 >>n2 ;
	
}

////////////////////////////////////////////////////////////////////

double Sum2Nums( double n1, double n2 )
{
	
	return n1 + n2 ;
	
}

////////////////////////////////////////////////////////////////////

double Sub2Nums( double n1, double n2 )
{
	
	return n1 - n2 ;
	
}

////////////////////////////////////////////////////////////////////

double Mult2Nums( double n1, double n2 )
{
	
	return n1 * n2 ;
	
}

////////////////////////////////////////////////////////////////////

double Div2Nums( double n1, double n2 )
{
	
	return n1 / n2 ;
	
}

////////////////////////////////////////////////////////////////////

int DispMenu( void )
{
	
	int choice{0} ;
	
	cout<<endl <<"Choose one of these 5 options: " ;
	cout<<endl <<"1-Add 2 numbers" 		;
	cout<<endl <<"2-Subtract 2 numbers" ;
	cout<<endl <<"3-Multiply 2 numbers" ;
	cout<<endl <<"4-Divide 2 numbers" 	;
	cout<<endl <<"5-End the program" 	;
	
	cout<<endl <<"Enter your choice from 1 to 5: " ;
	cin>> choice ;
	
	return choice ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////