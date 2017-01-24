/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciprian <fciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 14:25:41 by fciprian          #+#    #+#             */
/*   Updated: 2017/01/15 13:17:57 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"
/*
void	hook_color(int keycode, t_fract *fract)
{
	if (keycode == N1)
		fract->color= 0xFFFF00;
	else if (keycode == N2)
		fract->color = 0x33CCFF;
	else if (keycode == N3)
		fract-c>olor = 0xFF0000;
	else if (keycode == N4)
		fract->color = 0x66CC00;
	else if (keycode == N5)
		fract->color = 1;
	else if (keycode == N6)
		fract->color = 0;
	else if (keycode == N7)
		fract->color = 0;
	else if (keycode == N8)
		fract->color = 1;
	mlx_clear_window(fract->mlx, fract->win);
}
*/
int					expose_hook(t_fract *fract)
{
	fract->fractal(fract);
	return (0);
}

void	hook_zoom(int keycode, t_fract *fract)
{
	if (keycode == PLUS)
	{
		fract->coeff_x += 0.0125;
		fract->coeff_y += 0.0125;
		fract->coeff_z += 0.0125;
	}
	else if (keycode == MINUS)
	{
		if (fract->coeff_x > 0.25 && fract->coeff_y > 0.25 && fract->coeff_z > 0.25)
		{
			fract->coeff_x -= 0.0125;
			fract>coeff_y -= 0.0125;
			fract->coeff_z -= 0.0125;
		}fract
	else if (keycode == ENTER)
	{
		fract->coeff_x = 1.0;
		fract->coeff_y = 1.0;
		fract->coeff_z = 1.0;
		fract->left_space = 0;
		fract->up_space = 0;
	}
	mlx_clear_window(fract->mlx, fract->win);
}

void	hook_moving(int keycode, t_fract *fdf)
{
	if (keycode == RIGHT)
		fract->left_space -= 5;
	else if (keycode == LEFT)
		fract->left_space += 5;
	else if (keycode == DOWN)
		fract->up_space -= 5;
	else if (keycode == UP)
		fract->up_space += 5;
	mlx_clear_window(fract->mlx, fract->win);
}

void	hook_exit(t_fract *fract)
{
	mlx_destroy_window(fract->mlx, fract->win);
	error_exit();
}

int		hook_keys(int keycode, t_fdf *fract)
{
	if (keycode == ESC)
		hook_exit(fract);
	else if (keycode == N1 || keycode == N2 || keycode == N3
			|| keycode == N4 || keycode == N5 || keycode == N6 ||
			keycode == N7 || keycode == N8)
		hook_color(keycode, fract);
	else if (keycode == PLUS || keycode == MINUS || keycode == ENTER)
		hook_zoom(keycode, fract);
	else if (keycode == LEFT || keycode == RIGHT || keycode == UP
			|| keycode == DOWN)
		hook_moving(keycode, fract);
	return (1);
}
