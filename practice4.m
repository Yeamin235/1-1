clc;
clear all;
x=5:0.01:10;
y=(x.^2+2*x+3);
m=y(1:length(x)-1);
n=diff(x);
o=diff(y);
R_Area=m.*n;
T_Area=0.5.*diff(x).*diff(y);
a=R_Area+T_Area;
Total_sum=sum(a)
%y(1)
%y(2)
%y(3)
%y(4)
%y(5)
yl=@(x)(x.^2+2.*x+3);
B=quadl(yl,5,10)
figure;
plot(x,y,'-ro')
xlabel('Value of x')
ylabel('Value of y')
grid on








