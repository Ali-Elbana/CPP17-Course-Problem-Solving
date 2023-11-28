#include <iostream>
#include <string.h>
#include <queue>
#include <stack>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

struct OurStack 
{
	
	queue<int> q;

	void push(int val) 
	{
	  
		if( q.empty() == true )
		{

			q.push(val);
		  
		}
		else
		{
			
			q.push(val);
			
			for( int i = 0; i < q.size() - 1; i++ )
			{
				
				q.push(q.front());
				
				q.pop( );
				
			}
            
		}
		
	}

  void pop() 
  {
    if (!q.empty()) 
	{
      q.pop();
    }
  }

  int top() 
  {
	  
    return q.front();
    
  }

  bool empty() 
  {
    return q.empty();
  }
  
};


////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main() 
{
	
  OurStack s;
  s.push(1);
  s.push(2);
  s.push(3);

  while (!s.empty()) 
  {
    cout << s.top() << " ";
    s.pop();
  }

  return 0;
}


////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

