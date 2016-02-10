function ledblink_demo3()
    cmd_digital_out(1,9,1);       //This turns ON the blue LED
    cmd_digital_out(1,11,1);      //This turns ON the red LED
    sleep(3000);                  //Wait for 3 seconds
    cmd_digital_out(1,9,0);       //This turns OFF the blue LED
    sleep(3000);                  //Wait for 3 seconds
    cmd_digital_out(1,11,0);      //This turns OFF the res LED
endfunction
