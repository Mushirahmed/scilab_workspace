//SCI2C: DEFAULT_PRECISION= FLOAT
function mattranspose()
    a = int8([1,-2,3;4,5,6;-7,8,9]);
    b = int16([10,-11,19;1,2,-3;0,-10,18]);
    c = uint8([21,1,0;3,56,90;1,2,3]);
    d = uint16([1,2,4;10,15,20;90,12,100]);
    e = a';
    f = b';
    g = c';
    h = d';
    disp(e);
    disp(f);
    disp(g);
    disp(h); 
endfunction
