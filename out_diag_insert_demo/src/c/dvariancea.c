/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "variance.h" 

double	dvariancea(double *in, int size)
{
    int i = 0 ;
    
    double temp = 0 ;
    double variance = 0;
    
    double mean =  dmeana ( in, size );
 
    for ( i = 0 ; i < size ; i++)
    { 
       temp += dpows (  (in[i]  - mean ) ,2 ) ;
    }
    
    
    variance =  ( temp )/ ( size -1);
   
    
    return variance ;
}

