#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;

string str="";
string compstr="";
	
int cntr=1;
char prevChar=0;
char nextChar=0;
std::stringstream ss;

class CompString
{
	public:
			void accept(void);
			void compressing(string);
	
};

void CompString::accept()
{
	cout<<"Enter the String to Compress:- ";
	 cin>>str;
	cout<<"INPUT STRING:- "<<str<<endl;
	
}

void CompString::compressing(string str)
{	
	char sarray[50];
	for(int i=0;i<str.length();i++)
	{
		sarray[i]=str[i];
	}
	
	prevChar=sarray[0];
	
	for(int i=1;i<str.length();i++)
	{
		nextChar=sarray[i];
		if( nextChar == prevChar )
		{
			cntr++;
		}
		else
		{
			if( cntr != 0 )
			{
			   ss<<prevChar<<cntr;
			}
			cntr=1;
			prevChar=nextChar;
		}		
	}//end of for

	cout<<" COMPRESSED STRING:- "<<endl;	
	ss<<prevChar<<cntr;
	std::string compstr=ss.str();
	std::cout<<compstr;
}

int main()
{
	CompString obj;
	obj.accept();
	obj.compressing(str);
	
	  return 0;
}

/*
$ ./ComStringTry
Enter the String to Compress:- aaaabvwe
INPUT STRING:- aaaabvwe
 COMPRESSED STRING:-
a4b1v1w1e1

*/