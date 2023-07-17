/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:01:33 by matesant          #+#    #+#             */
/*   Updated: 2023/07/10 15:10:53 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 15;
	printf("antes %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("depois %d, %d\n", a, b);
}
*/