function rand_demo()

    a = rand(uint8(3),uint8(3));
    b = rand(int16(3),int16(3));
    c = rand(uint16(3),uint16(3));
    d = rand(int8(4),int8(2));
    e = rand(uint8(3));
    f = rand(uint16(5));
    g = rand(int8(7));
    h = rand(int16(10));
    disp("=============For uint8======================");
    disp(a);
    disp("===============For int16=====================");
    disp(b);
    disp("================For uint16===================");
    disp(c);
    disp("================For int8===================");
    disp(d);
    disp("================For unit8===================");
    disp(e);
    disp("================For int16===================");
    disp(f);
    disp("===============For int8===================");
    disp(g);
    disp("===============For int16====================");
    disp(h);
endfunction
