#include<iostream>
using namespace std;


int main(void) 
{
	
	int Nsize, Qsize, flag = -1 ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Nsize ;

	int Narray[Nsize] ;
	
	if( Nsize <= 200 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Nsize - 1; index++ )
		{
			cin>>Narray[index] ;
		}
		
		cout<<endl <<"Enter the query size: " ;
		cin>>Qsize ;
		
		int Qarray[Qsize] ;
		
		cout<<endl <<"Enter the query elements: " ;
		for( int index = 0; index <= Qsize - 1; index++ )
		{
			cin>>Qarray[index] ;
		}
		
		for( int q = 0; q < Qsize; q++ )
		{
			for( int n = 0; n < Nsize; n++ )
			{
				if( Narray[n] == Qarray[q] )
				{
					flag = n ;
				}
			}
			
			cout<<flag <<endl ;
			
			flag = -1 ;
		}
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0;
}


// Another solution

// By Basel Bairkdar https://www.facebook.com/baselbairkdar

/* #include<iostream>
using namespace std;

int main() {
	// As values are 0-500, we can make array of 501 mark the last value in it
	// Then we answer the queries directly

	const int N = 500 + 1;
	int n, q, x, ans[N];

	for (int i = 0; i < N; i++)
		ans[i] = -1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ans[x] = i;
	}
	int num;
	cin >> q;
	while (q--) {
		cin >> num;
		cout << ans[num] << endl;
	}
	return 0;
}
 */