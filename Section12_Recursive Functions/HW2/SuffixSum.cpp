
#include <iostream>

int suffix_sum(int arr[], int len, int pos ) ; 

int main() 
{
    // Write C++ code here
    int arr[6] {1, 3, 4, 6, 7} ;
    
    std::cout <<'\n' <<suffix_sum( arr, 5, 3 ) ;
    
    return 0;
}

int suffix_sum(int arr[], int len, int pos )
{
    
    if( len == (pos - 1) )
    {
        return arr[len] ;
    }
    else
    {
        return arr[len] + suffix_sum( arr, len-1, pos ) ;
    }
    
}











