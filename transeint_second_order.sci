t = 0:0.01:15
q = s^2+3.30579*s+4.78533;
UnderdampedSystem = syslin('c',0.00137438/q);
roots(q)
y = csim('step',t,UnderdampedSystem);
plot(y);