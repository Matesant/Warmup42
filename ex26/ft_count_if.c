/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:04:29 by matesant          #+#    #+#             */
/*   Updated: 2023/07/17 09:36:42 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	indx;

	count = 0;
	indx = 0;
	while (tab[indx])
	{
		if (f(tab[indx]) == 1)
			count++;
		indx++;
	}
	return (count);
}

/*#include <stdio.h>

int	ft_atoi(char *str)
{
	int	ind;
	int	number;

	ind = 0;
	number = 0;
	while (str[ind] && ((str[ind] > '0') && (str[ind] < '9')))
	{
		number = number * 10 + (str[ind] - 48);
		ind++;
	}
	return (number);
}

int	ft_even(char *number)
{
	if (ft_atoi(number) % 2 == 0)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char	*array[] = {"1", "2", "3", "4", "5", "6", "7", "8"};

	printf("%d\n", ft_count_if(array, ft_even));
}
*/