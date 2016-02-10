function potensio_demo()
    for x=1:10
        p = cmd_analog_in(1,2);
        if(p>uint16(0) & p<uint16(320))
            cmd_digital_out(1,11,1);
            sleep(1000);
            cmd_digital_out(1,11,0);
        elseif p>=uint16(320) & p<=uint16(900)
            cmd_digital_out(1,10,1);
            sleep(1000);
            cmd_digital_out(1,10,0);
        elseif p>uint16(900) & p<=uint16(1023)
            cmd_digital_out(1,9,1);
            sleep(1000);
            cmd_digital_out(1,9,0);
        end
    end
endfunction
