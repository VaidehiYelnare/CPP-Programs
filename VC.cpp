#include<iostream>
#include<string.h>
using namespace std;

char str[100];

class VC
{			
	public:	
			void accept(void);
};

void VC::accept(void)
{
	cout<<"Enter the string:- "<<endl;
	 cin.getline(str,100);
	cout<<"Entered String is:- "<<str<<endl;	
}

class VC1
{
	int count;
	char vowel;
	
	public:
		  int getCountData()
		  {
			 return count;
		  }
		  
		  char getVowelData()
		  {
			  return vowel;
		  }
		  
		  void setCountData(int a)
		  {
			 count=a;
		  }
		  
		  void setVowelData(char b)
		  {
			  vowel=b;
		  }	
};

int main()
{
	VC obj;
    int temp = 0;
	VC1 obja,obje,obji,objo,obju;
	
	
	obja.setCountData(0);
	obja.setVowelData('a');
	
	obje.setCountData(0);
	obje.setVowelData('e');
	
	obji.setCountData(0);
	obji.setVowelData('i');
	
	objo.setCountData(0);
	objo.setVowelData('o');
	
	obju.setCountData(0);
	obju.setVowelData('u');
	
	obj.accept();
	
	for(int i=0;i<str[i];i++)
	{
				 if(str[i]=='a'||str[i]=='A')
				 {
					//temp = obja.getCountData()+1;
					obja.setCountData(obja.getCountData()+1);
				 }
				 
				 if(str[i]=='e'||str[i]=='E')
				 {
					temp = obje.getCountData()+1;
					obje.setCountData(temp);
				 }
				 
				 if(str[i]=='i'||str[i]=='I')
				 {
					temp = obji.getCountData()+1;
					obji.setCountData(temp);
				 }
				 
				 if(str[i]=='o'||str[i]=='O')
				 {
					temp = objo.getCountData()+1;
					objo.setCountData(temp);
				 }
				 
				 if(str[i]=='u'||str[i]=='U')
				 {
					temp = obju.getCountData()+1;
					obju.setCountData(temp);
				 }				 
	}
	cout<<" vowel:- "<<obja.getVowelData()<<endl<<" count:- "<<obja.getCountData()<<endl<<endl;
	cout<<" vowel:- "<<obje.getVowelData()<<endl<<" count:- "<<obje.getCountData()<<endl<<endl;
	cout<<" vowel:- "<<obji.getVowelData()<<endl<<" count:- "<<obji.getCountData()<<endl<<endl;
	cout<<" vowel:- "<<objo.getVowelData()<<endl<<" count:- "<<objo.getCountData()<<endl<<endl;
	cout<<" vowel:- "<<obju.getVowelData()<<endl<<" count:- "<<obju.getCountData()<<endl<<endl;
}