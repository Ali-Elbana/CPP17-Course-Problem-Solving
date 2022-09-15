#include<iostream>
using namespace std;


int main(void) 
{

    int A, B, C ; 
	
    cin>>A >>B >>C ; 
	
	int Max = A ;
	
	
	if( Max < 100 )
	{
	
		if( (B < 100) && (B > Max) )
		{
			Max = B ;
		}
		
		if( (C < 100) && (C > Max) )
		{
			Max = C ;
		}	
		
	}
	
	else 
	{

		if( (B < 100) && (B > C) )
		{
			Max = B ;
		}
		
		if( (C < 100) && (C > B) )
		{
			Max = C ;
		}
		
		else
		{
			Max = -1 ;
		}	
		
	}

	
	cout<< Max <<endl ;


	return 0;
}

 
// Another better solution


/* #include<iostream>
using namespace std;

// Assume all integers are >= 0

int main() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	int res = -1;

	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout<<res<<"\n";

	return 0;
}
 */



