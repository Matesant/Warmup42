/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   domingo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:31:52 by matesant          #+#    #+#             */
/*   Updated: 2023/07/17 12:48:33 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terca.h"

void	ft_print_numbers(void)
{
	int	numb;

	numb = 48;
	while (numb <= 57)
	{
		write(1, &numb, 1);
		numb++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
