#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void main (int argc,const char* argv[])
{
	if (argc==2)
	{
	//char *temp_str;
//	argv[1]=(char*)malloc(150);
	unsigned int nb=42;
	//scanf("%s",temp_str);
        nb=(atoi(argv[1]));
//	free(temp_str);	
	printf("argc=%d\n",argc);
	printf("0x%08X",nb);
	}
}

