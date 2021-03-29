#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c);

void main()
{
	int i=0;
	FILE *fp;
	int expo=8;
	char byte='0';
	fp= fopen("/root/Stega/image","rb+");
	if (fp == NULL)
	{
		printf("Error");
		fclose(fp);
	}
	
	while(fgetc(fp*8)=!NULL)
	{
		byte=byte+i*(2^expo);
		expo--;
		if(expo =0)
		{
			expo=8;
			ft_putchar(byte);
			byte=0;
		}
	}
		
}


void ft_putchar(char c);
{
	write(1,&c,1);
}
