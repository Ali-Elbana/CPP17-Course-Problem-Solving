#include<iostream>
using namespace std;


int main(void) 
{

    int s1, e1, s2, e2 ; 
	
	cin>>s1 >>e1 >>s2 >>e2 ;
	
	if( !((e1 < s2) || (e2 < s1)) ) // In case there is intersection.
	{
		if( s1 >= s2 )		{ cout<<s1 <<" " ; }
		
		else if( s2 >= s1 )	{ cout<<s2 <<" " ; }
		
		if( e1 <= e2 )		{ cout<<e1 ; }
		
		else if( e2 <= e1 )	{ cout<<e2 ; }
	}

 	else if( (e1 < s2) || (e2 < s1) ) // In case there isn't intersection.
	{
		cout<< -1 ;
	}
 
	//cout<<s <<" " <<e ;
	
	return 0;
}



