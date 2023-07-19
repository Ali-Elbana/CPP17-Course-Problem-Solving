
#include <iostream>

int prefix_sum(int arr[], int len, int pos ) ; 

int main() 
{
    // Write C++ code here
    int arr[5] {1, 3, 4, 6, 7} ;
    
    std::cout <<'\n' <<prefix_sum( arr, 5, 3 ) ;
    
    return 0;
}

int prefix_sum(int arr[], int len, int pos )
{
    
    if( pos == 0 )
    {
        return 0 ;
    }
    else
    {
        return arr[pos-1] + prefix_sum( arr, len, pos-1 ) ;
    }
    
}











