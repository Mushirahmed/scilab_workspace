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
void ddiagr(double *in, int _row,int _column,double *out)
{
    
     int i, j;
     //in=(double*)malloc(_row*sizeof(double)_row*_row));
     printf("_row in ddiagr.c is : %d\n",_row);
     printf("_column in ddiagr.c is : %d\n",_column);
   
     /*for ( i = 0 ; i < _row ; i++ )
       {
        for ( j = 0 ; j < _row ; j++ )
         {
                if(i==j)
                  {
                     out[(_row+1)*i] = in[_row*i] ;  
                    
                    
                  }
                  
          }
       }*/
      
       
     for ( i = 0 ; i < _row ; i++ )
       {
        for ( j = 0 ; j < _row ; j++ )
         {
                if(i==j)
                  {
                     out[(_row+1)*i] = in[i] ;  
                    
                  }
                 else
                  {

 
                  }
                  
          }
       }

}

