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

	while(__gcd(int(i),int(phi)) != 1 and i < phi)
	{
		i++;
	}

	return i;
}

double find_d(double e,double phi)
{
	double i=1;

	while(floor((phi*i+1)/e) != ceil((phi*i+1)/e))
	{
		//cout<<"compare"<<floor((phi*i+1)/e)<<"<->"<<ceil((phi*i+1)/e)<<endl;
		i++;
	}

	return (phi*i+1)/e;
}

int main(int argc, char const *argv[])
{
	double a,b,i;
	cout<<"Enter two Prime Nos:"; cin>>a>>b;

	double n = a*b; cout<<n<<endl;
	double phi = (a-1)*(b-1);  cout<<phi<<endl;

	double e = find_e(phi);  cout<<e<<endl;
	double d = find_d(e,phi);  cout<<d<<endl;

	double msg;
	cin>>msg;
	printf("Message data = %lf", msg); 

	// Encryption c = (msg ^ e) % n 
	double c = pow(msg, e); 
	c = fmod(c, n); 
	printf("\nEncrypted data = %lf", c); 

	// Decryption m = (c ^ d) % n 
	double m = pow(c, d); 
	m = fmod(m, n); 
	printf("\nOriginal Message Sent = %lf", m); 

	return 0;
}