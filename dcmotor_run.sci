function dcmotor_run()
for cnt = 1: 10
    cmd_dcmotor_run(1,9,100);
    cmd_dcmotor_run(1,10,0);
    sleep(3000);
    cmd_dcmotor_run(1,9,0);
    cmd_dcmotor_run(1,10,100);
    sleep(3000);
    cmd_dcmotor_run(1,9,0)
    cmd_analog_out(1,10,100);
    sleep(3000);
    cmd_dcmotor_run(1,9,100);
    cmd_dcmotor_run(1,10,0);
    sleep(2000);
    cmd_analog_out(1,9,0);
    cmd_analog_out(1,10,0);
    sleep(1000);
    
end
endfunction
