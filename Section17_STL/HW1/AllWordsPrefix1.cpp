#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main() 
{
	
	system( "cls" ) ;
	
    int N ;
	int Q ;
	
    cout << "Enter the number of strings: " ;
    cin >> N ;

    unordered_map< string, vector<string> > wordMap;

    // Read N unique strings
    for( int i = 0; i < N; ++i ) 
	{
		
        string str ;
		
        cout << "Enter string " << (i + 1) << ": " ;
        cin >> str;

        for( int j = 0; j <= str.size(); ++j )
		{
			
            // Insert each prefix along with the corresponding word
            wordMap[str.substr(0, j)].push_back(str) ;
			
        }
		
    }

    
    cout << "\nEnter the number of queries: " ;
    cin >> Q ;

    for( int i = 0; i < Q; ++i ) 
	{
		
        string prefix ;
		
        cout << "\nEnter query " << (i + 1) << ": " ;
        cin >> prefix ;

        // Search for the prefix in the unordered_map
        auto it = wordMap.find(prefix) ;
		
        if( it != wordMap.end() ) 
		{
            // Print the words corresponding to the prefix
            cout << "[" << prefix << "] => [" ;
			
            const vector<string> &words = it->second ;
			
            for( int j = 0; j < words.size(); ++j ) 
			{
                cout << words[j] ;
				
                if( j < words.size() - 1 ) 
				{
                    cout << " " ;
                }
				else
				{
					
				}
				
            }
			
            cout << "]\n" ;
        } 
		else 
		{
            cout << "Prefix not found.\n";
        }
		
    }

    return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
