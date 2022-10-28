#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	int Size, index = 0, digit = 0 ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size], Freq[10] = { 0 } ;

	if( Size <= 200 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
			
			if( Array[index] > 9 )
			{
				while( Array[index] != 0 )
				{
					digit = Array[index] % 10 ; // extract the digits.
					
					Freq[digit]++ ; // get the next digt.
					
					Array[index] /= 10 ;
				}
			}
			else
			{
				Freq[Array[index]]++ ;
			}
          
		}
	
		for( int D = 0; D < 10; D++ )
		{
			cout<<endl <<D <<" --> "<<Freq[D] <<endl;
		}
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" ;
	}
	
	return 0 ;
	
}
