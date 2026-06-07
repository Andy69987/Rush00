/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:55:13 by breheg            #+#    #+#             */
/*   Updated: 2026/06/07 18:19:29 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
{
	int	xx;
	int	yy;

	xx = 0;
	yy = 0;
	while (yy < y)
	{
		while (xx < x)
		{
			if ((yy == 0) && (xx == 0 || xx == x - 1))
				write(1, "A", 1);
			else if ((yy == y - 1) && (xx == 0 || xx == x - 1))
				write(1, "C", 1);
			else if ((yy == 0 || yy == y - 1) || (xx == 0 || xx == x - 1))
				write(1, "B", 1);
			else
				write(1, " ", 1);
			xx++;
		}
		xx = 0;
		yy++;
		write(1, "\n", 1);
	}
}
