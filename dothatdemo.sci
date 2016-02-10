function dothatdemo()
    b = [2,1,2;1,2,2];
    bb = [1,2,3;2,2,2];
    a = uint8([2,10,8;4,5,2]);
    aa = uint8([12,20,28;2,4,6]);
    c = uint16([1,2,3;1,4,5]);
    cc = uint16([3,4,5;6,2,1]);
    d = int8([1,2,4;8,10,16]);
    dd = int16([12,-10,-8;10,-8,-6]);
    ans_b = b.^2;
    ans_bb = bb.^2;
    ans_a = a.^3;
    ans_aa = aa.^2;
    ans_c = c.^2;
    ans_cc = cc.^2;
    ans_d = d.^2;
    ans_dd = dd.^3;
    disp(ans_b);
    disp(ans_bb);
    disp(ans_a);
    disp(ans_aa);
    disp(ans_c);
    disp(ans_cc);
    disp(ans_d);
    disp(ans_dd);
endfunction
