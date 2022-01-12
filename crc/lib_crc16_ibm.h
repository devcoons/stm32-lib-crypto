/*!
	@file   lib_crc_ibm.h
	@brief  <brief description here>
	@t.odo	-
	---------------------------------------------------------------------------

	MIT License
	Copyright (c) 2021 Io. D (Devcoons)

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

#ifndef LIBRARIES_INC_LIB_CRC_IBM_H_
#define LIBRARIES_INC_LIB_CRC_IBM_H_

/******************************************************************************
* Includes
******************************************************************************/

#include <inttypes.h>

/******************************************************************************
* Enumerations, structures & Variables
******************************************************************************/

/******************************************************************************
* Declaration | Public Functions
******************************************************************************/

void crc16_ibm_to_array_msb(uint8_t* result, uint16_t starting_value,
				uint8_t* data, uint32_t size);

void crc16_ibm_to_array_lsb(uint8_t* result, uint16_t starting_value,
				uint8_t* data, uint32_t size);

uint16_t crc16_ibm(uint16_t starting_value, uint8_t* data, uint32_t size);

/******************************************************************************
* EOF - NO CODE AFTER THIS LINE
******************************************************************************/
#endif
