/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:43:56 by mkok              #+#    #+#             */
/*   Updated: 2017/02/07 12:48:25 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	int			count;
	const char *tstr;

	count = 0;
	tstr = str;
	while (*tstr)
	{
		count++;
		tstr++;
	}
	return (count);
}
