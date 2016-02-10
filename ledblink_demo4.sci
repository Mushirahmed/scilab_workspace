function ledblink_demo4()
    for i=1:5
        cmd_digital_out(1,10,1);   //Turns ON the green LED
        sleep(2000);               //Wait for 2 seconds
        cmd_digital_out(1,10,0);   //Turns OFF the greem LED
        sleep(1000);               //Wait for 1 seconds 
        
    end
endfunction
