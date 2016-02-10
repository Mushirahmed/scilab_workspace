function ledblink_brightness()
for x=1:10 //Run for 10 iterations
    p = cmd_analog_in(1,2);
    if(p>0 & p<320) then   //threshold one
        cmd_analog_out(1,9,p);
       
    elseif p>=320 & p<=900   //threshold two
        cmd_analog_out(1,10,p);
    elseif p>900 & p<=1023   //threshold three
        cmd_analog_out(1,11,p);
       
    end
    
end
endfunction
