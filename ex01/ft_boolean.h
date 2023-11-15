/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:34:43 by lsquarci          #+#    #+#             */
/*   Updated: 2023/11/14 15:35:42 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef int	t_bool;
#define TRUE 1
#define FALSE 0

#define EVEN(x) ((x) % 2 == 0)
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0