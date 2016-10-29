#include <iostream>
#include <string>
using namespace std ;

class Data
{
	string name ;
	string address ;
	int age ;
	int phone ;
	
	public :
	
	Data()
	{
		this -> name = name ;
		this -> address=address ;
		this -> age = age ;
		this -> phone = phone ;
	}
	
	string getName()
	{
		return name ;
	}
	
	string getAddress()
	{
		return address ;
	}
	
	int getAge()
	{
		return age ;
	}
	
	int getPhone()
	{
		return phone ;
	}
	
	void setName(string namee)
	{
		name = namee ;
	}
	
	void setAddress(string addresss)
	{
		address = addresss ;
	}
	
	void setAge(int agee)
	{
		age = agee ;
	}
	
	void setPhone(int phonee)
	{
		phone = phonee ;
	}
	
};


int main()
{
	
	Data myData ;
	
	myData.setName("sefira");
	myData.setAddress ("jakarta");
	myData.setAge (18);
	myData.setPhone(47382423) ;
	
	cout<<"name\t\t: "<< myData.getName() <<endl;
	cout<<"address\t\t:"<< myData.getAddress()<<endl;
	cout<<"age\t\t:"<<myData.getAge ()<<endl;
	cout<<"phone\t\t:"<<myData.getPhone() <<endl<<endl;
	

	Data friendA ;
	
	friendA.setName ("someone");
	friendA.setAddress("somewhere");
	friendA.setAge (10);
	friendA.setPhone (432423423);
	
	cout<<"name\t\t: "<< friendA.getName() <<endl;
	cout<<"address\t\t:"<< friendA.getAddress()<<endl;
	cout<<"age\t\t:"<<friendA.getAge ()<<endl;
	cout<<"phone\t\t:"<<friendA.getPhone() <<endl<<endl;
	
	
	Data friendB ;
	
	friendB.setName ("somebody");
	friendB.setAddress("earth");
	friendB.setAge (100);
	friendB.setPhone (43223449);
	
	cout<<"name\t\t: "<< friendB.getName() <<endl;
	cout<<"address\t\t:"<< friendB.getAddress()<<endl;
	cout<<"age\t\t:"<<friendB.getAge ()<<endl;
	cout<<"phone\t\t:"<<friendB.getPhone() <<endl;

	
	
return 0;	
}

