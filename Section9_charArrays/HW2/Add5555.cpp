#include <iostream>
using namespace std;

int main() 
{
	
	system( "cls" ) ;
	
	string num ;

	cout<<endl <<"Enter the number: " ;

	cin>>num ;

	int sz = num.size() ;

	int carry = 0 ;
	
	if( sz < 6 )
	{
		cout<<endl <<"Short number size, please try again with a size not less than 6" <<endl ;
	}
	else
	{
		for( int i = 0; i < sz; ++i ) 
		{
			
			int digit = num[sz - 1 - i] - '0';
	
			if( i < 4 )
			{
				digit += 5 ; // add 5 in last 4 nums.
			}	
			
			digit += carry ;	// add any carry
	
			if( digit >= 10 )
			{
				digit -= 10, carry = 1 ;
			}
			else
			{
				carry = 0 ;
			}
			
			num[sz - 1 - i] = digit + '0';
		}
		
		if( carry > 0 )
		{
			cout<<1 ;
		}
		
		cout<<num ;
		
	}
	
	return 0 ;
}
