
#include<iostream>


using namespace std ;


int main(void)
{
	
	int NumberOfBoys    {0} ;
	int NumberOfGirls   {0} ;
	int NumberOfTeachers{0} ;
	
	cin>>NumberOfBoys >>NumberOfGirls >>NumberOfTeachers ;
	
	cout<< ( NumberOfBoys   > 25 ) <<endl ;
	cout<< ( NumberOfGirls <= 30 ) <<endl ;
	cout<< ( ( ( NumberOfBoys   > 20 ) && ( NumberOfTeachers > 2 ) ) || ( ( NumberOfGirls > 30 ) && ( NumberOfTeachers > 4 ) ) ) <<endl ;
	cout<< ( ( NumberOfBoys < 60 ) || ( NumberOfGirls < 70 ) ) <<endl ;
	cout<< !( ( NumberOfBoys >= 60 ) || ( NumberOfGirls >= 70 ) ) <<endl ;
	cout<< ( NumberOfBoys == NumberOfGirls + 10 ) <<endl ;
	cout<< ( ( NumberOfBoys - NumberOfGirls > 10 ) || ( NumberOfTeachers > 5 ) ) <<endl ;
	cout<< ( (NumberOfBoys == NumberOfGirls + 10) || (NumberOfGirls == NumberOfBoys + 15) ) <<endl ;
	
	
	
	
}



















