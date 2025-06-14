 #include<iostream>
using namespace std;
int main()
{
double temperature;
int pulse_rate;
	
cout<<"Fever Diagnose from symptoms";
cout<<"\nEnter your temperature:";
cin>>temperature;
cout<<"\nEnter your pulse rate:";
cin>>pulse_rate;
if(temperature>98.6&&pulse_rate>72)
{cout<<"Please Admit to the Hospital";
if(temperature>102&&pulse_rate>72)
cout<<"\nAlso take Two panad ol tablets";}
else{cout<<"You have no fever";
}
return 0;
}

