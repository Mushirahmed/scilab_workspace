/*
** -------------------------------------
** --- Global Variables Declaration. ---
** -------------------------------------
*/
 
 
/*
** -----------------------------------------
** --- End Global Variables Declaration. ---
** -----------------------------------------
*/
 
/*
  SCI2C: ------------------------------------------------------------------
  SCI2C: function diag_extract_demo()
  SCI2C: ------------------------------------------------------------------
*/
int main()
{
/*
** -----------------------------
** --- Variable Declaration. ---
** -----------------------------
*/
 
   char __temp1[1*24] = {" Row > Column Condition"};
   int ____temp1Size[2] = {1,24};
 
   double ans1;
 
   double __temp2[1 * 2];
   int ____temp2Size[2] = {1, 2};;
 
   double __temp3[1 * 3];
   int ____temp3Size[2] = {1, 3};;
 
   double __temp4[1 * 4];
   int ____temp4Size[2] = {1, 4};;
 
   double __temp5[1 * 2];
   int ____temp5Size[2] = {1, 2};;
 
   double __temp6[1 * 3];
   int ____temp6Size[2] = {1, 3};;
 
   double __temp7[1 * 4];
   int ____temp7Size[2] = {1, 4};;
 
   double __temp8[2 * 4];
   int ____temp8Size[2] = {2, 4};;
 
   double __temp9[1 * 2];
   int ____temp9Size[2] = {1, 2};;
 
   double __temp10[1 * 3];
   int ____temp10Size[2] = {1, 3};;
 
   double __temp11[1 * 4];
   int ____temp11Size[2] = {1, 4};;
 
   double __temp12[3 * 4];
   int ____temp12Size[2] = {3, 4};;
 
   double __temp13[1 * 2];
   int ____temp13Size[2] = {1, 2};;
 
   double __temp14[1 * 3];
   int ____temp14Size[2] = {1, 3};;
 
   double __temp15[1 * 4];
   int ____temp15Size[2] = {1, 4};;
 
   double __temp16[4 * 4];
   int ____temp16Size[2] = {4, 4};;
 
   double __temp17[1 * 2];
   int ____temp17Size[2] = {1, 2};;
 
   double __temp18[1 * 3];
   int ____temp18Size[2] = {1, 3};;
 
   double __temp19[1 * 4];
   int ____temp19Size[2] = {1, 4};;
 
   double __temp20[5 * 4];
   int ____temp20Size[2] = {5, 4};;
 
   double __temp21[1 * 2];
   int ____temp21Size[2] = {1, 2};;
 
   double __temp22[1 * 3];
   int ____temp22Size[2] = {1, 3};;
 
   double __temp23[1 * 4];
   int ____temp23Size[2] = {1, 4};;
 
   double __temp24[6 * 4];
   int ____temp24Size[2] = {6, 4};;
 
   uint8 c[6 * 4];
   int __cSize[2] = {6, 4};;
 
   double ans2;
 
   char __temp25[1*27] = {"=====0th position========="};
   int ____temp25Size[2] = {1,27};
 
   double ans3;
 
   uint8 b_0[4 * 1];
   int __b_0Size[2] = {4, 1};;
 
   double ans4;
 
   char __temp26[1*27] = {"=====1th position========="};
   int ____temp26Size[2] = {1,27};
 
   double ans5;
 
   uint8 b_1[3 * 1];
   int __b_1Size[2] = {3, 1};;
 
   double ans6;
 
   char __temp27[1*28] = {"=====2nd position ========="};
   int ____temp27Size[2] = {1,28};
 
   double ans7;
 
   uint8 b_2[2 * 1];
   int __b_2Size[2] = {2, 1};;
 
   double ans8;
 
   char __temp28[1*28] = {"=====3rd position ========="};
   int ____temp28Size[2] = {1,28};
 
   double ans9;
 
   uint8 b_3;
 
   double ans10;
 
   char __temp29[1*29] = {"===== -1th position========="};
   int ____temp29Size[2] = {1,29};
 
   double ans11;
 
   uint8 b_neg1[4 * 1];
   int __b_neg1Size[2] = {4, 1};;
 
   double ans12;
 
   char __temp30[1*30] = {"===== -2nd position ========="};
   int ____temp30Size[2] = {1,30};
 
   double ans13;
 
   uint8 b_neg2[4 * 1];
   int __b_neg2Size[2] = {4, 1};;
 
   double ans14;
 
   char __temp31[1*30] = {"===== -3rd position ========="};
   int ____temp31Size[2] = {1,30};
 
   double ans15;
 
   uint8 b_neg3[3 * 1];
   int __b_neg3Size[2] = {3, 1};;
 
   double ans16;
 
   char __temp32[1*30] = {"===== -4th position ========="};
   int ____temp32Size[2] = {1,30};
 
   double ans17;
 
   uint8 b_neg4[2 * 1];
   int __b_neg4Size[2] = {2, 1};;
 
   double ans18;
 
   char __temp33[1*30] = {"===== -5th position ========="};
   int ____temp33Size[2] = {1,30};
 
   double ans19;
 
   uint8 b_neg5;
 
   double ans20;
 
   double __temp34[1 * 2];
   int ____temp34Size[2] = {1, 2};;
 
   double __temp35[1 * 3];
   int ____temp35Size[2] = {1, 3};;
 
   double __temp36[1 * 4];
   int ____temp36Size[2] = {1, 4};;
 
   double __temp37[1 * 5];
   int ____temp37Size[2] = {1, 5};;
 
   double __temp38[1 * 6];
   int ____temp38Size[2] = {1, 6};;
 
   double __temp39[1 * 2];
   int ____temp39Size[2] = {1, 2};;
 
   double __temp40[1 * 3];
   int ____temp40Size[2] = {1, 3};;
 
   double __temp41[1 * 4];
   int ____temp41Size[2] = {1, 4};;
 
   double __temp42[1 * 5];
   int ____temp42Size[2] = {1, 5};;
 
   double __temp43[1 * 6];
   int ____temp43Size[2] = {1, 6};;
 
   double __temp44[2 * 6];
   int ____temp44Size[2] = {2, 6};;
 
   double __temp45[1 * 2];
   int ____temp45Size[2] = {1, 2};;
 
   double __temp46[1 * 3];
   int ____temp46Size[2] = {1, 3};;
 
   double __temp47[1 * 4];
   int ____temp47Size[2] = {1, 4};;
 
   double __temp48[1 * 5];
   int ____temp48Size[2] = {1, 5};;
 
   double __temp49[1 * 6];
   int ____temp49Size[2] = {1, 6};;
 
   double __temp50[3 * 6];
   int ____temp50Size[2] = {3, 6};;
 
   double __temp51[1 * 2];
   int ____temp51Size[2] = {1, 2};;
 
   double __temp52[1 * 3];
   int ____temp52Size[2] = {1, 3};;
 
   double __temp53[1 * 4];
   int ____temp53Size[2] = {1, 4};;
 
   double __temp54[1 * 5];
   int ____temp54Size[2] = {1, 5};;
 
   double __temp55[1 * 6];
   int ____temp55Size[2] = {1, 6};;
 
   double a[4 * 6];
   int __aSize[2] = {4, 6};;
 
   char __temp56[1*24] = {" Row < Column Condition"};
   int ____temp56Size[2] = {1,24};
 
   double ans21;
 
   double ans22;
 
   char __temp57[1*27] = {"=====0th position========="};
   int ____temp57Size[2] = {1,27};
 
   double ans23;
 
   double d_0[4 * 1];
   int __d_0Size[2] = {4, 1};;
 
   double ans24;
 
   char __temp58[1*27] = {"=====1th position========="};
   int ____temp58Size[2] = {1,27};
 
   double ans25;
 
   double d_1[4 * 1];
   int __d_1Size[2] = {4, 1};;
 
   double ans26;
 
   char __temp59[1*28] = {"=====2nd position ========="};
   int ____temp59Size[2] = {1,28};
 
   double ans27;
 
   double d_2[4 * 1];
   int __d_2Size[2] = {4, 1};;
 
   double ans28;
 
   char __temp60[1*28] = {"=====3rd position ========="};
   int ____temp60Size[2] = {1,28};
 
   double ans29;
 
   double d_3[3 * 1];
   int __d_3Size[2] = {3, 1};;
 
   double ans30;
 
   char __temp61[1*28] = {"=====4th position ========="};
   int ____temp61Size[2] = {1,28};
 
   double ans31;
 
   double d_4[2 * 1];
   int __d_4Size[2] = {2, 1};;
 
   double ans32;
 
   char __temp62[1*28] = {"=====5th position ========="};
   int ____temp62Size[2] = {1,28};
 
   double ans33;
 
   double d_5;
 
   double ans34;
 
   char __temp63[1*29] = {"===== -1th position========="};
   int ____temp63Size[2] = {1,29};
 
   double ans35;
 
   double d_neg1[3 * 1];
   int __d_neg1Size[2] = {3, 1};;
 
   double ans36;
 
   char __temp64[1*30] = {"===== -2nd position ========="};
   int ____temp64Size[2] = {1,30};
 
   double ans37;
 
   double d_neg2[2 * 1];
   int __d_neg2Size[2] = {2, 1};;
 
   double ans38;
 
   char __temp65[1*30] = {"===== -3rd position ========="};
   int ____temp65Size[2] = {1,30};
 
   double ans39;
 
   double d_neg3;
 
   double ans40;
 
 
 
 
/*
** ---------------------------------
** --- End Variable Declaration. ---
** ---------------------------------
*/
/*
** ---------------
** --- C code. ---
** ---------------
*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     ////////////////////// ROW IS GREATER THAN COLUMN (R > C) //////////////////////////////////
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     //a = [0 4 8 ; 1 5 9;2 6 10;3 7 11 ];   // 4 x 3 matrix
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     //a = [0 5 10 ;1 6 11; 2 7 12; 3 8 13; 4 9 14];  // 5 x 3 matrix
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     //a = [0 5 10 15;1 6 11 16;2 7 12 17;3 8 13 18;4 9 14 19]; // 5 x 4 matrix
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(" Row > Column Condition");
     SCI2C: ##################################################################*/
   ans1 = g2dispd0(__temp1,  ____temp1Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     c = uint8([0 6 12 18; 1 7 13 19; 2 8 14 20; 3 9 15 21; 4 10 16 22;5 11 17 23]);  // 6 x 4 matrix
     SCI2C: ##################################################################*/
   d0d0OpRcd2(0,6,__temp2);
   d2d0OpRcd2(__temp2,  ____temp2Size,12,__temp3);
   d2d0OpRcd2(__temp3,  ____temp3Size,18,__temp4);
   d0d0OpRcd2(1,7,__temp5);
   d2d0OpRcd2(__temp5,  ____temp5Size,13,__temp6);
   d2d0OpRcd2(__temp6,  ____temp6Size,19,__temp7);
   d2d2OpCcd2(__temp4,  ____temp4Size,__temp7,  ____temp7Size,__temp8);
   d0d0OpRcd2(2,8,__temp9);
   d2d0OpRcd2(__temp9,  ____temp9Size,14,__temp10);
   d2d0OpRcd2(__temp10,  ____temp10Size,20,__temp11);
   d2d2OpCcd2(__temp8,  ____temp8Size,__temp11,  ____temp11Size,__temp12);
   d0d0OpRcd2(3,9,__temp13);
   d2d0OpRcd2(__temp13,  ____temp13Size,15,__temp14);
   d2d0OpRcd2(__temp14,  ____temp14Size,21,__temp15);
   d2d2OpCcd2(__temp12,  ____temp12Size,__temp15,  ____temp15Size,__temp16);
   d0d0OpRcd2(4,10,__temp17);
   d2d0OpRcd2(__temp17,  ____temp17Size,16,__temp18);
   d2d0OpRcd2(__temp18,  ____temp18Size,22,__temp19);
   d2d2OpCcd2(__temp16,  ____temp16Size,__temp19,  ____temp19Size,__temp20);
   d0d0OpRcd2(5,11,__temp21);
   d2d0OpRcd2(__temp21,  ____temp21Size,17,__temp22);
   d2d0OpRcd2(__temp22,  ____temp22Size,23,__temp23);
   d2d2OpCcd2(__temp20,  ____temp20Size,__temp23,  ____temp23Size,__temp24);
   d2uint8u82(__temp24,  ____temp24Size,c);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(c);
     SCI2C: ##################################################################*/
   ans2 = u82dispd0(c,  __cSize);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====0th position=========');
     SCI2C: ##################################################################*/
   ans3 = g2dispd0(__temp25,  ____temp25Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_0 = diag(c,0);
     SCI2C: ##################################################################*/
   u82d0diagu82(c,  __cSize,0,b_0);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_0)
     SCI2C: ##################################################################*/
   ans4 = u82dispd0(b_0,  __b_0Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====1th position=========');
     SCI2C: ##################################################################*/
   ans5 = g2dispd0(__temp26,  ____temp26Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_1 = diag(c,1);
     SCI2C: ##################################################################*/
   u82d0diagu82(c,  __cSize,1,b_1);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_1)
     SCI2C: ##################################################################*/
   ans6 = u82dispd0(b_1,  __b_1Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====2nd position =========')
     SCI2C: ##################################################################*/
   ans7 = g2dispd0(__temp27,  ____temp27Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_2 = diag(c,2);
     SCI2C: ##################################################################*/
   u82d0diagu82(c,  __cSize,2,b_2);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_2);
     SCI2C: ##################################################################*/
   ans8 = u82dispd0(b_2,  __b_2Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====3rd position =========')
     SCI2C: ##################################################################*/
   ans9 = g2dispd0(__temp28,  ____temp28Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_3 = diag(c,3);
     SCI2C: ##################################################################*/
   b_3 = u82d0diagu80(c,  __cSize,3);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_3);
     SCI2C: ##################################################################*/
   ans10 = u80dispd0(b_3);
 
   /*SCI2C: ##################################################################
     SCI2C:    disp('===== -1th position=========');
     SCI2C: ##################################################################*/
   ans11 = g2dispd0(__temp29,  ____temp29Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_neg1 = diag(c,-1);
     SCI2C: ##################################################################*/
   u82d0diagu82(c,  __cSize,-1,b_neg1);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_neg1)
     SCI2C: ##################################################################*/
   ans12 = u82dispd0(b_neg1,  __b_neg1Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('===== -2nd position =========')
     SCI2C: ##################################################################*/
   ans13 = g2dispd0(__temp30,  ____temp30Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_neg2 = diag(c,-2);
     SCI2C: ##################################################################*/
   u82d0diagu82(c,  __cSize,-2,b_neg2);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_neg2);
     SCI2C: ##################################################################*/
   ans14 = u82dispd0(b_neg2,  __b_neg2Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('===== -3rd position =========')
     SCI2C: ##################################################################*/
   ans15 = g2dispd0(__temp31,  ____temp31Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_neg3 = diag(c,-3);
     SCI2C: ##################################################################*/
   u82d0diagu82(c,  __cSize,-3,b_neg3);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_neg3);
     SCI2C: ##################################################################*/
   ans16 = u82dispd0(b_neg3,  __b_neg3Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('===== -4th position =========')
     SCI2C: ##################################################################*/
   ans17 = g2dispd0(__temp32,  ____temp32Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_neg4 = diag(c,-4);
     SCI2C: ##################################################################*/
   u82d0diagu82(c,  __cSize,-4,b_neg4);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_neg4);
     SCI2C: ##################################################################*/
   ans18 = u82dispd0(b_neg4,  __b_neg4Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('===== -5th position =========')
     SCI2C: ##################################################################*/
   ans19 = g2dispd0(__temp33,  ____temp33Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     b_neg5 = diag(c,-5);
     SCI2C: ##################################################################*/
   b_neg5 = u82d0diagu80(c,  __cSize,-5);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(b_neg5);
     SCI2C: ##################################################################*/
   ans20 = u80dispd0(b_neg5);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     ///////////////////////////////////////////////////////////////////////////////////////////
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     /////////////////////  ROW IS LESS THAN COLUMN (R< C) /////////////////////////////
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     // a = [0 3 6 9; 1 4 7 10;2 5 8 11];    // 3 x 4 matrix
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     //a = [0 3 6 9 12; 1 4 7 10 13;2 5 8 11 14]; // 3 x 5 matrix
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:     a = [0 4 8 12 16 20;1 5 9 13 17 21; 2 6 10 14 18 22;3 7 11 15 19 23];  // 4 x 6 matrix
     SCI2C: ##################################################################*/
   d0d0OpRcd2(0,4,__temp34);
   d2d0OpRcd2(__temp34,  ____temp34Size,8,__temp35);
   d2d0OpRcd2(__temp35,  ____temp35Size,12,__temp36);
   d2d0OpRcd2(__temp36,  ____temp36Size,16,__temp37);
   d2d0OpRcd2(__temp37,  ____temp37Size,20,__temp38);
   d0d0OpRcd2(1,5,__temp39);
   d2d0OpRcd2(__temp39,  ____temp39Size,9,__temp40);
   d2d0OpRcd2(__temp40,  ____temp40Size,13,__temp41);
   d2d0OpRcd2(__temp41,  ____temp41Size,17,__temp42);
   d2d0OpRcd2(__temp42,  ____temp42Size,21,__temp43);
   d2d2OpCcd2(__temp38,  ____temp38Size,__temp43,  ____temp43Size,__temp44);
   d0d0OpRcd2(2,6,__temp45);
   d2d0OpRcd2(__temp45,  ____temp45Size,10,__temp46);
   d2d0OpRcd2(__temp46,  ____temp46Size,14,__temp47);
   d2d0OpRcd2(__temp47,  ____temp47Size,18,__temp48);
   d2d0OpRcd2(__temp48,  ____temp48Size,22,__temp49);
   d2d2OpCcd2(__temp44,  ____temp44Size,__temp49,  ____temp49Size,__temp50);
   d0d0OpRcd2(3,7,__temp51);
   d2d0OpRcd2(__temp51,  ____temp51Size,11,__temp52);
   d2d0OpRcd2(__temp52,  ____temp52Size,15,__temp53);
   d2d0OpRcd2(__temp53,  ____temp53Size,19,__temp54);
   d2d0OpRcd2(__temp54,  ____temp54Size,23,__temp55);
   d2d2OpCcd2(__temp50,  ____temp50Size,__temp55,  ____temp55Size,a);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(" Row < Column Condition")    
     SCI2C: ##################################################################*/
   ans21 = g2dispd0(__temp56,  ____temp56Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(a);
     SCI2C: ##################################################################*/
   ans22 = d2dispd0(a,  __aSize);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====0th position=========');
     SCI2C: ##################################################################*/
   ans23 = g2dispd0(__temp57,  ____temp57Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_0 = diag(a,0);
     SCI2C: ##################################################################*/
   d2d0diagd2(a,  __aSize,0,d_0);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_0)
     SCI2C: ##################################################################*/
   ans24 = d2dispd0(d_0,  __d_0Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====1th position=========');
     SCI2C: ##################################################################*/
   ans25 = g2dispd0(__temp58,  ____temp58Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_1 = diag(a,1);
     SCI2C: ##################################################################*/
   d2d0diagd2(a,  __aSize,1,d_1);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_1)
     SCI2C: ##################################################################*/
   ans26 = d2dispd0(d_1,  __d_1Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====2nd position =========')
     SCI2C: ##################################################################*/
   ans27 = g2dispd0(__temp59,  ____temp59Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_2 = diag(a,2);
     SCI2C: ##################################################################*/
   d2d0diagd2(a,  __aSize,2,d_2);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_2);
     SCI2C: ##################################################################*/
   ans28 = d2dispd0(d_2,  __d_2Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====3rd position =========')
     SCI2C: ##################################################################*/
   ans29 = g2dispd0(__temp60,  ____temp60Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_3 = diag(a,3);
     SCI2C: ##################################################################*/
   d2d0diagd2(a,  __aSize,3,d_3);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_3);
     SCI2C: ##################################################################*/
   ans30 = d2dispd0(d_3,  __d_3Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====4th position =========')
     SCI2C: ##################################################################*/
   ans31 = g2dispd0(__temp61,  ____temp61Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_4 = diag(a,4);
     SCI2C: ##################################################################*/
   d2d0diagd2(a,  __aSize,4,d_4);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_4);
     SCI2C: ##################################################################*/
   ans32 = d2dispd0(d_4,  __d_4Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('=====5th position =========')
     SCI2C: ##################################################################*/
   ans33 = g2dispd0(__temp62,  ____temp62Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_5 = diag(a,5);
     SCI2C: ##################################################################*/
   d_5 = d2d0diagd0(a,  __aSize,5);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_5);
     SCI2C: ##################################################################*/
   ans34 = d0dispd0(d_5);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('===== -1th position=========');
     SCI2C: ##################################################################*/
   ans35 = g2dispd0(__temp63,  ____temp63Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_neg1 = diag(a,-1);
     SCI2C: ##################################################################*/
   d2d0diagd2(a,  __aSize,-1,d_neg1);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_neg1)
     SCI2C: ##################################################################*/
   ans36 = d2dispd0(d_neg1,  __d_neg1Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('===== -2nd position =========')
     SCI2C: ##################################################################*/
   ans37 = g2dispd0(__temp64,  ____temp64Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_neg2 = diag(a,-2);
     SCI2C: ##################################################################*/
   d2d0diagd2(a,  __aSize,-2,d_neg2);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_neg2);
     SCI2C: ##################################################################*/
   ans38 = d2dispd0(d_neg2,  __d_neg2Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp('===== -3rd position =========')
     SCI2C: ##################################################################*/
   ans39 = g2dispd0(__temp65,  ____temp65Size);
 
   /*SCI2C: ##################################################################
     SCI2C:     d_neg3 = diag(a,-3);
     SCI2C: ##################################################################*/
   d_neg3 = d2d0diagd0(a,  __aSize,-3);
 
   /*SCI2C: ##################################################################
     SCI2C:     disp(d_neg3);
     SCI2C: ##################################################################*/
   ans40 = d0dispd0(d_neg3);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: endfunction
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*
   ** --------------------- 
   ** --- Free Section. --- 
   ** --------------------- 
   */
   /*
   ** ------------------------- 
   ** --- End Free Section. --- 
   ** ------------------------- 
   */
 
   return(0);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
}
 
