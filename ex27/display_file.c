/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:08:42 by matesant          #+#    #+#             */
/*   Updated: 2023/07/17 16:26:52 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_print_file(char const *name)
{
	int		reader;
	char	buff;

	reader = open(name, O_RDONLY);
	while (read(reader, &buff, 1))
	{
		write(1, &buff, 1);
	}
	close (reader);
}

int	main(int argc, char const *argv[])
{
	const char	*file_name;

	file_name = argv[1];
	if (argc == 2)
	{
		ft_print_file(file_name);
		return (0);
	}
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
}
