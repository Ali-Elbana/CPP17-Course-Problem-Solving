#include<iostream>
using namespace std;


int main(void) 
{

    int X, Num1, Num2, Num3, Num4, Num5, LessOrEqual = 0, Bigger = 0 ; 
	
    cin>>X >>Num1 >>Num2 >>Num3 >>Num4 >>Num5 ; 
	
	if( Num1 <= X )
	{
		LessOrEqual++ ;
	}
	if( Num1 > X ) 
	{
		Bigger++ ;
	}
	
	if( Num2 <= X )
	{
		LessOrEqual++ ;
	}
	if( Num2 > X )
	{
		Bigger++ ;
	}

	if( Num3 <= X )
	{
		LessOrEqual++ ;
	}
	if( Num3 > X )
	{
		Bigger++ ;
	}

	if( Num4 <= X )
	{
		LessOrEqual++ ;
	}
	if( Num4 > X )
	{
		Bigger++ ;
	}
	
	if( Num5 <= X )
	{
		LessOrEqual++ ;
	}
	if( Num5 > X )
	{
		Bigger++ ;
	}
	
	
	cout<< LessOrEqual <<" " <<Bigger <<endl ;


	return 0;
}

// Another better solution


/* #include<iostream>
using namespace std;

int main() {
	int x, a1, a2, a3, a4, a5;

	cin >> x >> a1 >> a2 >> a3 >> a4 >> a5;

	int cnt = 0;

	cnt += (a1 <= x);
	cnt += (a2 <= x);
	cnt += (a3 <= x);
	cnt += (a4 <= x);
	cnt += (a5 <= x);

	cout << cnt << " " << 5 - cnt << "\n";

	return 0;
}
 */
