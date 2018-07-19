/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsauron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:30:43 by jsauron           #+#    #+#             */
/*   Updated: 2018/05/25 15:01:16 by jsauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_malloc(char *str)
{
	char *ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	ft_strcpy(ptr, str);
	return (ptr);
}
