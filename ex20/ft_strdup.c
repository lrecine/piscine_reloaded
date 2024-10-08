/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:54:03 by lrecine-          #+#    #+#             */
/*   Updated: 2024/10/04 15:48:46 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_src;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new_src = malloc(sizeof(char) * (i + 1));
	if (!(new_src))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new_src[i] = src[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}
