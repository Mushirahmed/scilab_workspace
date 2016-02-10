function ledblink_ex1()
    cmd_digital_out(1,9,1);
    sleep(3000);
    cmd_digital_out(1,9,0);
    cmd_digital_out(1,10,1);
    sleep(3000);
    cmd_digital_out(1,10,0);
    cmd_digital_out(1,11,1);
    sleep(3000);
    cmd_digital_out(1,11,0);
endfunction
