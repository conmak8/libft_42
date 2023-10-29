/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:39:35 by cmakario          #+#    #+#             */
/*   Updated: 2023/10/28 00:42:01 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i ;
	void	*p ;

	p = malloc(count * size);
	if (!p)
		return (0);
	i = 0;
	while (i < count * size)
	{
		((unsigned char *)p)[i] = 0 ;
		i++;
	}
	return (p);
}

// p = yes =  (p != no)  =  yes
// p = no  =  (p != no)  =  no
// p = safk -> yes
// p = 0    -> no