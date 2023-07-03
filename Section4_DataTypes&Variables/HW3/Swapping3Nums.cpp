

#include<iostream>
using namespace std;

int main(void) 
{
	
	int a, b, c, temp ; // a= 115, b= 20, c= 301.
	
	cin>>a >>b >>c ;

	
	temp = a ;	// now temp is 115, a is like an empty cup(115);

	a = b ; // now a is 20. 
	
	// put c in b
	b = c ;		// now b is 301. 

	// get the temp value in a in c
	c = temp ;


	cout<<a <<" " <<b <<" " <<c <<endl ; // a= 20, b= 310, c= 115.

	return 0;
}
