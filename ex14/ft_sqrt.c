/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:44:27 by matesant          #+#    #+#             */
/*   Updated: 2023/07/11 15:16:35 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (sqrt < 46341)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	result;

	printf("numero: %d\n", 5);
	result = ft_sqrt(81);
	printf("numero: %d\n", result);
}*/
