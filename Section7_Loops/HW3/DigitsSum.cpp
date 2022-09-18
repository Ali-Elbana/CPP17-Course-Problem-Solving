#include<iostream>
using namespace std;


int main(void) 
{

	int N, A, B, sum = 0 ; 
	
    cin>>N >>A >>B ; 
	
	for( int i = 1; i <= N; i++ )
	{
		int tmp = i ; // be careful - take copy
		
		int digits_sum = 0 ;

		while(tmp) 
		{
			digits_sum += tmp % 10 ;
			
			tmp /= 10 ;
		}
		
		if( (digits_sum >= A) && (digits_sum <= B) )
		{
			sum += i ;
		}
		
	}

	cout<<sum <<endl ;


	return 0;
}
