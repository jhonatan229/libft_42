/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 01:17:48 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/27 12:49:01 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return a number diferent of 0 if my c is in ASCII table
int	ft_isascii(int c)
{
	if ((unsigned char)c >= 0 && (unsigned char)c <= 127)
		return (1);
	return (0);
}
