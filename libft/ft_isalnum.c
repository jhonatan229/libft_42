/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 01:11:22 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/27 12:48:12 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return a number diferent of 0 if my c is alphabet or numeric 
int	ft_isalnum(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (8);
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (8);
	if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
		return (8);
	return (0);
}
