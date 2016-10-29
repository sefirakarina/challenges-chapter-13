#include <string>
#include <iostream>
using namespace std ;

class testScores
{
	int score1 ;
	int score2 ;
	int score3 ;
	
	public :
	
	testScores()
	{
		score1=score1;
	    score2=score2;
		score3=score3;
	}
	
	int getScores()
	{
		return score1 ;
		return score2 ;
		return score3 ;
	}
	
	int setScores(int scoreA,int scoreB,int scoreC)
	{
		score1=scoreA;
		score2=scoreB;
		score3=scoreC;
	}
	
	int average()
	{
		cout<<"the average score is : "<<(score1+score2+score3)/3 ;
	}
	
};

int main() 
{
	int scoreA,scoreB,scoreC ;
	
	cout<<"input 1st score = ";
	cin>>scoreA ;
	
	cout<<"input 2nd score = ";
	cin>>scoreB ;
	
	cout<<"input 3rd score = ";
	cin>>scoreC ;
	
	cout<<endl ;
	
	testScores input ;
	
	input.setScores(scoreA,scoreB,scoreC);
	
	input.average();
	
return 0;	
}


