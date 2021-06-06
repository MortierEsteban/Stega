#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void ft_putchar (char c)
{
	write(1,&c,1);
}
void ft_putstr (char* str)
{
	int i;
	i=0;
	while (str[i])
	{
		ft_putchar (str[i]);
		i++;
	}
}
char* War_victor (int angel_wincount)
{
	char* victor=malloc(40);
	//victor= (angel_wincount == 2) ? "Ag":"demon";
	if (angel_wincount == 2)
	{
		victor="The winner of the war is the Angel";
	}
	else
	{
		victor="The winner of the war is the Demon";
	}
	return (victor);
	free(victor);
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
	int angel_wincount=2;
	int demon_wincount=0;
	int compteur=0;
	puts("Welcome to the World of Angels's Crypt United");
	
	while(compteur<3)
	{
		int angel_action = get_action();
		int demon_action = get_action();
		if (demon_wincount != 2 || angel_wincount !=2)
		{
			if (demon_action == angel_action)
			{
				printf ("It's a Draw");
			}
			if (angel_action ==1 &&demon_action ==3 ||angel_action == 2 && demon_action == 1||angel_action ==3 && demon_action == 2 )
			{
				printf("The Angel Won!");
				angel_wincount++;
			}
			else
			{
				printf ("The Demon Won...");
				demon_wincount++;
			}
		}
		compteur++;
	}

	ft_putstr(War_victor(angel_wincount));
}
