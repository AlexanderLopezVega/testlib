/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_greater_than.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:15:29 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:51:54 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testlib.h"

void	assert_greater_than(const void *a, const void *b,
		int (*cmp_fun)(const void *a, const void *b))
{
	assert_is_true(cmp_fun(a, b) > 0);
}