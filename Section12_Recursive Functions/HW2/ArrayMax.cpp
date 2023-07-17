#include <iostream>

int arr_max(int arr[], int len) ; 

int main() 
{
    // Write C++ code here
    int arr[5] {1, 8, 2, 10, 3} ;
    
    std::cout << arr_max( arr, 5 ) ;

    return 0;
}

int arr_max(int arr[], int len)
{
    if( len == 1 )
    {
        return arr[0] ;
    }
    else
    {
        
        int maxNum = arr_max( arr, len-1 ) ;
        
        return std::max( maxNum, arr[len-1] ) ;
    }
    
}
