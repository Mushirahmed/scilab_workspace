function  servo_demo1()
    cmd_servo_attach(1,1);
    cmd_servo_move(1,1,90);
    sleep(1000);
    cmd_servo_move(1,1,45);
    sleep(1000);
    cmd_servo_detach(1,1);
endfunction
