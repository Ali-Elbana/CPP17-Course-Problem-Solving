
#include <iostream>
#include <cmath>

using namespace std ;

int fibonacci(int n) ;

int main() 
{
    // Write C++ code here

    std::cout << fibonacci(6) ;

    return 0;
}

int fibonacci( int n )
{

  if( n == 0 || n == 1 ) 
  {
    return 1 ;
  }

  return fibonacci( n-1 ) + fibonacci( n-2 ) ;
  
}


