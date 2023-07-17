/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:09:23 by matesant          #+#    #+#             */
/*   Updated: 2023/07/11 15:17:06 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_strlen("dsdsad");
	printf("resultada %d\n", result);
	return (0);
}
*/