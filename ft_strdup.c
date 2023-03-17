/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:24:39 by surkim            #+#    #+#             */
/*   Updated: 2023/03/14 17:35:19 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	size_t	size;
	char	*tmp;

	i = 0;
	size = ft_strlen(s1);
	tmp = (char *) malloc(size + 1);
	if (!tmp)
		return (0);
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
