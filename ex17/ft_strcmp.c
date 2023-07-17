/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:16:02 by matesant          #+#    #+#             */
/*   Updated: 2023/07/11 15:17:16 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[50] = "aaaj";
	char	s2[50] = "aaab";
	int		result;

	result = ft_strcmp(s1, s2);
	printf("home %d", result);
}*/