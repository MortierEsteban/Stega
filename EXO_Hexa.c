#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main (const char* temp_str)
{
	//char *temp_str;
	temp_str=(char*)malloc(150);
	unsigned int nb=42;
	//scanf("%s",temp_str);
        nb=(atoi(temp_str));
//	free(temp_str);	
	printf("%X \n",nb);
	return(" %x",nb);
}
