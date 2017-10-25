#include<iostream>
#include<string.h>
using namespace std;

string str;
string strWords[10];

class WordReverse
{
	
	public:
		 void accept(void);
		 void wordreversal(void);
		 void reverse_each_word(string[]);
};

void WordReverse::accept(void)
{
	cout<<"Enter the String"<<endl;
	getline(cin,str);
	cout<<"INPUT STRING IS:-  "<<endl<<str<<endl;	
}

void WordReverse::wordreversal( void)
{
	int cntr=0;
	
	int i;
	for(i=0;i<str.length();i++)
	{
		strWords[cntr]+=str[i];
		
		if(str[i]==' ')
		{
			cntr++;
		}
	}
	
	/*for(i=0;i<10;i++)
	{
		strWords[i];
	}	*/
}

void WordReverse::reverse_each_word(string strWords[10])
{
	cout<<"MODIFIED STRING IS:-"<<endl;
		for(int i=0;i<10;i++)
		{
			string str=strWords[i];
			int length;
			length=str.size();
			int j;
			
			for(int j=length-1;j>=0;j--)
			{
			cout<<str[j];
			}
			cout<<" ";
		}
}

int main()
{
	WordReverse obj;
	obj.accept();
	obj.wordreversal();
	obj.reverse_each_word(strWords);
}
	
	
/*  OUTPUT
Tanaya@rohit ~/CppPrgms
$ ./WordReverse
Enter the String
hello there see the string
INPUT STRING IS:-
hello there see the string
MODIFIED STRING IS:-
 olleh  ereht  ees  eht gnirts


*/