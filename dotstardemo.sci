function dotstardemo()
    b = [4,1,2;1,2,3];
    bb = [1,2,3;5,2,5];
    a = uint8([6,1,2;4,5,2]);
    aa = uint8([2,3,2;2,4,3]);
    c = int8([1,-1-,1;10,-4,3]);
    cc = int8([2,-3,4;1,-2,8]);
    d = uint16([1,2,2;3,6,2]);
    dd = uint16([2,4,1;2,5,2]);
    e = int16([2,-1,-1;2,-2,-3]);
    ee = int16([2,-1,-5;-1.-1,-2]);
    ans_b = b.*bb;
    ans_a = a.*aa;
    ans_c = c.*cc;
    ans_d = d.*dd;
    ans_e = e.*ee;
    disp(ans_b);
    disp(ans_a);
    disp(ans_c);
    disp(ans_d);
    disp(ans_e);
endfunction
