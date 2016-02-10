function bitand_demo()
    a = uint8(12);
    b = uint8(39);
    c = bitand(a,b);
    disp(c);
    d = uint8([11 10 9;8 7 16;7 5 6]);
    e = uint8([13 9 10;7 5 3;10 8 3]);
    f = bitand(d,e);
    disp(f);
    aa = uint16(8);
    bb = uint16(4);
    cc = bitand(aa,bb);
    disp(cc);
    dd = uint16([1 4 6;2 10 8;2 12 16]);
    ee = uint16([1 2 3;5 1 4;10 11 5]);
    ff = bitand(dd,ee);
    disp(ff)
    
endfunction
