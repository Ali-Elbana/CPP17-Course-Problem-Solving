#include <iostream>

void left_max(int arr[], int len) ; 

int main() 
{
    // Write C++ code here
    int arr[6] {1, 3, 5, 7, 4, 2} ;
    
    left_max( arr, 6 ) ;
    
    std::cout <<'\n' ;
    
    for( int i = 0; i < 6; i++ )
        std::cout <<arr[i] <<' ' ;

    return 0;
}

void left_max(int arr[], int len)
{
    
    if( len == 1 )
    {
        return ;
    }
    else
    {
        left_max( arr, len-1 ) ;
        
        arr[len-1] = std::max( arr[len-1], arr[len-2] ) ;
    }
    
}
