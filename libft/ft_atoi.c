/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:13:14 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/24 23:13:37 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_addnum(int *num, char c, int n)
{
	if (c >= '0' && c <= '9')
	{
		if (*num != 0)
			*num *= 10;
		*num += c - '0';
		return (0);
	}
	if (*num != 0)
		return (1);
	if (n > 1)
		return (1);
	if (c >= 9 && c <= 13)
		return (0);
	if (c == ' ' || c == '-' || c == '+')
		return (0);
	return (1);
}

void static	ft_whichsinal(char c, int *num, int *npos, int *nneg)
{
	if (c == '-' && *num == 0)
		*nneg += 1;
	else if (c == '+' && *num == 0)
		*npos += 1;
}

int	ft_atoi(const char *nptr)
{
	int				num;
	int				count;
	int				nneg;
	int				npos;

	npos = 0;
	nneg = 0;
	count = 0;
	num = 0;
	while (nptr[count] != '\0')
	{
		if (ft_isascii(nptr[count]) != 0)
		{
			ft_whichsinal(nptr[count], &num, &npos, &nneg);
			if (ft_addnum(&num, nptr[count], npos + nneg) == 1)
				break ;
		}
		else if (num != 0)
			break ;
		count++;
	}
	if (nneg == 1)
		return (num - num - num);
	return (num);
}
