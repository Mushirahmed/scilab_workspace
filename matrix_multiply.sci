function matrix_multiply()
    a = uint16([1 1 4; 4 1 9 ; 1 2 10]);
    b = uint16([5 6 1;10 2 6;8 9 5]);
    ans_ab = a * b;
    disp(ans_ab);
endfunction
