#include"bits/stdc++.h"
using namespace std;

double gcd(double a, double b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 

    if (a == b) 
        return a; 

    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

double find_e(double phi)
{
	double i=2;

	while(gcd(i,phi) != 1 and i < phi)
	{
		i++;
	}

	return i;
}

double find_d()

int main(int argc, char const *argv[])
{
	double a,b,i;
	cout<<"Enter two Prime Nos:"; cin>>a>>b;

	double n = a*b; cout<<n<<endl;
	double phi = (a-1)*(b-1);  cout<<phi<<endl;

	double e = find_e(phi);  cout<<e<<endl;
	


	return 0;
}