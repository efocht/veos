/*
 * Copyright (C) 2017-2018 NEC Corporation
 * This file is part of the VEOS.
 *
 * The VEOS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version
 * 2.1 of the License, or (at your option) any later version.
 *
 * The VEOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the VEOS; if not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file   libvepseudo.h
 * @brief  A header file for VH-called programs
 */

#ifndef __LIBVEPSEUDO_H
#define __LIBVEPSEUDO_H

#include <sys/types.h>
#include <stdint.h>

struct veos_handle_struct;
typedef struct veos_handle_struct veos_handle;

int ve_send_data(veos_handle *, uint64_t, size_t, void *);
int ve_recv_data(veos_handle *, uint64_t, size_t, void *);
int64_t ve_vhva_to_vehva(veos_handle *, const void *);

#endif /* __LIBVEPSEUDO_H */
