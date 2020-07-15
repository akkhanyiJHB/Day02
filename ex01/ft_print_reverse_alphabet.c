#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1)
}

void	ft_print_alphabet(void)
{
	int		count;

	count = 'z';
	while (count <= 'z' && count >= 'a')
	{	
		ft_putchar(count);
		count--;
	}
}

