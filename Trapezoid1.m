clc;
clear all;
x=0:1:5;

z=x.^2

y=@(x)(x.^2);
A=integral(y,0,5)
A1=quad(y,0,5)
Al=quadl(y,0,5)

figure;

plot(x,z,'-rs')

xlabel('Value of x')

ylabel('Value of y')

grid on





