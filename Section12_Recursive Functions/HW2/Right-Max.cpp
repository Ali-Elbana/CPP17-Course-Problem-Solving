
#include <iostream>

void right_max(int arr[], int len, int pos ) ; 

int main() 
{
    // Write C++ code here
    int arr[6] {1, 3, 5, 7, 4, 2} ;
    
    right_max( arr, 6, 0 ) ;
    
    std::cout <<'\n' ;
    
    for( int i = 0; i < 6; i++ )
        std::cout <<arr[i] <<' ' ;

    return 0;
}

void right_max(int arr[], int len, int pos )
{
    
    if( (len - 1) == pos )
    {
        return ;
    }
    else
    {
        right_max( arr, len, pos + 1 ) ;
        
        arr[pos] = std::max( arr[pos], arr[pos+1] ) ;
    }
    
}











