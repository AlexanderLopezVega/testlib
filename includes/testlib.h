/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:07:41 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:53:27 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H

void	assert_are_equal(const void *a, const void *b,
			int (*cmp_fun)(const void *a, const void *b));
void	assert_greater_than(const void *a, const void *b,
			int (*cmp_fun)(const void *a, const void *b));
void	assert_is_false(const int value);
void	assert_is_null(const void *ptr);
void	assert_is_true(const int value);
void	assert_lesser_than(const void *a, const void *b,
			int (*cmp_fun)(const void *a, const void *b));
void	assert_not_equal(const void *a, const void *b,
			int (*cmp_fun)(const void *a, const void *b));
void	assert_not_null(const void *ptr);
void	print_error(void);
void	print_ok(void);

#endif