/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:56:03 by matesant          #+#    #+#             */
/*   Updated: 2023/07/12 18:12:50 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	numb;

	numb = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		while (nb > 0)
		{
			numb = numb * nb;
			nb--;
		}
		return (numb);
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	nub;
	int	result;

	nub = 15;
	printf("numero: %d\n", nub);
	result = ft_iterative_factorial(nub);
	printf("numero: %d\n", result);
}
*/