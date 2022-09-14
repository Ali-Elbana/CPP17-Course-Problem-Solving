#include<iostream>
using namespace std;


int main(void) 
{

    int age, years, months, days ; 
	
    cin>>age ; 
	
	years = age / 360 ;

	months = ( age - ( years * 360) ) / 30 ;
	
	days = ( age - ( years * 360) - ( months * 30 ) ) ;

	cout<<years <<" " <<months <<" " <<days <<" " <<endl ;


	return 0;
}

