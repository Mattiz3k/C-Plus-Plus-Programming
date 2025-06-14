#include<iostream>
using namespace std;
int main()
{
int percentage;
cout<<"Enter your percentage:";
cin>>percentage;
if(percentage>90)
{cout<<"you have secured A+";

}
else if(percentage>80)
{cout<<"you have secured A";
}
else if (percentage>70)
{cout<<"You have secured B";
}
else if (percentage>60)
{cout<<"You have secured C";
}
else{cout<<"Fail";
}

return 0;

}



