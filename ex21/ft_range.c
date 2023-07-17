/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:41:10 by matesant          #+#    #+#             */
/*   Updated: 2023/07/13 18:50:40 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	*tab;
	int	ind;

	ind = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[ind] = min;
		ind++;
		min++;
	}
	return (tab);
	free (tab);
}

/*int	main(void)
{
	int	*tab2;
	int	i2;

	i2 = 0;
	tab2 = ft_range(15, 25);
	while (i2 < 10)
	{
		printf("%i\n", tab2[i2]);
		i2++;
	}
}
*/