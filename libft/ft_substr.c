/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:41:13 by lwee              #+#    #+#             */
/*   Updated: 2022/03/16 20:25:41 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	len_sub = ft_strlen(s + start);
	if (len_sub < len)
		len = len_sub;
	sub = malloc(sizeof(s) * (len + 1));
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
