/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:30:45 by mkok              #+#    #+#             */
/*   Updated: 2016/12/05 18:06:49 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str, int len)
{
	int		i;

	i = 0;
	len = len - 1;
	while (i < len)
	{
		str[i] ^= str[len];
		str[len] ^= str[i];
		str[i] ^= str[len];
		i++;
		len--;
	}
	return (str);
}
