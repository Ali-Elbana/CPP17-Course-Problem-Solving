#include<iostream>
using namespace std;


int main(void) 
{

    int A, B, C ; 
	
    cin>>A >>B >>C ; 
	
	int Max = A, Mid = B, Min = C ;
	
	
	if( B > Max )
	{
		Max = B ;
		
		Mid = A ;
		
		if( C > Max )
		{
			Max = C ;
			
			Mid = B ;
			
			Min = A ;
		}
		
		// Here: Max = B(✔), Mid = A, Min = C.
		
		else
		{
			if( C > Mid )
			{
				Mid = C ;
				
				Min = A ;
			}
			
			else
			{
				Min = C ;
			}
			
		}	
		
	}
	
	else if( C > Max )
	{
		Max = C ;
		
		Mid = A ;
		
		if( B > Max )
		{
			Max = B ;
			
			Mid = C ;
			
			Min = A ;
		}
		
		// Here: Max = C(✔), Mid = A, Min = C.
		
		else
		{
			if( B > Mid )
			{
				Mid = B ;
				
				Min = A ;
			}
			
			else
			{
				Min = B ;
			}
			
		}	
		
	}

	// Here: Max = A(✔), Mid = B, Min = C. 

	if( B < Min )
	{
		Mid = Min ;
	
		Min = B ;	
	}

	cout<<Min <<" " <<Mid <<" " <<Max <<" " <<endl ;


	return 0;
}




// Another better solution

/* #include<iostream>
using namespace std;

int main() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	if (b < a) { // Swap them

		tmp = a;
		a = b;
		b = tmp;
	}
	// Now a, b are correct

	if (c < b) { // Swap them

		tmp = b;
		b = c;
		c = tmp;

		// Now b, c are correct
		// But a, b may not be again

		if (b < a) {	// Swap them{
			tmp = a;
			a = b;
			b = tmp;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n";

	return 0;
}
 */
