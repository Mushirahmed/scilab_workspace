function foobar(a)
    select a
    case ['foo','pipo']
        disp('ok')
    case 'foo'
        disp('not ok')
    else
        disp('invalid case')
    end
endfunction
foobar([ ])