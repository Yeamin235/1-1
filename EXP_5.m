clc;
close all;
x=0:0.01:5;
y=2*x.^2+3*x+4; % x and y data

db=30;
yo=awgn(y,db,'measured'); % noisy data
ap=polyfit(x,yo,2);
yp=polyval(ap,x);
MSEp=mean((yo-yp).^2);
F=@(a,x)(a(1)*x.^2+a(2)*x+a(3));
ai=[100 100 1000 ];
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



