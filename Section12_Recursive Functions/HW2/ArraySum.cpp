#include <iostream>

int sum(int arr[], int len) ; 

int main() 
{
    // Write C++ code here
    int arr[5] {1, 8, 2, 10, 3} ;
    
    std::cout << sum( arr, 5 ) ;

    return 0;
}

int sum(int arr[], int len)
{
    if( len == 1 )
    {
        return arr[0] ;
    }
    else
    {
        return arr[len-1] + sum( arr, len-1 ) ;
    }
    
}
