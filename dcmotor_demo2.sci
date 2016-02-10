function dcmotor_demo2()
    cmd_dcmotor_setup(1,3,1,9,10);     //Setup DC motor of type 3 (L293D) ,motor 1, pin no. 9 and pin np. 10
    for x = 1:4
        cmd_dcmotor_run(1,1,100);     //Motor 1 runs at PWM 100 
        sleep(3000);                  //wait for 3 seconds
        cmd_dcmotor_run(1,1,0);     //Halt the motor
        sleep(2000);                //wait for 2 seconds
        cmd_dcmotor_run(1,1,-100);   //Run it at PWM 100 in reverse direction
    end
endfunction
