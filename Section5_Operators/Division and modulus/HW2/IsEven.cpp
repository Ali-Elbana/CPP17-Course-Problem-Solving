#include<iostream>
using namespace std;


int main(void) 
{

    int Num ; 
	
    cin>>Num ; 
	
	
	bool is_even1 = ( Num % 2 == 0 ) 		 ;
	
	bool is_even2 = ( Num / 2.0 == Num / 2 ) ;
	
	bool is_even3 = ( (Num % 10) % 2 == 0 )  ;
	
	cout<<is_even1 <<endl <<is_even2 <<endl <<is_even3 <<endl ;


	return 0;
}

