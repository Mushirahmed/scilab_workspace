function ledblink_pshbtn()
for i=1:1000
    p=cmd_digital_in(1,9);
    if p==0
        cmd_digital_out(1,11,0);
    else
        cmd_digital_out(1,11,1);
    end
end
endfunction
