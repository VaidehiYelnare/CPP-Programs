#include<iostream>
#include<string.h>
using namespace std;

char str[100];

class CharCount
{
	int occurencebig[26];
	int occurencesmall[26];
	
	public:
		  void accept(void);
		  void counting_each_char(void);
	
};

void CharCount::accept(void)
{
	cout<<"Enter the string:- "<<endl;
	 cin.getline(str,100);
	cout<<"Entered String is:- "<<str<<endl;
}

void CharCount::counting_each_char(void)
{
	int i,j;
	
	for(i=0;i<26;i++)
	{
		occurencebig[i]=0;
	}
	
	for(j=0;j<26;j++)
	{
		occurencesmall[j]=0;
	}
	
	int length=strlen(str);
	
	
	for(i=0;i < length;i++)
	{
		int ch=str[i];
		if(ch>=65 && ch<=90)
		{
			occurencebig[ch-65]++;
		}
	}
	
	for(j=0;j < length;j++)
	{
		int chs=str[j];
		if(chs>=97 &&  chs<=122)
		{
		  occurencesmall[chs-97]++;
		}
	}
	
	for(i=0;i<26;i++)
	{
		if(occurencebig[i]!=0)
		{			
			cout<<"Character- "<<(char)(i+65)<<" Count:- "<<occurencebig[i]<<endl;
		}
	}
	
	for(j=0;j<26;j++)
	{
		if(occurencesmall[j]!=0)
		{
			cout<<"Character- "<<(char)(j+97)<<" Count:- "<<occurencesmall[j]<<endl;	
		}
	}
}

int main()
{
	CharCount obj;
	obj.accept();
	obj.counting_each_char();	
}

/*
Tanaya@rohit ~/CppPrgms
$ ./CharCount
Enter the string:-
WELCOME welcome
Entered String is:- WELCOME welcome
Character- C Count:- 1
Character- E Count:- 2
Character- L Count:- 1
Character- M Count:- 1
Character- O Count:- 1
Character- W Count:- 1
Character- c Count:- 1
Character- e Count:- 2
Character- l Count:- 1
Character- m Count:- 1
Character- o Count:- 1
Character- w Count:- 1

*/