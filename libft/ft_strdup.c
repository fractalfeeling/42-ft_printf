/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:27:37 by lwee              #+#    #+#             */
/*   Updated: 2022/06/16 23:46:07 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1);
	s2 = malloc(sizeof(*s1) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, len + 1);
	return (s2);
}
