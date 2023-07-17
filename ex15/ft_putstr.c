/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:05:12 by matesant          #+#    #+#             */
/*   Updated: 2023/07/11 15:16:58 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr("harhahahahaha");
	return (0);
}
*/