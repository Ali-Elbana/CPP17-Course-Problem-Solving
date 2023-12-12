#include <iostream>
#include <vector>
#include <stack>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

vector<int> asteroidCollision(vector<int>& asteroids) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main() 
{
    
    std::vector<int> vec1 = {8,-8} ;
    std::vector<int> vec2 ;
    
    vec2 = asteroidCollision( vec1 ) ;
    
    // Print the updated vector
    for( int num : vec2 ) 
    {
        std::cout << num << " ";
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

vector<int> asteroidCollision(vector<int>& asteroids) 
{
    
    stack<int> s ;
    
    for( int asteroid : asteroids ) 
    {
        
        // Positive
        if( asteroid > 0 )
        {
            s.push( asteroid ) ;
        }
        // Negative
        else 
        {
            
            while( (s.empty() != true) && (s.top() > 0) && (abs(asteroid) > s.top()) )
            {
               s.pop( ) ; 
            }
            
            if( s.empty() == true )
            {
                s.push( asteroid ) ;
            }
            else if( (s.empty() != true) && (s.top() < 0) )
            {
                s.push( asteroid ) ;
            }
            else
            {
                
            }
            
            if( abs(asteroid) == s.top() )
            {
                s.pop( ) ;
            }
            else
            {
                
            }
         
        }
        
    }
    
    vector<int> vec( s.size() ) ;
        
    for( int i = s.size() - 1; i >= 0; --i )
    {
        vec[i] = s.top() ;
        
        s.pop() ;
    }
    
    return  vec ;
    
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

