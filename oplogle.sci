function oplogle()
    a = uint8(5);
    b = uint8(6);
    aa = uint8(9);
    bb = uint8(9);
    c = uint8([5 6 8;10 11 17;13 30 0]);
    d = uint8([1 6 4;1 2 17;14 30 1 ]);
    cc = int8([6 -1 -3;-4 1 -2;10 -1 -16]);
    dd = int8([1 -1 -2;-10 1 -2;10 -1 -16]);
    disp(a==b);
    disp(a~=b);
    disp(a>b);
    disp(a>=b);
    disp(a<b);
    disp(a<=b);
    disp(c==d);
    disp(c~=d);
    disp(c<d);
    disp(c<=d);
    disp(c>d);
    disp(c>=d);
    disp(cc==dd);
    disp(cc~=dd);
    disp(cc<dd);
    disp(cc>dd);
    disp(cc<=dd);
    disp(cc>=dd);
endfunction
