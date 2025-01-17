/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_is_true.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:10:45 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:22:55 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testlib.h"

void	assert_is_true(int value)
{
	if (value)
		print_ok();
	else
		print_error();
}