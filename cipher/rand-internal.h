/* rand-internal.h - header to glue the random functions
 *	Copyright (C) 1998, 2002 Free Software Foundation, Inc.
 *
 * This file is part of Libgcrypt.
 *
 * Libgcrypt is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser general Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * Libgcrypt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#ifndef G10_RAND_INTERNAL_H
#define G10_RAND_INTERNAL_H

void rndlinux_constructor(void);
void rndunix_constructor(void);
void rndw32_constructor(void);
void rndos2_constructor(void);
void rndatari_constructor(void);
void rndmvs_constructor(void);

#endif /*G10_RAND_INTERNAL_H*/
