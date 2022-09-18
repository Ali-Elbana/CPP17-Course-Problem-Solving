#include<iostream>
using namespace std;


int main(void) 
{

    int X, Y, cntr = 0 ; 
	
	for( X = 50; X <= 300; X++ )
	{
		for( Y = 70; Y <= 400; Y++ )
		{
			
			if( (X < Y) && ((X + Y) % 7 ==0) )
			{
				cntr++ ;
			}
		}
		
	}

	cout<<cntr<<"\n";

	return 0;
}


	// Another solution
	
	
/* 	#include<iostream>
using namespace std;

int main() {
	int count = 0;

	for (int x = 50; x <= 300; ++x) {
		// Let's speed it
		// We can always start from the right condition maximum(70, x+1)
			// Saves some Y iterations
			// Remove the x < y condition
		int start = 70;

		if (start < x+1)
			start = x+1;

		for (int y = start; y <= 400; ++y) {
			if ((x + y) % 7 == 0) {
				//cout<<x<<" "<<y<<" "<<x+y<<"\n";
				++count;
			}
		}
	}
	cout<<count<<"\n";

	return 0;
}
 */




