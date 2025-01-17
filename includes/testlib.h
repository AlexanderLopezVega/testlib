/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:07:41 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:22:45 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H

void	assert_are_equal(void *a, void *b, int (*cmp_fun)(void *a, void *b));
void	assert_greater_than(void *a, void *b, int (*cmp_fun)(void *a, void *b));
void	assert_is_false(int value);
void	assert_is_null(void *ptr);
void	assert_is_true(int value);
void	assert_lesser_than(void *a, void *b, int (*cmp_fun)(void *a, void *b));
void	assert_not_equal(void *a, void *b, int (*cmp_fun)(void *a, void *b));
void	assert_not_null(void *ptr);
void	print_error();
void	print_ok();

#endif