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

t_fract		init_julia(void)
{
	t_julia	*e;

	if (!(e = (t_julia*)malloc(sizeof(t_julia))))
		return (NULL);
		e->x1 = -2.1;
		e->x2 = 0.6;
		e->y1 = -1.2;
		e->y2 = 1.2;
		e->tmp = 0;
	 	e->zi = 0;
	 	e->zr = 0;
	 	e->cr = 0;
	 	e->ci = 0;
	return (e);
}

t_fract		init_mand(void)
{
	t_julia	*e;
	
	if (!(e = (t_julia*)malloc(sizeof(t_julia))))
		return (NULL);
		e->x1 = -2.1;
		e->x2 = 0.6;
		e->y1 = -1.2;
		e->y2 = 1.2;
		e->tmp = 0;
	 	e->zi = 0;
	 	e->zr = 0;
	 	e->cr = 0;
	 	e->ci = 0;
	return (e);
}

t_fract		new_frac(void);
{
	t_fract *e;

	if (!(e = (t_fract*)malloc(sizeof(t_fract))))
		return (NULL);
	e->x = 0;
	e->y = 0;
	e->z = 150;
	e->option_x = WIN_W / 2;
	e->option_y = WIN_H / 2;
	e->color_max = 0x000000;
	e->psy = 0;
	e->color_val = 0;
	e->ite_max = 50;
	e->mand = init_mand();
	e->julia = init_julia(); 
	e->coeff_x = 1.0
	e->coeff_y = 1.0;
	e->coeff_z = 1.0;
	e->left_space = 0;
	e->up_space = 0;
	e->pov = 1;
	e->scale = 1;
	e->name = 0;
	return (e);
}