#include <iostream>

double average(int arr[], int len) ; 

int main() 
{
    // Write C++ code here
    int arr[5] {1, 8, 2, 10, 3} ;
    
    std::cout << average( arr, 5 ) ;

    return 0;
}

double average(int arr[], int len) 
{
    
    if( len == 1 )
    {
        return arr[0] ;
    }
    else
    {
        return ( arr[len-1] + ( (len - 1) * average(arr, len-1) ) ) / len ;
    }
    
}
