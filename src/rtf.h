/* 
 * rtf.h -- utility functions for dealing with RTF content
 * 
 * Copyright (C) 1999-2005 by Mark Simpson <damned@theworld.com>
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
 * Commentary: 
 *   
 */

#ifndef RTF_H
#define RTF_H

#if HAVE_CONFIG_H
#  include "config.h"
#endif /* HAVE_CONFIG_H */

#include "mapi_attr.h"

extern void save_rtf_data (char *rtf_file, 
			   const char *directory, 
			   MAPI_Attr **attrs);

#endif /* RTF_H */