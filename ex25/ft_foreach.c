/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dsadas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:59:03 by matesant          #+#    #+#             */
/*   Updated: 2023/07/17 08:27:48 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	indx;

	indx = 0;
	if (tab)
	{
		while (indx < length)
		{
			f(tab[indx]);
			indx++;
		}
	}
}

/*#include <stdio.h>

void	dt_power(int nb)
{
	int	result;

	if (nb > 0)
	{
		result = nb * nb;
		printf("%d² = %d\n", nb, result);
	}
}

int	main(void)
{
	int	array[] = {2, 3, 4, 5, 6};

	ft_foreach(array, 5, dt_power);
	return(0);
}*/
