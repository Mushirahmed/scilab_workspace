/* Scilab2C FOSSEE IITB */

#include "bitget.h"
#include<stdio.h>

uint8 u8bitgets(uint8 value,int position)
{
   
   value = value >> (position -1);
   value = value & 1;
   return value;
   
   /*unsigned char mask = 1<<(position-1);
   uint8 bit = value&mask;
   if(bit > 0)
   {
       return 1;
   }
  else
   {
       return 0;
   }*/
  
}
