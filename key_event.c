/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_event.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-wy <revan-wy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:21:00 by revan-wy          #+#    #+#             */
/*   Updated: 2018/08/10 15:08:21 by revan-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	key_event(int keycode, int **param)
{
	param = 0;
	if (keycode == 53)
	{
		exit(0);
	}
	return (1);
}
