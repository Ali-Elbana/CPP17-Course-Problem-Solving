#include<iostream>
using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	int K, N, sum0 = 0, sum1 = 0, firstBiggestSumIndex = 0 ;

	cout<<endl <<"Enter the sliding window fixed size: " ;
	cin>>K ;

	cout<<endl <<"Enter the array size: " ;
	cin>>N ;

	int Array[N] ;
	
	if( K <= N && N < 200 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index < N; index++ )
		{
			cin>>Array[index] ;
		}
		
		for( int s = 0; s < K; s++ )
		{
			sum0 += Array[s] ; // Get the summition of the first K elements on the Array.
		}
		
		cout<<endl ;
		for( int R = 0; R < (N - K + 1); R++ )
		{
			
			for( int i = R; i < (K + R); i++ )
			{
				
				cout<<"index: " <<i <<endl ;
				
				sum1 += Array[i] ;
			}
			
			cout<<"----------------------------------" <<endl ;
			
			cout<<"sum1: " <<sum1 <<endl<<endl ;
			
			if( sum1 > sum0 )
			{
				sum0 = sum1 ;
				
				firstBiggestSumIndex = R ;
				
				cout<<endl <<"firstBiggestSumIndex: " <<firstBiggestSumIndex <<endl ;
			}
			
			sum1 = 0 ;
			
		}
		
		cout<<endl <<"The biggest sum of the sub-array is obtained by those indices: " ;
		for( int i = firstBiggestSumIndex; i < (firstBiggestSumIndex + K); i++ )
		{
			cout<<i <<' ' ;
		} 
      
		cout<<endl ;
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0;
}

