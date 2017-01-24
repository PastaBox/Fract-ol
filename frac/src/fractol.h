/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pixels.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <grleblan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:07:10 by grleblan          #+#    #+#             */
/*   Updated: 2017/01/15 17:43:33 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H

# define FRACTOL_H

/*
**		Defines
*/

# define WIN_H 720
# define WIN_W 1200
# define SCALE 750

# define TILE_X 50
# define TILE_Y 50
# define TILE_Z 3

# define COEFF 1.2

/*
**		Includes
*/

# include "../libft/libft.h"
# include "../minilibx_macos_sierra/mlx.h"

# include "keys.h"

# include <fcntl.h>
# include <math.h>
# include <stdio.h>

typedef struct		s_image
{
	int				width;
	int				height;
	char			*buffer;
	float			vertexes[8];
	struct s_image	*next;
}					t_image;

typedef struct		s_fract
{
	void			*mlx;
	void			*win;
	void			*im;
	double			coeff_x;
	double			coeff_y;
	double			coeff_z;
	intmax_t		x;
	intmax_t		y;
	intmax_t		z;
	int 			option_x;
	int 			option_y;
	unsigned int 	color_max
	int				left_space;
	int				up_space;
	int				pov;
	int 			psy;
	void 			(*fractal)();
	int 			color_val;
	int 			ite_max;
	double			scale;
	struct s_julia	*mand
	struct s_julia	*julia; 
}					t_fract;

typedef struct 		s_julia
{
	long double 	x1;
	long double 	x2;
	long double 	y1;
	long double 	y2;
	long double 	tmp;
	long double 	zr;
	long double 	zi;
	long double 	cr;
	long double 	ci;
}