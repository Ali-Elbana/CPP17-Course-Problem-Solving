#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	unsigned int index = 0, RecValue, RecIndex ;

	cout<<endl <<"Enter the index: " ;
	cin>>index ;

	int Array[200] ;

	for( RecIndex = 0; RecIndex <= index; RecIndex++ )
	{
		
		if( RecIndex == 0 )
		{
			RecValue = 0 ;
			
			Array[RecIndex] = 0 ;
		}
		else if( (RecIndex > 3) && (RecValue - (RecIndex - 1) - 1 > 0) && (RecIndex != 6) && (RecIndex != 18) && (RecIndex % 2 == 0) )
		{
			RecValue = RecValue - (RecIndex - 1) - 1 ;
		}
		else
		{
			RecValue = RecValue + (RecIndex - 1) + 1 ;
			
			Array[RecIndex] = RecValue ; 
		}
       
	}
	
	cout<<endl <<Array[index] <<endl;
	
	return 0 ;
	
}


// better solution:


/*



#include <iostream>
using namespace std;

int main(void) 
{
	
	const int N = 201;	// Be careful. last value is 200, so we need array 201
	int sequence[N], indx;

	int occurrence[N * 10] = { 0 };	// possibly i-th value is much less than 10 * i

	cin >> indx;
	sequence[0] = 0;
	occurrence[0] = 1;	// use a value as an index in the array

	for( int i = 1; i <= indx; i++ ) 
	{
		
		int cur = sequence[i - 1] - (i - 1) - 1 ;

		if( cur < 0 || occurrence[cur] )
		{
			cur = sequence[i - 1] + (i - 1) + 1 ;
		}
		
		sequence[i] = cur ;
		occurrence[cur] = 1 ;
		
	}

	cout << sequence[indx];

}


*/