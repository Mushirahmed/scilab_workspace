function proddemo()
    a = [1, 2, 3;1,2,3];
    b = uint8([4, 10, 9;1,1,2]);
    c = uint16([1,1,1;1,2,3]);
    d = int8([-2,2,1;1,-1,1]);
    e = int16([2,1,1;1,-2,2]);
    f = int8([1,-2,-3;1,-1,1]);
    
    //d1 = uint8(1)
    //d2 = uint8(8); // u80 u80 -> u80
    //dd1 = uint8([8,9,10;1,2,3]); 
    //dd2 = uint8(9); // u82 u80 -> u82
    //ddd1 = uint8(35);
    //ddd2 = uint8([11,10,20;30,40,50]); // u80 u82 -> u82
    //dddd1 = uint8([1,9,11;12,10,40]); 
    //dddd2 = uint8([20,10,1;4,7,8]);// u82 u82 -> u82
    
    x = prod(a);
    y = prod(b);
    z = prod(c);
    w = prod(d);
    t = prod(e);
    u = prod(f);
    //prod_d1d2 = prod(d1,d2);
    //prod_dd1dd2 = prod(dd1,dd2);
    //prod_ddd1ddd2 = prod(ddd1,ddd2);
    //prod_dddd1dddd2 = prod(dddd1,dddd2);
    disp(x);
    disp(y);
    disp(z);
    disp(w);
    disp(t);
    disp(u);
    //disp(prod_d1d2);
    //disp(prod_dd1dd2);
    //disp(prod_ddd1ddd2);
    //disp(prod_dddd1dddd2);
endfunction
