#include<bits/stdc++.h>

using namespace std;

char table[10][5] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void prints(int a[],int num,char out[],int n)
{
	int i;
	
	if(num == n){
		printf("%s",out);
		
		return;
	}
	
	for(i=0;i<strlen(table[a[num]]);i++)
	{
		out[num]=table[a[num]][i];
		prints(a,num+1,out,n);
	}
	
	return;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	int m = pow(4,n);
	char b[m] = {'\0'};
	for(int i=0;i<n;i++)
	cin>>a[i];
	prints(a,0,b,n);
	return 0;
	
}
