/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:26:59 by ngulya            #+#    #+#             */
/*   Updated: 2016/12/07 16:22:05 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	char	**res_w;
	size_t	len;
	int		i;
	// char	*tmp;
	char 	*l;

	l = (char *)s;
	i = 0;
	if (!s || !c)
		return (NULL);
	len = ft_perebor(s, c);
	// printf("len = 1 = %zu   |%s|\n", len, s);
	res = (char **)malloc(sizeof(char *) * (len + 1));
	if (res)
	{
		res[len] = NULL;
		res_w = res;
		while (len > 0)
		{
			res[i] = ft_strdosym(l, c);
			// tmp = ft_strdosym(l, c);
			l = ft_pozs(l, res[i], c);
			// free(tmp);
			// s = tmp;
			// printf("|%s|\n", s);
			len--;
			i++;
		}
		return (res_w);
	}
	return (NULL);
}
