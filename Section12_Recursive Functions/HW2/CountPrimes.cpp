
#include <iostream>
#include <cmath>

using namespace std ;

bool is_prime(int n) ;
int count_primes( int start, int end ) ;

int main() 
{
    // Write C++ code here
    std::cout <<'\n' <<count_primes( 10, 200 ) ;
    
    return 0;
}

bool is_prime( int n ) 
{

    if (n <= 1) 
    {
        return false;
    }
    
    for (int i = 2; i <= std::sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    
    return true;
    
}

int count_primes( int start, int end )
{
    
    if( start == end ) 
    {
        return 0;
    }
    else
    {
        
        int result = count_primes( start+1, end ) ; 
        
        if( is_prime(start) )
        {
            result++ ;
        }
        
        return result ;
        
    }
    
}











