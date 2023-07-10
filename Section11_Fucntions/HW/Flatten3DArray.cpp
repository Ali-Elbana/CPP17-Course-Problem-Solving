#include <iostream>
#include <cmath>

using namespace std;


int main(void) 
{

	system( "cls" ) ;
	
	unsigned int ArrrayDepth{0} 	;
	unsigned int ArrrayRows{0} 		;
	unsigned int ArrrayColumns{0} 	;
	
	unsigned int DepthWeight{0} 	;
	unsigned int RowWeight{0} 		;
	unsigned int ColumnWeight{1} 	;
	
	unsigned int ConvertToOption{0} ;
	
	unsigned int iDepth{0} 			;
	unsigned int iRow{0} 			;
	unsigned int iColumn{0} 		;
	
	unsigned int _1D_Array{0} 		;
	
	unsigned int DepthIndx{0} 		;
	unsigned int RowIndx{0} 		;
	unsigned int ColumnIndx{0} 		;
	
	cout<<endl <<"Enter the array depth: " ;
	cin>>ArrrayDepth ;
	
	cout<<endl <<"Enter the array rows: " ;
	cin>>ArrrayRows ;
	
	cout<<endl <<"Enter the array columns: " ;
	cin>>ArrrayColumns ;
	
	DepthWeight 	= ArrrayRows * ArrrayColumns ;
	RowWeight 		= ArrrayColumns				 ;

	cout<<endl <<"Enter the option of conversion: " ;
	cin>>ConvertToOption ;
	
	switch( ConvertToOption )
	{
		// Convert 3D to 1D //
		case 1 :
		 
			cout<<endl <<"Enter the depth: " ;
			cin>>iDepth ;
	
			cout<<endl <<"Enter the row: " ;
			cin>>iRow ;
	
			cout<<endl <<"Enter the column: " ;
			cin>>iColumn ;
			
			cout<<endl <<" 1D is --> "<<(iDepth * DepthWeight) + (iRow * RowWeight) + (iColumn * ColumnWeight) ; 
		 
		break ;
		
		//---------------------------------------------------//
		
		// Convert 1D to 3D //
		case 2 :
		 
			cout<<endl <<"Enter the 1D array: " ;
			cin>>_1D_Array ;
			
			while( _1D_Array >= DepthWeight )
			{
				_1D_Array -= DepthWeight ;
				
				DepthIndx++ ;
			}
			
			while( _1D_Array >= RowWeight )
			{
				_1D_Array -= RowWeight ;
				
				RowIndx++ ;
			}
			
			while( _1D_Array >= ColumnWeight )
			{
				_1D_Array -= ColumnWeight ;
				
				ColumnIndx++ ;
			}
			
			cout<<endl <<" 3D is --> " <<DepthIndx <<' ' <<RowIndx <<' ' <<ColumnIndx <<endl;
			
		break ;
		
		//---------------------------------------------------//
		
		default:
		 
			cout<<endl <<"Not an option, try again " ;
		 
		break;
		
	}
	
	return 0 ;
	
}
