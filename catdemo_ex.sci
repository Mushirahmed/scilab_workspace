function catdemo_ex()
   a1 = uint8([1 2 3 ;4 5 3;]);
   a2 = uint8([10 11 14; 21 19 29 ]);
   y = cat(2,a1,a2);
   disp(y);
   
endfunction
