/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "diag.h"
#include<stdio.h>
void ddiagex(double *in, int _row,int _column,int extract_post,double *out)
{
    
     int i, j;
     
     if(extract_post <= 0)
	{
      	for ( j = 0 ; j < _column ; j++ )
         {
                
                 
            out[j] = in[((_column+1)*j)-extract_post] ;  
                   
          }

	}
    else
	{
      	for ( j = extract_post ; j <= _column ; j++ )
         {
                
                 
            out[j-extract_post] = in[((_column+1)*j)-extract_post] ;  
                   
          }
    	}

         
      

}

