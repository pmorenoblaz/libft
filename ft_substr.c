/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:02:49 by pmoreno-          #+#    #+#             */
/*   Updated: 2021/09/23 14:02:51 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == 0)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (len == 1 && start >= ft_strlen(s))
	{
		str = malloc(1);
		str[0] = 0;
		return (str);
	}
	else
		str = malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	if (start < ft_strlen(s))
		ft_strlcpy(str, &s[start], len + 1);
	else
		ft_strlcpy(str, s, 1);
	return (str);
}
