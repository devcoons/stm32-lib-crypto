/*!
	@file   lib_check8.c
	@brief  <brief description here>
	@t.odo	-
	---------------------------------------------------------------------------

	MIT License
	Copyright (c) 2017 Io. D (Devcoons)

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

/******************************************************************************
* Includes
******************************************************************************/

#include "lib_check8.h"

/******************************************************************************
* Enumerations, structures & Variables
******************************************************************************/

/******************************************************************************
* Declaration | Static Functions
******************************************************************************/

/******************************************************************************
* Definition  | Static Functions
******************************************************************************/

/******************************************************************************
* Definition  | Public Functions
******************************************************************************/

uint8_t checksum_8(const void* vptr, size_t len) 
{
    const uint8_t* data = vptr;
    uint16_t sum = 0;

    for (register size_t i = 0; i < len; i++)
    {
        for (register size_t j = 0; j < 8; j++)
        {
            if ((data[i] & (0x01 << j)) != 0)
                sum = (i+j+sum+1) & 0x00ff;
        }
    }

    while((uint8_t)(sum & 0x00ff) == 0)
    {
    	sum += (((1 + len) * 3) & 0x00ff) ;
    }

    return (uint8_t)(sum & 0x00ff);
}

/******************************************************************************
* EOF - NO CODE AFTER THIS LINE
******************************************************************************/
