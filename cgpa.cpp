/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int num_of_courses;
	double grade, total_point=0,total_credits=0;
	
	cout<<"Enter the number of courses:";
	cin>>num_of_courses;
	
	for(int i=1;i<=num_of_courses;i++)
	{
		int credit_hours;
		double grade_point;
		
		cout<<"Enter the credit hours for course:"<<i<<":";
		cin>>credit_hours;
		
		cout<<"Enter the grade points of the course:"<<i<<":";
		cin>> grade_point;
		
		total_point +=(grade_point * credit_hours);
		total_credits+= credit_hours;
	}
	
	double CGPA=total_point/ total_credits;
	cout<<"Your CGPA is:"<<CGPA<<endl;
	
	return 0;
	
}