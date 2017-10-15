#include<iostream.h>
void main()
{
	int x,leap;
	cout<<"please input x:"<<endl;
	cin>>x;
	if(x%3==0||x%7==0)
		leap=1;
	else 
		leap=0;
	if(leap==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}