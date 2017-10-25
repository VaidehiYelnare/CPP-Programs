#include<iostream>
#include<string.h>
using namespace std;

string str;
char delch,currch;

class DeleteChar
{
	
	public:
			void accept(void);
			void acceptchar(void);
	        void deleting(string,char);
};

void DeleteChar::accept(void)
{
	cout<<"Enter the string"<<endl;
	 cin>>str;
	cout<<"String is :- "<<str<<endl;
}

void DeleteChar::acceptchar(void)
{	
	cout<<"Enter the char which you wish to delete"<<endl;
	 cin>>delch;
}

void DeleteChar::deleting(string str,char delch)
{
	string newstr;
	int i;
	
	for(i=0;i<str[i]!='\0';i++)	
	{
		char currch=str[i];
		
		if(delch!=currch)
		{
			//strcat(newstr,currchar);
			newstr += currch;
		}
	}
	
	cout<<"The modified string is :- "<<newstr;	
}

int main()
{
	DeleteChar obj;
	obj.accept();
	obj.acceptchar();
	obj.deleting(str,delch);
		
	return 0;
}

/*

Tanaya@rohit ~/CppPrgms
$ ./DeleteChar
Enter the string
maharashtra
String is :- maharashtra
Enter the char which you wish to delete
r
The modified string is :- mahaashta



*/