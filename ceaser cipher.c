#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char data[10],a[30];
	int key,i;
	printf("Enter the msg: ");
	gets(data);
	printf("\nEnter tke key: ");
	scanf("%d",&key);
	if(key>26){
		key = key%26;
	}
	for(i=0;i<=strlen(data);i++){
		a[i] = data[i] + key;
	}
	printf("\n Encrypt msg: %s",a);
	char d[10];
	for(i=0;i<=strlen(a);i++){
		d[i] = a[i] - key;
	}
	printf("\n Decrypt msg: %s",d);
	return 0;
}

