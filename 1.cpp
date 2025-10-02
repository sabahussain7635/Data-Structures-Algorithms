#include<iostream>
using namespace std;
class student{
	public:
		int *rollnumber;
		
};
int main(){
	
student s1;
	s1.rollnumber=new int;
	*(s1.rollnumber)=45;
	cout<<*(s1.rollnumber);
	delete s1.rollnumber;
	
	
	return 0;
}