#include<iostream>
using namespace std;


int main(void) 
{

    int Num ; 
	
    cin>>Num ; 
	
	bool is_even = ( Num % 2 == 0 ) ;
	
	bool is_odd = ( !is_even ) ;
	

	cout<< (100 * is_even) + ( 7 * is_odd ) <<endl ;


	return 0;
}

