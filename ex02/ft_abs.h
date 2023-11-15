/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:34:56 by lsquarci          #+#    #+#             */
/*   Updated: 2023/11/15 17:35:04 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ft_abs(Value)

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

#endif