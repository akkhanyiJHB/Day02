/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkhanyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 13:46:34 by akkhanyi          #+#    #+#             */
/*   Updated: 2020/07/17 13:46:41 by akkhanyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c) 
	{
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

