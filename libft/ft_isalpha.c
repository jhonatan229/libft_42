/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:57:31 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/18 15:57:31 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (2);
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (2);
	return (0);
}
