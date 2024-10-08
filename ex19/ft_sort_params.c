/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:39:02 by lrecine-          #+#    #+#             */
/*   Updated: 2024/10/04 17:21:22 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

void	ft_sort_params(int argc, char *argv[])
{
	int	c;
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		c = 1;
		while (c < argc - i)
		{
			if (ft_strcmp(argv[c], argv[c + 1]) > 0)
				ft_swap(&argv[c], &argv[c + 1]);
			c++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		c = 1;
		while (c < argc)
		{
			i = 0;
			while (argv[c][i])
			{
				ft_putchar(argv[c][i]);
				i++;
			}
			ft_putchar('\n');
			c++;
		}
	}
	return (0);
}
