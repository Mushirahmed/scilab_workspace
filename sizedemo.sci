function sizedemo()
    a = [1,2,3;6,7,10];
    b = size(a);
    c = size(a,'r');
    d = size(a,'c');
    disp(b);
    disp(c);
    disp(d);
endfunction
