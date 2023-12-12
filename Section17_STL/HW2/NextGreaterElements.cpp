#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std ; 

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

vector<int> nextGreaterElements(vector<int>& elements) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main() 
{
    
    vector<int> vec1 { 73, 74, 75, 71, 69, 72, 76, 73 } ; 
    vector<int> vec2 ;
    
    vec2 = nextGreaterElements( vec1 ) ;
    
    for( int element : vec2 )
    {
        cout << element << ' ' ;
    }
    
    return 0 ;
    
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

vector<int> nextGreaterElements(vector<int>& elements) 
{
    
    vector<int> v ;
    
    for( int i = 0; i < elements.size(); ++i )
    {
        
        auto it = find_if( elements.begin() + i + 1, elements.end(), [&](int n){ return n > elements[i]; }  ) ;
        
        if( it == elements.end() )
        {
            v.push_back( -1 ) ;
        }
        else
        {
            v.push_back( *it ) ;
        }
        
    }

    return v ;

}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
