#include"openssl/sha.h"
#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"limits.h"


int main(int argc, char const *argv[])
{
	char *buffer, str[100];
	long numbytes;
	unsigned char result[SHA_DIGEST_LENGTH];

	FILE *fp;

	fp = fopen("sha.c","r");

	fseek(fp,0,SEEK_END);
	buffer = (char *)calloc(numbytes,sizeof(char));

	fread(buffer,sizeof(char),numbytes,fp);
	fclose(fp);
	//printf("file text %s",buffer);
	SHA1(buffer,strlen(buffer),result);

	for(int i = 0;i<SHA_DIGEST_LENGTH;i++)
	{
		printf("%02x ", result[i]);
	}	

	return 0;
}