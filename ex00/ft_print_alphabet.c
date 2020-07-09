#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
	}

	void	ft_print_alphabet(void) 
	{
		int		count;

		count = 'a';
		while (count >= 'a' && count <= 'z')
		{ 
			ft_putchar(count);
			count++; 
		}
	}

