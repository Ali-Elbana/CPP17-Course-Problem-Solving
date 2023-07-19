
#include <iostream>

using namespace std ;

bool is_prefix( string main, string prefix, int start_pos = 0 ) ;

int main() 
{
    // Write C++ code here
    string main {"abcdefgh"} ;
    string sub {"abcd"} ;
    
    std::cout <<'\n' <<is_prefix( main, sub ) ;
    
    return 0;
}

bool is_prefix( string main, string prefix, int start_pos )
{
     // Base case: if the prefix is empty, it is a prefix of any string
    if( prefix.empty() ) 
    {
        return true;
    }
    // Base case: if the main string is shorter than the prefix, it cannot be a prefix
    else if( main.length() < prefix.length() ) 
    {
        return false;
    }
    else if( main.substr( 0, prefix.length() ) == prefix )
    {
        return true ;
    }
    else
    {
        return is_prefix( main.substr(start_pos+1), prefix, start_pos+1 ) ; 
    }
    
}











