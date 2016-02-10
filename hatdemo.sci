function hatdemo()
    b = [2,1,2;1,2,2;3,1,2];
    bb = [1,2,3;2,2,2;4,5,3];
    a = uint8([2,10,8;4,5,6;1,2,3]);
    aa = uint8([2,5,6;2,8,6;1,2,4]);
    c = uint16([1,2,3;1,4,5;6,7,8]);
    cc = uint16([3,4,5;6,2,1;6,7,9]);
    d = int8([1,-2,4;-8,-1,8;8,9,10]);
    dd = int16([-2,-1,-3;2,-1,-2;3,4,2]);
    ans_b = b^2;
    ans_bb = bb^2;
    ans_a = a^3;
    ans_aa = aa^2;
    ans_c = c^2;
    ans_cc = cc^2;
    ans_d = d^2;
    ans_dd = d^3;
    disp(ans_b);
    disp(ans_bb);
    disp(ans_a);
    disp(ans_aa);
    disp(ans_c);
    disp(ans_cc);
    disp(ans_d);
    disp(ans_dd);
endfunction
