#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,p,q,x,y,x1,y1,ka,kb,ka1,kb1;
	cout<<"Enter the value of P:";
	cin>>p;
	
	cout<<"Enter the value of Q:";
	cin>>q;
	
	cout<<"Enter the private key of Alice is A:";
	cin>>a;
	
	cout<<"Enter the private key of Bob is B:";
	cin>>b;
	
	x = pow(q,a);
	x1 = x%p;
	y = pow(q,b);
	y1 = y%p;
	
/*	cout<<x1;
	cout<<y1;
*/	
	ka = pow(y1,a);
	ka1 = ka%p;
	kb = pow(x1,b);
	kb1 = kb%p;
	
	cout<<"alice key: "<<ka1<<endl;
	cout<<"bob key: "<<kb1;
	
}
