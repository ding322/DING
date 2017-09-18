#include<iostream.h>
void main()
{
	int x;
	cout<<"输入整数x:"<<endl;
	cin>>x;
	if(x>=1000)
		cout<<"大于1000"<<endl;
	else
		if(x>=100)
			cout<<"100~999"<<endl;
		else
			if(x>=10)
				cout<<"10~99"<<endl;
			else
				cout<<"小于10"<<endl;
}
