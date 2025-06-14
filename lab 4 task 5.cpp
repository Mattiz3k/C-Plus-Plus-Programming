

#include<iostream>
using namespace std;
int main()
{
	

cout<<"sorting Numbers";
	int first,second,third;
cout<<"Enter first number:";
cin>>first;
cout<<"Enter second number:";
cin>>second;
cout<<"Enter third number:";
cin>>third;
if(first<=second&&second<=third)
{cout<<"\n"<<first<<endl<<second<<endl<<third;}
else if(first>=second&&second>=third)
{cout<<"\n"<<third<<endl<<second<<endl<<first;}
else if(first>=second&&first<=third)
{cout<<"\n"<<second<<endl<<first<<endl<<third;}




return 0;
}

