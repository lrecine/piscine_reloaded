/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:52:46 by lrecine-          #+#    #+#             */
/*   Updated: 2024/10/04 17:16:09 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = 1;
	while (argc > 1)
	{
		i = 0;
		while (argv[c][i])
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		c++;
		argc--;
	}
	return (0);
}
