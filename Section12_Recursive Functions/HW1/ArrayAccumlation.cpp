#include <iostream>

void accumulate_arr(int arr[], int len); 

int main() 
{
    // Write C++ code here
    int arr[6] {1, 2, 3, 4, 5, 6} ;
    
    accumulate_arr( arr, 6 ) ;
    
    std::cout <<'\n' ;
    
    for( int i = 0; i < 6; i++ )
        std::cout <<arr[i] <<' ' ;

    return 0;
}

void accumulate_arr(int arr[], int len)
{
    
    if( len == 0 )
    {
        return ;
    }
    else
    {
        accumulate_arr( arr, len-1 ) ;
        
        arr[len] += arr[len-1] ;
    }
    
}
