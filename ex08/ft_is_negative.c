/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:41:19 by matesant          #+#    #+#             */
/*   Updated: 2023/07/11 15:15:54 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*int	main(void)
{
	ft_is_negative(-20);
	return (0);
}*/
