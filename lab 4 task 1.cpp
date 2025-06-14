#include<iostream>
using namespace std;
int main()
{
char symbol;
cout<<"enter any letter:";
cin>>symbol;
if(symbol=='A'||symbol=='E'||symbol=='I'||symbol=='O'||symbol=='U'||
symbol=='a'||symbol=='e'||symbol=='i'||symbol=='o'||symbol=='u')	
{cout<<"its vowel";}
		
	else if(symbol=='w'||symbol=='y'||symbol=='W'||symbol=='Y')
	{cout<<"its semi_vowel";}
	
	 else  {cout<<"its consonant";
	 }


	
	return 0;
	}

