function ydot = f(t,y)
    ydot=[a-y(2)*y(2)-1;1 0]*y
endfunction
a=1;y0=[1;0];t0=0;instants = 0:0.02:20;
y=ode(y0,t0,instants,f);
plot2d(y(1,:),y(2,:),style=-1,rect=[-3,-3,3,3],nax=[10,2,10,2])
xtitle('Van der pol')