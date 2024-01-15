/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:52:35 by jcario            #+#    #+#             */
/*   Updated: 2024/01/04 14:47:56 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define WIDTH 512
# define HEIGHT 512

# include <stdio.h>

# include "libft.h"
# include "MLX42.h"

typedef struct s_map
{
	char	**map;
} t_map;

#endif