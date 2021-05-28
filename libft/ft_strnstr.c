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

//find the first ocorrence of my string 'needle' in my 'haystack'
//search the only first 'n' characters of my haystack
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	phay;
	size_t	pneed;
	size_t	mark;

	phay = 0;
	//verify if my needle is equals to 0, if true, return a pointer to the beegin of my haystack
	if (*needle == 0)
		return ((char *)haystack);
	//verify if my pointer to haystack(phay) is smaller than 'len' and if my haystack in position phay is different to \0
	while (phay < len && haystack[phay] != 0)
	{
		// safe a backup of my phay (for if i found the needle) 
		mark = phay;
		pneed = 0;
		//verify if my pointer of haystack(phay) is equal to pointer to needle(pneed), and if my needle  not comed to the end
		//if true, put my pointers to the next position
		while (haystack[phay] == needle[pneed] && needle[pneed] != 0)
		{
			pneed++;
			phay++;
		}
		// if my pointer of the needle made it at the end, and my pointer to haystack is smaller than len
		//returns a pointer to haystack on position 'mark'(that is my backup of phay)
		if (needle[pneed] == 0 && phay < len)
			return ((char *)haystack + mark);
		//if not true, my phay gets my mark(backup) plus one, and return to while on line 28
		phay = mark + 1;
	}
	// return null if my needle doesn't found
	return (NULL);
}
