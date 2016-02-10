function ledblink_potensio ()
for x=1:10 //Run for 10 iterations
    p = cmd_analog_in(1,2);
    //if(p>uint16(0) & p<uint16(320)) then   //threshold one
    //    cmd_digital_out(1,11,1);
    //    sleep(1000);
    //    cmd_digital_out(1,11,0);
    //elseif p>=uint16(320) & p<=uint16(900)   //threshold two
    //    cmd_digital_out(1,10,1)
    //    sleep(1000)
    //    cmd_digital_out(1,10,0);
    //elseif p>uint16(900) & p<=uint16(1023)   //threshold three
    //    cmd_digital_out(1,9,1);
    //    sleep(1000);
    //    cmd_digital_out(1,9,0);
    //end
    //if(p>uint16(0) & p < uint16(1023))
    //    cmd_digital_out(1,2,1);
    //    sleep(1000);
    //    cmd_digital_out(1,2,0);
    //end
    //if(p>uint16(0) & p < uint16(200)) 
    //    cmd_analog_out(1,9,p/uint16(4));
    //elseif p>=uint16(200) & p<=uint16(400)
    //    cmd_analog_out(1,10,p/uint16(4));
    //elseif p>=uint16(400) & p<=uint16(600)
    //    cmd_analog_out(1,11,p/uint16(4));
    //elseif p>=uint16(600) & p<=uint16(800)
    //    cmd_analog_out(1,12,p/uint16(4));
    //elseif p>=uint16(800) & p<=uint16(1023)
    //    cmd_analog_out(1,13,p/uint16(4));
    //end
    if(p>uint16(0) & p<uint16(1023))
        cmd_analog_out(1,3,uint8(p/uint16(4)));   // As analog_out ranges is from 0 to 255 so divide by 4 is required and analog_in range is from 0 to 1023
    end
    
end
endfunction
