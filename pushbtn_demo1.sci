function pushbtn_demo1()
    for i = 1:10000
        p = cmd_digital_in(1,12);
        if p==0
            cmd_digital_out(1,9,0);
        else
            cmd_digital_out(1,9,1);
        end
    end
endfunction
