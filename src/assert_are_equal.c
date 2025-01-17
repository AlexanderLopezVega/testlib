/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_are_equal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:10:45 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:22:04 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testlib.h"

void	assert_are_equal(void *a, void *b, int (*cmp_fun)(void *a, void *b))
{
	assert_is_true(cmp_fun(a, b) == 0);
}