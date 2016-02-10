function dotbackslashdemo()
     b = [4,10,9;10,20,15];
    bb = [1,2,3;5,2,5];
    a = uint8([16,10,8;4,5,2]);
    aa = uint8([12,20,28;2,4,6]);
    c = uint16([12,6,10;6,2,5]);
    cc = uint16([10,24,6;2,12,3]);
    d = int8([-12,-10,9;-20,-30,-16]);
    dd = int8([10,-6,-12;18,-2,-26]);
    e = int16([12,16,20;4,18,20]);
    ee = int16([18,20,10;4,6,8]);
    ans_b = b.\bb;
    ans_a = a.\aa;
    ans_c = c.\cc;
    ans_d = d.\dd;
    ans_e = e.\ee;
    disp(ans_b);
    disp(ans_a);
    disp(ans_c);
    disp(ans_d);
    disp(ans_e);
endfunction
