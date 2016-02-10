/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Arnaud Torset
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __ROUND_H__
#define __ROUND_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	round(x) rounds the elements of x to the nearest integers.
*/

EXTERN_ELEMFUNCT float	srounds(float in);

EXTERN_ELEMFUNCT double drounds(double in);

EXTERN_ELEMFUNCT floatComplex crounds(floatComplex in);

EXTERN_ELEMFUNCT doubleComplex zrounds(doubleComplex in);

EXTERN_ELEMFUNCT uint8	u8rounds(uint8 in);

EXTERN_ELEMFUNCT int8	i8rounds(int8 in);

EXTERN_ELEMFUNCT uint16	u16rounds(uint16 in);

EXTERN_ELEMFUNCT int16	i16rounds(int16 in);

EXTERN_ELEMFUNCT void	srounda(float* in, int size, float* out);

EXTERN_ELEMFUNCT void	drounda(double* in, int size, double* out);

EXTERN_ELEMFUNCT void	crounda(floatComplex* in, int size, floatComplex* out);

EXTERN_ELEMFUNCT void	zrounda(doubleComplex* in, int size, doubleComplex* out);

EXTERN_ELEMFUNCT void	u8rounda(uint8* in, int size, uint8* out);

EXTERN_ELEMFUNCT void	i8rounda(int8* in, int size, int8* out);

EXTERN_ELEMFUNCT void	u16rounda(uint16* in, int size, uint16* out);

EXTERN_ELEMFUNCT void	i16rounda(int16* in, int size, int16* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ROUND_H__ */

