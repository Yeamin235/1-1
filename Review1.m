clc;
clear all;
x=-5:0.1:5;
y=2*x.^2+3*x+4;
db=10;
n=3;
yn=awgn(y,db,'measured');

a=polyfit(x,yn,n)
yf=polyval(a,x);
figure;
plot(x,y,'b','linewidth',2)
hold on
plot(x,yn,'r')
hold on
plot(x,yf,'g','linewidth',3)

legend('clean','noisy','fitted')



