/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:18:31 by lrecine-          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:50 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_displayfile(char *file_name)
{
	int		bytes_file;
	char	character;

	bytes_file = open(file_name, O_RDONLY);
	if (bytes_file < 0)
		return ;
	while (read(bytes_file, &character, 1))
		write(1, &character, 1);
	close(bytes_file);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_displayfile(argv[1]);
	return (0);
}
