function magni_demo()
    a = uint8([12.52,-13.56,-14.42;-32,-11,-10;-2,-20.87,-25]);
    b = int8([-12.10,-11.15,-13;-10,-9.66,-12.89;-29.13,-33.12,-15]);
    ans_a = abs(a);
    ans_b = abs(b);
    disp(ans_a);
    disp(ans_b);
endfunction
