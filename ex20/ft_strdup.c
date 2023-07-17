/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:45:41 by matesant          #+#    #+#             */
/*   Updated: 2023/07/17 09:01:32 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strdup(char *src)
{
	int		len;
	char	*result;

	if (!src)
		return (NULL);
	len = 0;
	while (src[len])
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	len = 0;
	while (src[len])
	{
		result[len] = src[len];
		len++;
	}
	result[len] = '\0';
	return (result);
}

/*int	main(void)
{
	char	str[] = "alodasu";
	char	*result;

	result = ft_strdup(str);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
