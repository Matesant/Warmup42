/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:34:53 by matesant          #+#    #+#             */
/*   Updated: 2023/07/11 15:15:32 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}
*/

void	ft_print_numbers(void)
{
	int	numb;

	numb = 48;
	while (numb <= 57)
	{
		ft_putchar(numb);
		numb++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/