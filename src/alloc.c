/*
 * alloc.c -- Useful allocation function/defintions
 *
 * Copyright (C)1999, 2000, 2001, 2002, 2003 Mark Simpson <damned@world.std.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can either send email to this
 * program's maintainer or write to: The Free Software Foundation,
 * Inc.; 59 Temple Place, Suite 330; Boston, MA 02111-1307, USA.
 *
 */
#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif /* HAVE_CONFIG_H */

#include <stdio.h>

#if STDC_HEADERS
#  include <stdlib.h>
#  include <string.h>
#else
extern void* memset (void* ptr, int c, size_t size);
extern void* malloc (size_t size);
#endif /* STDC_HEADERS */

#include "alloc.h"

/* attempts to malloc memory, if fails print error and call abort */
void*
MALLOC (size_t size)
{
    void *ptr = malloc (size);
    if (!ptr 
        && (size != 0))         /* some libc don't like size == 0 */
    {
        perror ("Memory allocation failure");
        abort();
    }
    return ptr;
}

/* mallocs memory and clears it out */
void*
CALLOC (size_t num, size_t size)
{
    void *ptr = MALLOC(num * size);
    if (ptr)
    {
        memset (ptr, '\0', (num * size));
    }
    return ptr;
}


