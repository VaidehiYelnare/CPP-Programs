#include<iostream>
#include<string.h>
using namespace std;

//string str=" ";
char str[100];

class CountVowels
{
	public:
			//function definition
		   void accept(void);
		   void countingvowels(void);
};

void CountVowels::accept(void)
{
	cout<<"Enter the string:- "<<endl;
	 cin.getline(str,100);
	cout<<"Entered String is:- "<<str<<endl;	
}

void CountVowels::countingvowels(void)
{
	int cntr=0;
	for(int i=0;i<str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			cntr++;
		}
	}
	cout<<"Number of vowels in the string are "<<cntr<<endl;	
}
int main()
{
	CountVowels cv;
	cv.accept();
	cv.countingvowels();//function call
}