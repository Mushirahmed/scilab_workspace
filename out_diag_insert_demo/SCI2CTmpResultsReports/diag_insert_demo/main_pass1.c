/*
  SCI2C: ------------------------------------------------------------------
  SCI2C: function diag_insert_demo()
  SCI2C: ------------------------------------------------------------------
*/
int main()
{
 
   /*SCI2C: ##################################################################
     SCI2C:     
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C:       a  = [1];
     SCI2C: ##################################################################*/
   a = d0OpEquald0(1);
 
   /*SCI2C: ##################################################################
     SCI2C:       ans_a = diag(a,-4);
     SCI2C: ##################################################################*/
   d0d0diagd2(a,-4,ans_a);
 
   /*SCI2C: ##################################################################
     SCI2C:       disp(ans_a);
     SCI2C: ##################################################################*/
   ans1 = d2dispd0(ans_a,  __ans_aSize);
 
   /*SCI2C: ##################################################################
     SCI2C:    /////////////For R == 1 ////////////
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("========== (For R == 1) ==========");
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    a = [1 2 3 4];
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 0th position without parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    a_no0 = diag(a);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(a_no0);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 0th position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    a_0 = diag(a,0);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(a_0);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 1st position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    a_1 = diag(a,2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(a_1);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 2nd position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    a_2 = diag(a,2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(a_2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at -1st position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    a_neg1 = diag(a,-1);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(a_neg1);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at -2nd position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    a_neg2 = diag(a,-2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(a_neg2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //  /////////////////////////////////////////////// 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //  
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //  
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //  /////////////For C == 1 ////////////
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("========(For C ==1)================");
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    b = [1; 2; 3; 4];
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 0th position without parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    b_no0 = diag(b);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(b_no0);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 0th position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    b_0 = diag(b,0);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(b_0);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 1st position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    b_1 = diag(b,1);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(b_1);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at 2nd position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    b_2 = diag(b,2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(b_2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at -1st position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    b_neg1 = diag(b,-1);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(b_neg1);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp("Insert at -2nd position with parameter")
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    b_neg2 = diag(b,-2);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: //    disp(b_neg2);
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
 
   /*SCI2C: ##################################################################
     SCI2C: 
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
