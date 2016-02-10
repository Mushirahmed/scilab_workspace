function mindemoo()
    
    aa = [1,2,3];
    aaa = ([1,2,3;10,11,90]);
    aaaa = ([12,10,11;1,2,3]) 
    //////////////////////////////////
    
    b = uint8([12,10,10]); //u80 -> u80
    bb = int8([-1,2,-10]); //i80 -> i80
    bbb = uint16([1,2,3,6]); //u160 -> u160
    bbbb = int16([-2,-10,-19,15]); //i160 -> i160
    
    ////////////////////////////////////
    
    c = uint8([1,2,3;12,10,9]); // u82 -> u80
    cc = int8([1,-3,-6;-11,-10,-2]); // i82 ->i80
    ccc = uint16([22,55,10;1,10,12]); //u162 -> u160
    cccc = int16([-10,-5,-8;-10,-1,-34]); //i82 -> i160
    
    ////////////////////////////////////
    
    //d1 = uint8(1)
    //d2 = uint8(8); // u80 u80 -> u80
    //dd1 = uint8([8,9,10;1,2,3]); 
    //dd2 = uint8(9); // u82 u80 -> u82
    //ddd1 = uint8(35);
    //ddd2 = uint8([11,10,20;30,40,50]); // u80 u82 -> u82
    //dddd1 = uint8([1,9,11;12,10,40]); 
    //dddd2 = uint8([20,10,1;4,7,8]);// u82 u82 -> u82
    
    ///////////////////////////////////
    
    //e1 = int8(-8); 
    //e2 = int8(-6);//i80 i80 -> i80
    //ee1 = int8([-11,-10,14;-1,-2,10]);
    //ee2 = int8(-9); // i82 i80 -> i82
    //eee1 = int8(-11);
    //eee2 = int8([23,-10,-22;-1,-11,-71]); // i80 i82 -> i82
    //eeee1 = int8([12,22,-30;1,-5,-6]);
    //eeee2 = int8([-5,10,-6;-11,10,-9]); //i82 i82 -> i82
    
    ///////////////////////////////////////
    
    //f1 = int16(-11);
    //f2 = int16(-2); // i160 i160 -> i160
    //ff1 = int16([-11,-22,-10;1,2,-9]);
    //ff2 = int16(-2); // i162 i160 -> i62
    //fff1 = int16(-8);
    //fff2 = int16([1,-9,-10;12,-17,-10]); // i160 i162 -> i162
    //ffff1 = int16([1,-22,-40;1,-9,-21])
    //ffff2 = int16([-10,-11,-22;-33,-20,-11]); // i162 i162 -> i162
    
    
    min_aa = min(aa);
    min_aaa = min(aaa);
    min_aaaa = min(aaaa);
    min_b = min(b);
    min_bb = min(bb);
    min_bbb = min(bbb);
    min_bbbb = min(bbbb);
    min_c = min(c);
    min_cc = min(cc);
    min_ccc = min(ccc);
    min_cccc = min(cccc);
    //min_d = min(d1,d2);
    //min_dd = min(dd1,dd2);
    ///min_ddd = min(ddd1,ddd2);
    //min_dddd = min(dddd1,dddd2);
    //min_e = min(e1,e2);
    //min_ee = min(ee1,ee2);
    //min_eee = min(eee1,eee2);
    //min_eeee = min(eeee1,eeee2);
    //min_f = min(f1,f2);
    //min_ff = min(ff1,ff2);
    //min_fff = min(fff1,fff2);
    //min_ffff = min(ffff1,ffff2);
    
    disp(min_aa);
    disp(min_aaa);
    disp(min_aaaa);
    disp(min_b);    
    disp(min_bb);    
    disp(min_bbb);
    disp(min_bbbb);
    disp(min_c);    
    disp(min_cc);    
    disp(min_ccc);
    disp(min_cccc);
    disp(min_d);
    //disp(min_dd);
    //disp(min_ddd);
    //disp(min_dddd);
    //disp(min_e);
    //disp(min_ee);
    //disp(min_eee);
    //disp(min_eeee);
    //disp(min_f);
    //disp(min_ff);
    //disp(min_fff);
    //disp(min_ffff);
endfunction
