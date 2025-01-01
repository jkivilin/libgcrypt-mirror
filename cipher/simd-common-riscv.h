/* simd-common-riscv.h  -  Common macros for RISC-V vector code
 *
 * Copyright (C) 2025 Jussi Kivilinna <jussi.kivilinna@iki.fi>
 *
 * This file is part of Libgcrypt.
 *
 * Libgcrypt is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * Libgcrypt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GCRY_SIMD_COMMON_RISCV_H
#define GCRY_SIMD_COMMON_RISCV_H

#include <config.h>

#define memory_barrier_with_vec(a) __asm__("" : "+vr"(a) :: "memory")

#define clear_vec_regs() __asm__ volatile("vsetvli zero, %0, e8, m1, ta, ma;\n" \
					  "vmv.v.i v0, 0;\n" \
					  "vmv.v.i v1, 0;\n" \
					  "vmv2r.v v2, v0;\n" \
					  "vmv4r.v v4, v0;\n" \
					  "vmv8r.v v8, v0;\n" \
					  "vmv8r.v v16, v0;\n" \
					  "vmv8r.v v24, v0;\n" \
					  : \
					  : "r" (~0) \
					  : "memory", "vl", "vtype", \
					    "v0", "v1", "v2", "v3", \
					    "v4", "v5", "v6", "v7", \
					    "v8", "v9", "v10", "v11", \
					    "v12", "v13", "v14", "v15", \
					    "v16", "v17", "v18", "v19", \
					    "v20", "v21", "v22", "v23", \
					    "v24", "v25", "v26", "v27", \
					    "v28", "v29", "v30", "v31")

#endif /* GCRY_SIMD_COMMON_RISCV_H */
