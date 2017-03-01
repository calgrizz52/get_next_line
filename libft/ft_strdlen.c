/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:08:33 by mkok              #+#    #+#             */
/*   Updated: 2017/02/07 12:42:16 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strdlen(char const *str, char c)
{
	int			count;
	char const 	*tstr;

	tstr = str;
	count = 0;
	while (*tstr && *tstr++ != c)
		count++;
	return (count);
}
