/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:25:02 by matesant          #+#    #+#             */
/*   Updated: 2023/07/12 18:09:33 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	indstr;

	indstr = 0;
	while (str[indstr])
	{
		ft_putchar(str[indstr]);
		indstr++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	indcmp;

	indcmp = 0;
	while (s1[indcmp] != '\0' && s1[indcmp] == s2[indcmp])
	{
		indcmp++;
	}
	return (s1[indcmp] - s2[indcmp]);
}

int	main(int argc, char *argv[])
{
	int	ind1;
	int	ind2;

	ind1 = 1;
	while (ind1 < argc)
	{
		ind2 = 1;
		while (ind2 < argc)
		{
			if (ft_strcmp(argv[ind1], argv[ind2]) < 0)
			{
				ft_swap(&argv[ind1], &argv[ind2]);
			}
			ind2++;
		}
		ind1++;
	}
	ind1 = 1;
	while (ind1 < argc)
	{
		ft_putstr(argv[ind1]);
		ft_putchar('\n');
		ind1++;
	}
}
