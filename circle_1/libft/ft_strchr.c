/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgenc <emgenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:45:35 by emgenc            #+#    #+#             */
/*   Updated: 2024/10/12 15:59:16 by emgenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*source_copy;

	source_copy = (char *)s;
	while (*source_copy)
	{
		if (*source_copy == (unsigned char)c)
			return (source_copy);
		source_copy++;
	}
	if ((unsigned char)c == 0)
		return (source_copy);
	return (NULL);
}
