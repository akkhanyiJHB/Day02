/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkhanyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:51:35 by akkhanyi          #+#    #+#             */
/*   Updated: 2020/07/10 11:33:19 by akkhanyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)  // sub function, also returns int
{	write (1,&c"/n",1); // system call

}


void ft_print_numbers(void)
	{
		char number = '0';
		while (number < '9')
		{
			ft_putchar(number);
			number++;
		}


	}
