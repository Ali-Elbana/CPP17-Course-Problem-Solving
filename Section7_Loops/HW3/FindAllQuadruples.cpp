#include<iostream>
using namespace std;


int main(void) 
{

    int a, b, c, d, cntr = 0 ; 
	
	for( a = 1; a <= 200; a++ )
	{
		for( b = 1; b <= 200; b++ )
		{
			
			for( c = 1; c <= 200; c++ )
			{
				
				for( d = 1; d <= 200; d++ )
				{
					if( (a + b) == (c + d) )
					{
						cntr++ ;
					}
				}
			}
		 
		}
		
	}

	cout<<cntr<<"\n";

	return 0;
}


	// Another solution
	
	
/* 
	#include<iostream>
using namespace std;

int main() {
	int count = 0;

	for (int a = 1; a <= 200; ++a) {
		for (int b = 1; b <= 200; ++b) {
			for (int c = 1; c <= 200; ++c) {
				int d = a + b - c;

				if(1 <= d && d <= 200)
					count++;
			}
		}
	}

	cout << count << "\n";

	return 0;
}

 */




