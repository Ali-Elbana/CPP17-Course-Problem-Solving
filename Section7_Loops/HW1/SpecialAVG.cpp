#include<iostream>
using namespace std;


int main(void) 
{

    int N, Nums, NumsCntr = 1, EvenCntr = 0, OddCntr = 0, EvenSum = 0, OddSum = 0, EvenAVG = 0, OddAVG = 0 ; 
	
    cin>>N ; 
	
	EvenCntr = N / 2 ;
	
	OddCntr = N - EvenCntr ;
	
	while( NumsCntr <= N )
	{
		
		cin>>Nums ;
		
		if( (NumsCntr % 2 == 0) )// is even number
		{
			EvenSum += Nums ;
		}
		
		else
		{
			OddSum += Nums ;
		}
		
		NumsCntr++ ;
	}
	
	EvenAVG = EvenSum / EvenCntr ;
	
	OddAVG = OddSum / OddCntr ;
	
	cout<<OddAVG <<" " <<EvenAVG <<endl ;


	return 0;
}

