
#include<iostream>


 using namespace std ;


int main( void )
{
	
	string student1_name = "0" ;
	string student2_name = "0" ;

	long long int student1_ID{0} ;
	long long int student2_ID{0} ;
	
	float student1_grade{0} ;
	float student2_grade{0} ;
	
	float average{0} ;
	
	cout<<"Student1's name: ";
	cin>>student1_name ;
	
	cout<<"His ID: ";
	cin>>student1_ID ;
	
	cout<<"His math exam grade: ";
	cin>>student1_grade ;
	
	cout<<"--------------------------------------------------------------------" <<endl ;
	
	cout<<"Student2's name: ";
	cin>>student2_name ;
	
	cout<<"His ID: ";
	cin>>student2_ID ;
	
	cout<<"His math exam grade: ";
	cin>>student2_grade ;
	
	cout<<"********************************************************************" <<endl ;
	
	cout<<"Students grades in math\n" ;

	cout<<student1_name <<"{with ID " <<student1_ID <<"}" <<" got grade: " <<student1_grade <<endl ;

	cout<<student2_name <<"{with ID " <<student2_ID <<"}" <<" got grade: " <<student2_grade <<endl ;

	average = ( student1_grade + student2_grade ) / 2.0 ;

	cout<<"Average grade is: " <<average <<endl ;

}


