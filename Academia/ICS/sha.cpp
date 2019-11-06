#include"openssl/sha.h"
#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"limits.h"
#include"iostream"
using namespace std;


int main(int argc, char const *argv[])
{
	char *buffer, str[100];
	long numbytes;
	unsigned char result[SHA_DIGEST_LENGTH];
	cout<<"Enter File Name : ";
	cin>>str;
	FILE *fp;

	fp = fopen(str,"r");

	fseek(fp,OL,SEEK_END);
	buffer = (char *)calloc(numbytes,sizeof(char));

	fread(buffer,sizeof(char),numbytes,fp);
	fclose(fp);
	cout<<"File text : "<<buffer<<endl;
	SHA1(buffer,strlen(buffer),result);

	for(int i = 0;i<SHA_DIGEST_LENGTH;i++)
	{
		cout<<result[i];
	}	

	return 0;
}