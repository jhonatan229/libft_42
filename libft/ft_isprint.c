/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:02:41 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/27 12:49:36 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return a number diferent of 0 if my c is printable
int	ft_isprint(int c)
{
	if ((unsigned char)c >= 32 && (unsigned char)c <= 126)
		return (1);
	return (0);
}
