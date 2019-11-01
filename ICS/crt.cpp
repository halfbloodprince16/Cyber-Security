#include"bits/stdc++.h"
using namespace std;

struct crt
{
	int a,m;
	int n,x,agg;
};

int get_x(int m, int n)
{
	int i=1;
	bool cond=false;
	while(!cond)
	{
		if(n*i%m == 1)
		{
			cond = true;
		}
		else
		{
			i++;
		}
	}

	return i;
}

int main(int argc, char const *argv[])
{
	int k;
	cout<<"Chinese Remainder Theorem"<<endl;	
	cout<<"Enter No. of Cases :"; cin>>k;

	crt c[k]={0}; 
	int a,b;
	int m=1;
	cout<<"Enter 'a' and 'm':";
	for(int i=0;i<k; i++)
	{
		cin>>c[i].a>>c[i].m;
		m = m*c[i].m;
	}

	for(int i=0;i<k; i++)
	{
		c[i].n = m/c[i].m;
		c[i].x = get_x(c[i].m,c[i].n);
	}

	int res=0;
	for(int i=0;i<k; i++)
	{
		res += c[i].a*c[i].n*c[i].x;
	}

	cout<<res%m;
	return 0;
}