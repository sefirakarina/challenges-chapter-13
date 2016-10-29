#include <iostream>
#include <string>
using namespace std ;

class DATE
{
	private :
		int day;
		int month ;
		int year ; 
	
	public :
		~DATE (){}
		DATE();
		DATE (int day,int month ,int year)
		{
			this -> day=day;
			this -> month=month ;
			this -> year = year ;
		}
		
		int getDay()
		{
			return day ;
		}
		int getMonth()
		{
			return month ;
		}
		int getYear()
		{
			return year ;
		}
};

int main()
{
	int dd,mm,yy ;
	
	cout<<"input day (1-31) : " ; 
	cin>> dd ; cout<<endl;
	
	if (dd<32 && dd>0)
	{
		cout <<"input month (1-12) : ";
		cin>>mm ; cout <<endl;
		
		if(mm > 0 && mm < 13)
		{
			cout << "input year (yyyy) : ";
			cin>>yy ; cout <<endl ;
		}
		
		else
		return 0;
	}
	
	else
	return 0;
	
	DATE input (dd,mm,yy);
	{
	
		string mmArr[12] = {"January", "February" , "March", "April",
                            "May", "June", "July", "August", "September",
                            "October", "November", "December"};
                            
    
   		 cout << input.getDay() << " " << mmArr[input.getMonth()-1] << " " << input.getYear() << endl;                           
   		 cout << input.getDay() << " / " << input.getMonth() << " / " << input.getYear() << endl;
   		 cout << mmArr[input.getMonth()-1] << " " << input.getDay() << ", " << input.getYear() << endl;

	
	}
	return 0 ;
}


