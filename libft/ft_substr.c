/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:08:46 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/20 18:12:51 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	psub;

	psub = 0;
	sub = malloc(len);
	if (sub == NULL)
		return (NULL);
	while (psub < len)
	{
		sub[psub] = s[start];
		start++;
		psub++;
	}
	sub[psub] = 0;
	return (sub);
}
