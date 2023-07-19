
#include <iostream>

bool IsPalindrome(int arr[], int len, int pos = 0 ) ; 

int main() 
{
    // Write C++ code here
    int arr[5] {1, 3, 4, 3, 1} ;
    
    std::cout <<'\n' <<IsPalindrome( arr, 5 ) ;
    
    return 0;
}

bool IsPalindrome(int arr[], int len, int pos )
{
    
    if( len == 0 )
    {
        return true ;
    }
    else if( arr[len-1] == arr[pos] )
    {
        return IsPalindrome( arr, len-1, pos+1 ) ;
    }
    else
    {
        return false ;
    }
    
}











