function dcmotor_demo1()
    cmd_dcmotor_setup(1,3,1,9,10);   //Setup DC motor of type 3 (L293D),motor 1 ,pin no. 9 and pin no 10
    cmd_dcmotor_run(1,1,100);     //Motor 1 runs at PWM 100
    sleep(4000);
endfunction
