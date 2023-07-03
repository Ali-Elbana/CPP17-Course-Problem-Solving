

#include<iostream>
using namespace std;

int main(void) 
{
	
	int A, B ; 
	
	cin>>A >>B ;
	
	double EqnIfB1  = A*A 	;
	double EqnIfB_1 = 2*A+1 ;

	int IfB1  = ( B + 1 ) / 2 	;
	
	int IfB_1 = 1 - IfB1 		; 
	

	cout<<(EqnIfB1 * IfB1)+ (EqnIfB_1 * IfB_1 ) <<endl ;


	return 0;
}
