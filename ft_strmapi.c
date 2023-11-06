/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:34:18 by cmakario          #+#    #+#             */
/*   Updated: 2023/11/02 18:00:44 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*array_ns;
	int		i;

	if (s == NULL || f == NULL)
		return (0);
	len = 0;
	i = 0;
	len = ft_strlen(s);
	array_ns = ft_calloc(len + 1, sizeof(char));
	if (!array_ns)
		return (NULL);
	while (i < len)
	{
		array_ns[i] = f(i, s[i]);
		i++;
	}
	array_ns[i] = '\0';
	return (array_ns);
}
