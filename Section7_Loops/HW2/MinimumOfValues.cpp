#include<iostream>
using namespace std;


int main(void) 
{

    int TestCasesNums, NumOfNums, Nums, cntr = 0, Minimum, i = 0, j = 0 ; 
	
	cout<<"Number of test cases:" ;
    cin>>TestCasesNums ; 
	
	while( TestCasesNums-- > 0 )
	{
		cout<<endl <<"Number of the entered numbers:" ;
		cin>>NumOfNums ;
		
		while( cntr < NumOfNums )
		{
			cout<<"Number" <<++i <<":" ;
			cin>>Nums ;
			
			if( cntr == 0 )
			{
				Minimum = Nums ;
			}
			
			else if( Minimum > Nums )
			{
				Minimum = Nums ;
			}
			
			cntr++ ;
		}
		
		cntr = 0 ;
		
		i 	 = 0 ;
		
		cout<<endl <<"Minimum" <<++j <<":"  <<Minimum <<endl ;
	}
	


	return 0;
}

