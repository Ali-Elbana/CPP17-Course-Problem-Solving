#include <iostream>

void array_increment(int arr[], int len) ; 

int main() 
{
    // Write C++ code here
    int arr[5] {1, 8, 2, 10, 3} ;
    
    array_increment( arr, 5 ) ;
    
    std::cout <<'\n' ;
    
    for( int i = 0; i < 5; i++ )
        std::cout <<arr[i] <<' ' ;

    return 0;
}

void array_increment(int arr[], int len)
{
    
    if( len == 0 )
    {
        return ;
    }
    else
    {
        array_increment( arr, len-1 ) ;
        
        arr[len-1] += (len-1) ;
    }
    
}