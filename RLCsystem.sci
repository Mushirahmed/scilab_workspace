A = 1.0;
f = 1e + 4;
R = 10;     // Resistor (ohm)
L = 1e-3;   //Inductor (H)
c = 1e-6;   // Capacitor (F)

//Problem function
function zdot = RLCsystem(t,y)
    z1 = y(1);
    z2 = y(2);
    // Compute input
    Vin = A*sin(2*%pi*f*t);
    zdot(1) = z2;
    zdot(2) = (Vin - z1 - L*z2/R) / (L*C);
endfunction

// Simulation time [1 ms]
t = linspace(0,1e-3,1001);

//Initial condition and solving ode system
y0 = [0;0]; 
t0 = t(1);
y = ode(y0,t0,t,RLCsystem);
// Plotting results

Vin = A*sin(2*%pi*f*t);
scf(1);
clf(1);
plot(t,[Vin,y(1,:)]);
legend(["Vin";"Vout"]);


