#include <unistd.h>
void ft_putchar(char c);
void main ()
{
	char i = 'A';
	while(i<='Z')
	{
		ft_putchar(i);
		i++;
	}
		write (1,&"\n", 1);	
	
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}
