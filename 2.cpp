#include<iostream.h>
void main()
{
	int x;
	cout<<"����x:";
	cin>>x;
	if(x<=99)
		switch(x/10)
	{
		case 0:cout<<"С��10";break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9��cout<<"10~99";break;
}
}
else
if(x>=100)
switch(x/1000)
{
	case 0:cout<<"100~999";break;
	default:cout<<"����1000";
}
