function maxdemo()

/////////////////////////// d2==>d0 /////////////////////////////////////

//     aaa = ([1,2,3;10,11,90]);   //  d2->d0                         //

//////////////////////////////////////////////////// //////////////////


/////////////////////////////d2==>d0//////////////////////////////////////

//    aaaa = ([12,10,11;1,2,3])                                        //

////////////////////////////////////////////////////////////////////////

//////////////////////////////////u82==>u80/////////////////////////////////////////////

//    b = uint8([12,10,10]); //u82-> u80                                             //

//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////i82==>i80///////////////////////////////////////////////

//     bb = int8([-1,2,-10]); //i82 -> i80                                             //

////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////u162==>u160/////////////////////////////////////////////

//    bbb = uint16([1,2,3]); //u162 -> u160                                            //

////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////i162==>i160////////////////////////////////////////////

//   bbbb = int16([-2,-10,-19]); //i162 -> i160                                        //

////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////u82==>u80////////////////////////////////////////////////////
    
//    c = uint8([1,2,3;12,10,9]); // u82 -> u80                                       //

///////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////i82==>i80///////////////////////////////////////////

//    cc = int8([1,-3,-6;-11,-10,-2]); // i82 ->i80                                 //

/////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////u162==>u160////////////////////////////////////////////

//    ccc = uint16([22,55,10;1,10,12]); //u162 -> u160                             //

////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////i62==>i160/////////////////////////////////////////////
     
//   cccc = int16([-10,-5,-8;-10,-1,-34]); //i62 -> i160                            //

/////////////////////////////////////////////////////////////////////////////////////



////////////////////////////u80 u80 ==>u80////////////////////////////////////////////

//    d1 = uint8(1)                                                                //
//    d2 = uint8(8); // u80 u80 -> u80                                            //

//////////////////////////////////////////////////////////////////////////////////



///////////////////////////////u82 u80 ==> u82///////////////////////////////////////

//   dd1 = uint8([8,2,10;5,4,7]);   //                                            //
//   dd2 = uint8(3); // u82 u80 -> u82  //                                       //
//   dd2 = d0uint8u80(9);                                                       //

////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////u80 u82 ==>u82///////////////////////////////////

//    ddd1 = uint8(6);                                                         //

//    ddd2 = uint8([8,5,10;16,11,3]); // u80 u82 -> u82                       //

///////////////////////////////////////////////////////////////////////////////



////////////////////////////////////u82 u82 ==>u82////////////////////////////////
   
//    dddd1 = uint8([1,9,11;12,10,40]);                                        //
//    dddd2 = uint8([20,10,1;26,7,8]);// u82 u82 -> u82                       //

///////////////////////////////////////////////////////////////////////////////






////////////////////////////////i80 i80 ==>i80///////////////////////////////////
    
//     e1 = int8(-8);                                                            //
//     e2 = int8(-6);//i80 i80 -> i80                                            //
     
////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////i82 i80 ==>i82 ////////////////////////////////

//    ee1 = int8([-11,-10,14;-1,-2,10]);                                       //
//    ee2 = int8(-9); // i82 i80 -> i82                                       //
               
////////////////////////////////////////////////////////////////////////////



///////////////////////////i80 i82 ==> i82//////////////////////////////////////
    
//    eee1 = int8(-11);     //                                                //
//    eee2 = int8([1,-1,-2;-1,-12,-22]); // i80 i82 -> i82                   //

/////////////////////////////////////////////////////////////////////////////



/////////////////////////////i82 i82 ==>182/////////////////////////////////////

//    eeee1 = int8([12,22,-30;1,-5,-6]);                                       //
//    eeee2 = int8([-5,10,-6;-11,10,-9]); //i82 i82 -> i82                    //

/////////////////////////////////////////////////////////////////////////////
   
   

////////////////////////////i60 i60 ==>i160/////////////////////////////////////
    
//    f1 = int16(-11);                                                         //
//    f2 = int16(-2); // i160 i160 -> i160                                    //

/////////////////////////////////////////////////////////////////////////////



///////////////////////////i162 i160 ==>162/////////////////////////////////////
    
//    ff1 = int16([-11,-22,-10;1,2,-9]);                                   //
//    ff2 = int16(-2); // i162 i160 -> i62 

////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////i160 i162 ==>i162//////////////////////////////
    
//    fff1 = int16(-8);                                                        //
//    fff2 = int16([1,-9,-10;12,-17,-10]); // i160 i162 -> i162               //

/////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////i162 i162 ==> i162////////////////////////
 
//    ffff1 = int16([1,-22,-40;1,-9,-21])                                      //

//    ffff2 = int16([-10,-11,-22;-33,-20,-11]); // i162 i162 -> i162          // 

/////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////i162 i162 ==> i162////////////////////////
 
