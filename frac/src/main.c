/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frac.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 12:27:18 by grleblan          #+#    #+#             */
/*   Updated: 2017/01/22 12:27:20 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fractol.h"

void		error_handler(char *string, int type)
{
	if (string == NULL && !type)
		error_exit();
	if (string && !type)
	{
		ft_putstr_fd(string, 2);
		error_exit();
	}
	if (!string && type)
	{
		perror("Error :");
		error_exit();
	}
}

int 		fract_parse_name(char *str, t_fract *name);
{
	if (ft_strcmp(name->jul, str) == 0)
	{
		name->fractal = julia;
		return (1);
	}
	else if (ft_strcmp(name->mandel, str) == 0)
	{
		name->fractal = mandelbrot;
		return (3);
	}
	return (0);
}

void		fract_display(void)
{
	ft_putstr("======== Options =======\n");
	ft_putstr("\nESC : Leave the program\n");
	ft_putstr("Change color map : \n");
	ft_putstr("\t1 - Yellow\n");
	ft_putstr("\t2 - Blue\n");
	ft_putstr("\t3 - Red\n");
	ft_putstr("\t4 - Green\n");
	ft_putstr("\t5 - White\n");
	ft_putstr("ZOOM : +\n");
	ft_putstr("DEZOOM : -\n");
	ft_putstr("\n===================");
}

int		main(int argc, char **argv)
{
	t_fract fract;

	new_fract();
	if (argc == 2)
	{
		fract.mlx = mlx_init();
		fract.win = mlx_new_window(fract.mlx, WIN_W, WIN_H, "FdF Main Frame");
		fract.name = fract_parse_name(argv[1], &fract);
		if (fdf.name == 0)
			error_handler("usage : fractol [julia/ mandelbrot, burning]", 1);
		fract_display();
		mlx_hook(fract.win, 2, 3, hook_keys, &fdf);
		mlx_loop_hook(fract.mlx, &expose_hook, &fdf);
		mlx_loop(fract.mlx);
	}
	else
		error_handler("usage : fractol [julia/ mandelbrot, burning]", 1);
	return (0);
}