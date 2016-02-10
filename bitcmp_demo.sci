function bitcmp_demo()
    a = uint8(12);
    b = bitcmp(a,8);
    disp(b);
    c = uint8([12 19 6;10 11 8;7 22 4]);
    d = bitcmp(c,8);
    disp(d);
    
endfunction
