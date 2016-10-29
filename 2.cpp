#include <string>
#include <iostream>
using namespace std ;

class EMPLOYEE
{
	string name ;
	int idNumber ;
	string department ;
	string position ; 
	
	public :
		
		EMPLOYEE(string name,int idNumber,string department,string position)
		{
			this -> name = name ;
			this -> idNumber = idNumber ;
			this -> department = department ;
			this -> position = position ;
		}
		
		EMPLOYEE (string name , int idNumber)
		{
			this -> name = name ;
			this -> idNumber = idNumber ;
			this -> department = "" ;
			this -> position = "" ;
		}
		
		Employee()
		{	
			this -> name = "";
			this -> idNumber = 0 ;
			this -> department = "" ;
			this -> position = "" ;
		}
		
		string getName()
		{
			return name ;
		}
		
		int getID()
		{
			return idNumber ;
		}
		
		string getDepartment()
		{
			return department ;
		}
		
		string getPosition()
		{
			return position ;
		}
		

};


int main()
{
	
	EMPLOYEE employee1 = EMPLOYEE("susan meyers",47899,"acounting","vice president");
	EMPLOYEE employee2 = EMPLOYEE("mark jones", 4532 , "computer", "programmer");
	EMPLOYEE employee3 = EMPLOYEE("joy rogers", 2345 , "manufacturing", "engineer");
	
	EMPLOYEE employeeArr[3]={employee1,employee2,employee3};
	
	for(int i=0 ; i<3 ; i++)
	{
		cout << employeeArr[i].getName() << "\t" <<employeeArr[i].getID()<<"\t"
			<<employeeArr[i].getDepartment()<<"\t"<<employeeArr[i].getPosition() ;
			
		cout<<endl;
	}
	
	
	return 0;
}





