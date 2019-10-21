#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char play[5][5];
	string key="";
	cout<<"enter key"<<endl;
	cin>>key;
	char def[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int len=key.length();
	cout<<len<<endl;
	int temp=0;
	string msg;
	cout<<endl<<"enter message"<<endl;
	cin>>msg;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			
			if(temp<len)
			{
				
				play[i][j]=key[temp];
				temp++;
			}
			
		}
	}temp=0;
	int m=0;
	int n=0;
//	for(int i=0;key[i]!='\0';i++)
//	{
//		for(int j=0;j<i;j++)
//		{
//			if(key[j]==key[i])
//			break;
//			if(key[i]=='j')
//			key[i]='i';
//			if(j>=i)
//			play[m][n++]=key[i];
//			if(n==5)
//			n=0,m++;
//		}
//	}
	for(char i='a';i<='z';i++)
	{
		for(int j=0;key[j]!='\0';j++)
		{
			if(key[j]==i)
			break;
			else if(i=='j')
			break;
			if(key[j]=='\0')
			{
				play[m][n++]=i;
				if(n==5)
				n=0,m++;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<play[i][j];
		}cout<<endl;
	}
}
