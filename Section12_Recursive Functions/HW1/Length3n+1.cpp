
#include <iostream>

int length_3n_plus_1(int n) ;

int main() 
{
    // Write C++ code here
    std::cout << length_3n_plus_1(6) ;

    return 0;
}


int length_3n_plus_1(int n)
{
    
    if( n == 1 )
    {
        return 1 ;
    }
    else if( n % 2 == 0 )
    {
        return 1 + length_3n_plus_1( n / 2 ) ;
    }
    else if( n % 2 != 0 )
    {
        return 1 + length_3n_plus_1( (n * 3) + 1 ) ;
    }
    
}







