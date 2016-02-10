function diag_extract_demo()

    //////////////////// ROW IS GREATER THAN COLUMN (R > C) //////////////////////////////////

    a = [0 4 8 ; 1 5 9;2 6 10;3 7 11 ];   // 4 x 3 matrix
    a = [0 5 10 ;1 6 11; 2 7 12; 3 8 13; 4 9 14];  // 5 x 3 matrix
    a = [0 5 10 15;1 6 11 16;2 7 12 17;3 8 13 18;4 9 14 19]; // 5 x 4 matrix
    
    disp(" Row > Column Condition");
    c = uint8([0 6 12 18; 1 7 13 19; 2 8 14 20; 3 9 15 21; 4 10 16 22;5 11 17 23]);   6 x 4 matrix
    disp(c);
    disp('=====0th position=========');
    b_0 = diag(c,0);
    disp(b_0)
    disp('=====1th position=========');
    b_1 = diag(c,1);
    disp(b_1)
    disp('=====2nd position =========')
    b_2 = diag(c,2);
    disp(b_2);
    disp('=====3rd position =========')
    b_3 = diag(c,3);
    disp(b_3);
   disp('===== -1th position=========');
    b_neg1 = diag(c,-1);
    disp(b_neg1)
    disp('===== -2nd position =========')
    b_neg2 = diag(c,-2);
    disp(b_neg2);
    disp('===== -3rd position =========')
    b_neg3 = diag(c,-3);
    disp(b_neg3);
    disp('===== -4th position =========')
    b_neg4 = diag(c,-4);
    disp(b_neg4);
    disp('===== -5th position =========')
    b_neg5 = diag(c,-5);
    disp(b_neg5);


    /////////////////////////////////////////////////////////////////////////////////////////


    ///////////////////  ROW IS LESS THAN COLUMN (R< C) /////////////////////////////

     a = [0 3 6 9; 1 4 7 10;2 5 8 11];    // 3 x 4 matrix
    a = [0 3 6 9 12; 1 4 7 10 13;2 5 8 11 14]; // 3 x 5 matrix
    a = [0 4 8 12 16 20;1 5 9 13 17 21; 2 6 10 14 18 22;3 7 11 15 19 23];   4 x 6 matrix
    disp(" Row < Column Condition")    
    disp(a);
    disp('=====0th position=========');
    d_0 = diag(a,0);
    disp(d_0)
    disp('=====1th position=========');
    d_1 = diag(a,1);
    disp(d_1)
    disp('=====2nd position =========')
    d_2 = diag(a,2);
    disp(d_2);
    disp('=====3rd position =========')
    d_3 = diag(a,3);
    disp(d_3);
    disp('=====4th position =========')
    d_4 = diag(a,4);
    disp(d_4);
    disp('=====5th position =========')
    d_5 = diag(a,5);
    disp(d_5);
    disp('===== -1th position=========');
    d_neg1 = diag(a,-1);
    disp(d_neg1)
    disp('===== -2nd position =========')
    d_neg2 = diag(a,-2);
    disp(d_neg2);
    disp('===== -3rd position =========')
    d_neg3 = diag(a,-3);
    disp(d_neg3);







endfunction
