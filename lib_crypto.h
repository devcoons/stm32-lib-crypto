/*!
	@file   lib_crypto.h
	@brief  <brief description here>
	@t.odo	-
	---------------------------------------------------------------------------

	MIT License
	Copyright (c) 2019 Io. D (Devcoons)

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
/******************************************************************************
* Preprocessor Definitions & Macros
******************************************************************************/

#ifndef LIB_CRYPTO_H_
#define LIB_CRYPTO_H_

/******************************************************************************
* Includes
******************************************************************************/

#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

#if __has_include("../lib_crypto_config.h")
	#include "../lib_crypto_config.h"
	#define LIB_CRYPTO_ENABLED
#else
	#warning "Missing: `lib_crypto_config.h` file in the parent folder. Please use the example"
#endif

#ifdef LIB_CRYPTO_ENABLED
	#ifdef LIB_CRYPTO_ENABLE_CRC
		#if __has_include("crc/lib_crc16_ibm.h")
			#include "crc/lib_crc16_ibm.h"
		#endif
		#if __has_include("crc/lib_crc16_ccitt.h")
			#include "crc/lib_crc16_ccitt.h"
		#endif
	#endif
	#ifdef LIB_CRYPTO_ENABLE_AES
		#if __has_include("aes/lib_aes.h")
			#include "aes/lib_aes.h"
		#endif
	#endif
	#ifdef LIB_CRYPTO_ENABLE_HASH
		#include "hash/sha2.h"
		#include "hash/sha3.h"
		#include "hash/blake2b.h"
		#include "hash/blake256.h"
		#include "hash/hasher.h"
		#include "hash/hmac.h"
		#include "hash/groestl.h"
	#endif
	#ifdef LIB_CRYPTO_ENABLE_ECC
		#include "ecc/ecdsa.h"
		#include "ecc/curves.h"
		#include "ecc/secp256k1.h"
	#endif
	#ifdef LIB_CRYPTO_ENABLE_ENC
		#include "enc/base58.h"
		#include "enc/base64.h"
	#endif
	#ifdef LIB_CRYPTO_ENABLE_BLOCKCHAIN
		#include "extra/address.h"
		#include "extra/rfc6979.h"
		#include "extra/rand.h"
	#endif
	#ifdef LIB_CRYPTO_ENABLE_RANDOM
		#include "extra/rand.h"
	#endif
#endif

/******************************************************************************
* Enumerations, structures & Variables
******************************************************************************/

/******************************************************************************
* Declaration | Public Functions
******************************************************************************/

/******************************************************************************
* EOF - NO CODE AFTER THIS LINE
******************************************************************************/
#endif
