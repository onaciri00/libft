/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:52:12 by onaciri           #+#    #+#             */
/*   Updated: 2022/10/21 11:05:46 by onaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int alnum)
{
	if ((alnum >= 48 && alnum <= 57)
		|| (alnum >= 65 && alnum <= 90) || (alnum >= 97 && alnum <= 122))
		return (1);
	else
		return (0);
}
