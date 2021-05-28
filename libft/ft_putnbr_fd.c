/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 20:26:00 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/27 15:02:12 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//print the number in output fd
void	ft_putnbr_fd(int n, int fd)
{
	char	*num;

	//trasnform my number in string with the function itoa
	num = ft_itoa(n);
	ft_putstr_fd(num, fd);
}
