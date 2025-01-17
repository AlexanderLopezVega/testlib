/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_not_equal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:10:45 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:52:13 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testlib.h"

void	assert_not_equal(const void *a, const void *b,
		int (*cmp_fun)(const void *a, const void *b))
{
	assert_is_true(cmp_fun(a, b) != 0);
}