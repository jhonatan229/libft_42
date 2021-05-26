/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:12:00 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/18 16:12:00 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	phay;
	size_t	pneed;
	size_t	mark;

	phay = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (phay < len && haystack[phay] != 0)
	{
		mark = phay;
		pneed = 0;
		while (haystack[phay] == needle[pneed] && needle[pneed] != 0)
		{
			pneed++;
			phay++;
		}
		if (needle[pneed] == 0 && phay < len)
			return ((char *)haystack + mark);
		phay = mark + 1;
	}
	return (NULL);
}
