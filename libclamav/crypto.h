/*
 *  Copyright (C) 2013-2024 Cisco Systems, Inc. and/or its affiliates. All rights reserved.
 *  Copyright (C) 2011-2013 Sourcefire, Inc.
 *
 *  Authors: aCaB
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

#ifndef __CRYPTO_H
#define __CRYPTO_H
#include <openssl/opensslv.h>

void cli_setup_fips_configuration(void);
int cli_get_fips_mode(void);

#if OPENSSL_VERSION_MAJOR == 1
RSA *cli_build_ext_signing_key(void);
#elif OPENSSL_VERSION_MAJOR == 3
EVP_PKEY *cli_build_ext_signing_key(void);
#else
#error "Unsupported OpenSSL version"
#endif

#endif
