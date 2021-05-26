/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 13:38:48 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/25 23:20:22 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*getstr(const char *s, int *count, char c)
{
	char	*rslt;
	int		prslt;
	int		lenstr;

	lenstr = *count;
	prslt = 0;
	while (s[lenstr] != c && s[lenstr] != 0)
		lenstr++;
	lenstr = lenstr - *count;
	rslt = malloc(lenstr + 1);
	while (prslt < lenstr)
	{
		rslt[prslt] = s[*count];
		*count += 1;
		prslt++;
	}
	*count -= 1;
	rslt[prslt] = 0;
	return (rslt);
}

static int	countc(char const *s, char c)
{
	int		count;

	count = 1;
	while (*s != 0)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

static void	verifyc(const char *s, int *count, char c)
{
	while (s[*count] != 0 && s[*count] == c)
		*count += 1;
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		n;
	char	**pp;

	pp = malloc((countc(s, c) + 1) * sizeof(char *));
	n = 1;
	count = 0;
	verifyc(s, &count, c);
	if (s[count] != 0)
		pp[0] = getstr(s, &count, c);
	while (s[count++] != 0)
	{
		if (s[count] == c)
		{
			verifyc(s, &count, c);
			if (s[count] != 0)
				pp[n] = getstr(s, &count, c);
			n++;
		}
		if (s[count] == 0)
			break ;
	}
	pp[n] = NULL;
	return (pp);
}