//    ffff1 = int16([1,-22,-40;1,-9,-21]);                                    //

//    ffff2 = int16([-10,-11,-22;-33,-20,-11]); // i162 i162 -> i162         // 

/////////////////////////////////////////////////////////////////////////////



///////////////////////////row and column as second parameter///////////////////
 
 
//   g_a = uint8([1,29,14]);                                                  //

//    g_b = uint16([11,12,19;20,23,27]);                                     //
//    g_bb = uint8([6,12,13,20,37;15,17,26,10,42;14,16,29,30,48;68,45,30,70,76]);
      g_bb = int16([-6,-12,-13,-20,-37;-15,-17,-26,-10,-42;-14,-16,-29,-30,-48;-4,-45,-30,-70,-76]);
//        g_bb = int8([-10,-13,-19;-23,-21,-33;-10,-56,-60]);
       
//    max_g = max(g_b,g_bb);
//    max_g_bb = max(g_bb);
    max_g_bb_r = max(g_bb,'r');
//    max_g_bb_c = max(g_bb,'c');
//      disp(max_g);
//    disp(max_g_bb);
    disp(max_g_bb_r);
//    disp(max_g_bb_c);
    
//    g_c = uint16([20,10,22]);                                                //
    
//     g_d = uint16([8,10,15;1,2,28]);                                          //
    
//    g_e = int8([-10,-20,26]);                                                //
    
//    g_f = int8([10,-9,15;11,-22,6]);                                         //
    
//    g_g = int16([-9,7,-3]);                                                  //
    
//    g_h = int16([12,-9,5;8,6,-6]);                                           //

/////////////////////////////////////////////////////////////////////////////////


//    max_aaa = max(aaa);
//    max_aaaa = max(aaaa);
//    max_a2a2 = max(aaa,aaaa); 
//   max_b = max(b);   
//   max_bb = max(bb);
//   max_bbb = max(bbb); 
//   max_bbbb = max(bbbb);  
//   max_c = max(c);
//   max_cc = max(cc);
//   max_ccc = max(ccc);
//  max_cccc = max(cccc);
//  max_d = max(d1,d2);
//   max_dd = max(dd1,dd2);
//   max_ddd = max(ddd1,ddd2);
//   max_dddd = max(dddd1,dddd2);
//   max_e = max(e1,e2); 
//   max_ee = max(ee1,ee2);  
//   max_eee = max(eee1,eee2);
//   max_eeee = max(eeee1,eeee2);
//   max_f = max(f1,f2);
//   max_ff = max(ff1,ff2);
//   max_fff = max(fff1,fff2);
//   max_ffff = max(ffff1,ffff2);
//   max_g_ar = max(g_a,'r');
//   max_g_ac = max(g_a,'c');
//   max_g_br = max(g_b,'r');
//  max_g_bc = max(g_b,'c');
//   max_g_c = max(g_c);
//   max_g_cr = max(g_c,'r');
//   max_g_cc = max(g_c,'c');
//   max_g_d = max(g_d);
//   max_g_dr = max(g_d,'r');
//   max_g_dc = max(g_d,'c');
//   max_g_er = max(g_e,'r');
//   max_g_ec = max(g_e,'c');
//   max_g_fr = max(g_f,'r');
//   max_g_fc = max(g_f,'c');
//   max_g_gr = max(g_g,'r');
//   max_g_gc = max(g_g,'c');
//   max_g_hr = max(g_h,'r');
//   max_g_hc = max(g_c,'c');
//    disp(max_aaa);  
//    disp(max_aaaa);
//    disp(max_a2a2); 
//    disp(max_b);    
//    disp(max_bb);   
//    disp(max_bbb);  
//    disp(max_bbbb); 
//    disp(max_c);      
//    disp(max_cc);    
//    disp(max_ccc);   
//    disp(max_cccc);  
//    disp(max_d);   
//    disp(max_dd);     
//    disp(max_ddd);   
//    disp(max_dddd);   
//    disp(max_e);     
//    disp(max_ee);   
//    disp(max_eee);   
//    disp(max_eeee);  
//    disp(max_f); 
//    disp(max_ff);
//    disp(max_fff); 
//    disp(max_ffff);
//    disp(max_g_ar);
//    disp(max_g_ac);
//    disp(max_g_br);
//    disp(max_g_bc);
//    disp(max_g_c);
//    disp(max_g_cr);
//    disp(max_g_cc);
//    disp(max_g_d);
//    disp(max_g_dr);
//    disp(max_g_dc);
//    disp(max_g_er);
//    disp(max_g_ec);
//    disp(max_g_fr);
//    disp(max_g_fc);
//    disp(max_g_gr);
//    disp(max_g_gc);
//    disp(max_g_hr);
//    disp(max_g_hc);
     
endfunction
