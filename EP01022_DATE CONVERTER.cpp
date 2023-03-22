#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,a,b,c,d;
	cin>>x;
	if(x<=1000)
	{
		a=x/365;
		b=x%365;
		c=b/7;
		d=b%7;
	}
	cout<<a<<" "<<c<<" "<<d;
}

