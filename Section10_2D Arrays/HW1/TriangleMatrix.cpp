#include <iostream>
#include <cmath>

using namespace std;


int main(void) 
{

	system( "cls" ) ;
	
	unsigned int N ;
	
	unsigned int upSum  = 0 ;
	unsigned int lowSum = 0 ;
	
	cout<<endl <<"Enter the number of rows and columns: " ;
	cin>>N ;
	
	int array[N][N] ;
	
	cout<<endl <<"Enter the array elements: " ;
	for( int r = 0; r < N; r++ )
	{
		
		for( int c = 0; c < N; c++ )
		{
			cin>>array[r][c] ;
		}
		
	}
	
	for( int r = N-1; r >= 0; r-- )
	{
		
		for( int c = r; c >= 0; c-- )
		{
			
			lowSum += array[r][c] ;
			
		}
		
	}
	
	cout<<endl <<"The sum of the lower triangle: " <<lowSum <<endl ;
	
	
	for( int r = 0; r < N; r++ )
	{
		
		for( int c = r; c < N; c++ )
		{
			
			upSum += array[r][c] ;
			
		}
		
	}
	
	cout<<endl <<"The sum of the upper triangle: " <<upSum <<endl ;
	
	
	

	return 0 ;
	
}



// better solution


/* #include<iostream>
using namespace std;

int main() {
	int n, upper = 0, lower = 0, val;
	// No need to create matrix!
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> val;

			if (i <= j)
				lower += val;

			if (i >= j)
				upper += val;
		}
	}

	cout << lower << "\n";
	cout << upper << "\n";
	


	return 0;
}
 */
