#include <iostream>
using namespace std;
int main()
{
	long long s=0,f=1;
	long long n;
	cin >>n;
	if(0<n<=20)
	{
	for(long i=1;i<=n;i++)
	{
		f=f*i;
		s=s+f;
	}
	cout <<s<<endl;
	}	
}
