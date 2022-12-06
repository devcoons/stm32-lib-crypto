/*!
	@file   hash.h
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
#ifndef LIBRARIES_LIB_CRYPTO_HASH_HASH_H_
#define LIBRARIES_LIB_CRYPTO_HASH_HASH_H_

void hash_sha1(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_sha2_256(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_sha2_512(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_sha3_256(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_sha3_512(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_keccak_256(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_keccak_512(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_blake256(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_ripemd160(uint8_t* out, const uint8_t* in, size_t in_len);
void hash_hmac_sha512(uint8_t* out, const uint8_t* in, size_t in_len,uint8_t* key,size_t key_len);


#endif /* LIBRARIES_LIB_CRYPTO_HASH_HASH_H_ */
