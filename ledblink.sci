function ledblink()
for cnt = 1:10
    cmd_digital_out(1,13,1);
    sleep(1000);
    cmd_digital_out(1,9,1);
    sleep(1000);
    cmd_digital_out(1,13,0);
    sleep(1000);
    cmd_digital_out(1,9,0);
end


endfunction
