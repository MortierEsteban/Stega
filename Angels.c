#include <stdio.h>
#include <stdlib.h>
int ft_putchar (char c)
{

	write(1,&c;1);
}
int War_victor (int angel_wincount)
{
	char victor= (angel_wincount == 2) ? angel:demon;
	return victor;
}
int is_action_valid(int action)
{
	return action >=1 && action <= 3;
}
int read_int_from_terminal(void)
{
	int value=0;
	scanf("%d", &value);
	return value;
}
int get_action(void)
{
	puts("Choose an action:");
	int action= read_int_from_terminal();
	while(!is_action_valid(action))
	{
		printf("This action is impossible\n");
		puts("Choose another action");
		action=read_int_from_terminal();
	}
	return action;
}
int main(void)
{
	int angel_wincount=0;
	int demon_wincount=0;
	puts("Welcome to the World of Angels's Crypt United");
	for (int i=0;i<3;i++)
	{
		int angel_action = get_action();
		int demon_action = get_action();
		if (demon_wincount == 2 || angel_wincount ==2)
		{
			if (demon_action == angel_action)
			{
				puts ("It's a Draw");
			}
			if (angel_action ==1 &&demon_action ==3 ||angel_action == 2 && demon_action == 1||angel_action ==3 && demon_action == 2 )
			{
				puts("The Angel Won!");
				angel_wincount++;
			}
			else
			{
				puts ("The Demon Won...");
				demon_wincount++;
			}
		}
	push ("After this war only one remains, The ");
	ft_putchar(War_victor);
	}
}
