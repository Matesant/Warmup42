/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:17:04 by matesant          #+#    #+#             */
/*   Updated: 2023/07/12 18:13:08 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

/*#include <stdio.h>

int	main(void)
{
	int	result;

	printf("numero: %d\n", 5);
	result = ft_recursive_factorial(5);
	printf("numero: %d\n", result);
}
*/