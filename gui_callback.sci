function gui_callback()
    
     OutFormatVal = get(findobj("tag", "list_demo"), "string");
     Out = get(findobj("tag", "list_demo"), "value");
     disp(OutFormatVal(Out),"OutFormatVal is : " );
endfunction
