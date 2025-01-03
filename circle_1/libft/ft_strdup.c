/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgenc <emgenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:23:49 by emgenc            #+#    #+#             */
/*   Updated: 2024/10/11 18:43:44 by emgenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*calloc;
	size_t	len;

	len = ft_strlen(s1);
	calloc = (char *)malloc(sizeof(char) * len + 1);
	if (!calloc)
		return (0);
	ft_strlcpy(calloc, s1, len + 1);
	return (calloc);
}
