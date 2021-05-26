/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:15:29 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/26 15:07:13 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinstr(char c, char const *set)
{
	int	count;

	count = 0;
	while (*set != 0)
	{
		if (c == *set || c == 0)
			count++;
		set++;
	}
	return (count);
}

static void	ft_n_set_in_str(char const *set, char const *s1, int *beg, int *end)
{
	while (*beg < *end)
	{
		if (ft_isinstr(s1[*beg], set) == 0)
			break ;
		*beg += 1;
	}
	while (*end > *beg)
	{
		if (ft_isinstr(s1[*end], set) == 0)
			break ;
		*end -= 1;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rslt;
	int		countbeg;
	int		countend;
	int		count;

	count = 0;
	countbeg = 0;
	countend = ft_strlen(s1);
	ft_n_set_in_str(set, s1, &countbeg, &countend);
	rslt = malloc(countend - countbeg);
	if (rslt == NULL)
		return (NULL);
	while (countbeg <= countend)
	{
		rslt[count] = s1[countbeg];
		countbeg++;
		count++;
	}
	return (rslt);
}
