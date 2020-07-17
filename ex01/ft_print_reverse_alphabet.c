/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkhanyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 13:42:38 by akkhanyi          #+#    #+#             */
/*   Updated: 2020/07/17 13:42:48 by akkhanyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

