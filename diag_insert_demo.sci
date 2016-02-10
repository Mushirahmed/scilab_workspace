function diag_insert_demo()
    
      a  = [1];
      ans_a = diag(a,-4);
      disp(ans_a);
   ///////////For R == 1 ////////////
    disp("========== (For R == 1) ==========");
    a = [1 2 3 4];
    disp("Insert at 0th position without parameter")
    a_no0 = diag(a);
    disp(a_no0);
    disp("Insert at 0th position with parameter")
    a_0 = diag(a,0);
    disp(a_0);
    disp("Insert at 1st position with parameter")
    a_1 = diag(a,2);
    disp(a_1);
    disp("Insert at 2nd position with parameter")
    a_2 = diag(a,2);
    disp(a_2);
    disp("Insert at -1st position with parameter")
    a_neg1 = diag(a,-1);
    disp(a_neg1);
    disp("Insert at -2nd position with parameter")
    a_neg2 = diag(a,-2);
    disp(a_neg2);
  /////////////////////////////////////////////// 
  
  
  /////////////For C == 1 ////////////
    disp("========(For C ==1)================");
    b = [1; 2; 3; 4];
    disp("Insert at 0th position without parameter")
    b_no0 = diag(b);
    disp(b_no0);
    disp("Insert at 0th position with parameter")
    b_0 = diag(b,0);
    disp(b_0);
    disp("Insert at 1st position with parameter")
    b_1 = diag(b,1);
    disp(b_1);
    disp("Insert at 2nd position with parameter")
    b_2 = diag(b,2);
    disp(b_2);
    disp("Insert at -1st position with parameter")
    b_neg1 = diag(b,-1);
    disp(b_neg1);
    disp("Insert at -2nd position with parameter")
    b_neg2 = diag(b,-2);
    disp(b_neg2);
    
    
    






endfunction
