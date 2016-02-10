function sumdemo()

a = uint8([12,1,5;8,9,10]);
aa = uint8([1,1,20;2,2,9]);
//b = sum(a);
//bb = sum(a);
//c = sum(a,'r');
//cc = sum(aa,'r');
d = sum(a,'c');
dd = sum(aa,'c');
//disp(b);
//disp(bb);
//disp(c);
//disp(cc);
disp(d);
disp(dd);

endfunction
