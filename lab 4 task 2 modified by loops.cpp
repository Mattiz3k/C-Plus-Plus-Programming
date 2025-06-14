
#include<iostream>
bool isEligible(int age, float percentage, int passingYear);
using namespace std;
int main()
{
int age;
int percentage;
int passing_year;
int elegibel_students=0;

cout<<"Admission Policy at University";
for(int i=0;i<5;i++)
{
cout<<"\nEnter your age:";
cin>>age;
cout<<"enter your percentage:";
cin>>percentage;
cout<<"enter your passing year:";
cin>>passing_year;
if(age<=25&&percentage>=50&&passing_year>=2021)
{cout<<"Your eligible to Apply";
elegibel_students++;}
else{cout<<"You inelegible to apply";

}}
cout<<" \nTotal eligible students"<<elegibel_students;



return 0;
}
ool isEligible(int age, float percentage, int passingYear)
{
	
	
	
}

