clc;
close all;
x=0:0.001:3;
y=4.^x+1; % x and y data

db=30;
yo=awgn(y,db,'measured'); % noisy data
ap=polyfit(x,yo,3);
yp=polyval(ap,x);
MSEp=mean((yo-yp).^2);
F=@(a,x)(a(1).^x+a(2));
ai=[100 100 ];
[ai]=lsqcurvefit(F,ai,x,yo);
yl=F(ai,x);
figure;
plot(x,yo)
hold on
plot(x,yp)
hold on
plot(x,yl)
grid on
legend('observed','polyfitted','lsqfitted')
MSEl=mean((yo-yl).^2)
ap,MSEp



