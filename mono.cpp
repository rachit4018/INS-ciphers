#include<iostream>
using namespace std;
int display()
{
	cout<<endl<<"restart the process"<<endl;
}
int main()
{
	char al[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char mono[26];
	for(int i=0;i<26;i++)
	{
		cout<<"enter the character for"<<al[i]<<"=";
		cin>>mono[i];
		cout<<al[i]<<" is encrypted as="<<mono[i]<<"\n";
		for(int j=0;j<i;j++)
		{
			if(mono[i]==mono[j])
			cout<<"enter unique character"<<endl;

		}
	}
	string msg;
	cout<<"enter your message"<<endl;
	cin>>msg;
	char result[6];
	for(int i=0;i<msg.length();i++)
	{
		for(int j=0;j<25;j++)
		{
			if(msg[i]==al[j])
			{
				result[i]=mono[j];
			}
		}
		
	}
	cout<<"encrypted message is=";
	for(int i=0;i<msg.length();i++)
	{
		cout<<result[i];
	}
	cout<<endl;
	for(int i=0;i<msg.length();i++)
	{
		for(int j=0;j<25;j++)
		{
			if(result[i]==mono[j])
			{
				result[i]=al[j];
			}
		}
		
	}
	cout<<"decrypted message is=";
	for(int i=0;i<msg.length();i++)
	{
		cout<<result[i];
	}
		
}

