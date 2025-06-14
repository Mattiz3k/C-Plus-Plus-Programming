#include<iostream>
using namespace std;
int main()
{
int first_number,second_number,third_number,fourth_number,fifth_number;
cout<<"Enter number 1:";
cin>>first_number;
cout<<"Enter number 2:";
cin>>second_number;
cout<<"Enter number 3:";
cin>>third_number;
cout<<"Enter number 4:";
cin>>fourth_number;
cout<<"Enter number 5:";
cin>>fifth_number;
int sum=first_number+second_number+third_number+fourth_number+fifth_number;
double average=sum/5;
cout<<"\nSum of the numbers is:"<<sum;
cout<<"\nAverage of numbers is:"<<average;

return 0;
}

