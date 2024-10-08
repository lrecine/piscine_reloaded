/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:33:14 by lrecine-          #+#    #+#             */
/*   Updated: 2024/10/01 20:16:54 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	result;

	result = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	return (0);
}
