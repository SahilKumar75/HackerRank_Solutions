#include<iostream>
using namespace std;
int main()
{
	int a,b,c,n;
	cin>>n;
	a=1;
	c=3;b=4;
	for(int i=1;i<=n;i++)
	{
		a++;
		b--;
		if(b==0)
		{
			b=2*c;
			c=b;
		}
		
		
	}cout<<b;
	return 0;
}
