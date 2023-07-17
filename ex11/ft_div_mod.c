/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:32:53 by matesant          #+#    #+#             */
/*   Updated: 2023/07/10 17:49:13 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 5;
	int	mod;
	int	div;

	printf("antes %d %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("depois %d %d\n", div, mod);
	return (0);
}*/