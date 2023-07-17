/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:27:13 by matesant          #+#    #+#             */
/*   Updated: 2023/07/11 15:14:58 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);
//{
//	write(1, &c, 1);
/*}*/

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/