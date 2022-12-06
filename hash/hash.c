#include "sha2.h"
#include "sha3.h"
#include "blake2b.h"
#include "blake256.h"
#include "hasher.h"
#include "hmac.h"
#include "groestl.h"
#include "hash.h"


void hash_sha1(uint8_t* out, const uint8_t* in, size_t in_len)
{
	sha1_Raw(in,in_len,out);
}

void hash_sha2_256(uint8_t* out, const uint8_t* in, size_t in_len)
{
	sha256_Raw(in,in_len,out);
}
void hash_sha2_512(uint8_t* out, const uint8_t* in, size_t in_len)
{
	sha512_Raw(in,in_len,out);
}
void hash_sha3_256(uint8_t* out, const uint8_t* in, size_t in_len)
{
	sha3_256(in,in_len,out);
}
void hash_sha3_512(uint8_t* out, const uint8_t* in, size_t in_len)
{
	sha3_512(in,in_len,out);
}
void hash_keccak_256(uint8_t* out, const uint8_t* in, size_t in_len)
{
	keccak_256(in,in_len,out);
}
void hash_keccak_512(uint8_t* out, const uint8_t* in, size_t in_len)
{
	keccak_512(in,in_len,out);
}
void hash_blake256(uint8_t* out, const uint8_t* in, size_t in_len)
{
	blake256(in,in_len,out);
}
void hash_hmac_sha512(uint8_t* out, const uint8_t* in, size_t in_len,uint8_t* key,size_t key_len)
{
	hmac_sha512(key,key_len,in,in_len,out);
}
void hash_ripemd160(uint8_t* out, const uint8_t* in, size_t in_len)
{
	ripemd160(in,in_len,out);
}
