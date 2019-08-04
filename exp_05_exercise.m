clc;
close all;
x=0:0.001:100;
a=10;b=50;c=0.1;
y=a*exp((-(x-b).^2)/2*c.^2); % x and y data

db=30;
yo=awgn(y,db,'measured'); % noisy data
ap=polyfit(x,yo,10);
yp=polyval(ap,x);
MSEp=mean((yo-yp).^2)
F=@(a,x)(a(1)*(exp((-(x-a(2)).^2)/2*a(3).^2)));
ai=[6  35  0.1];
[ai]=lsqcurvefit(F,ai,x,yo);
yi=F(ai,x);
figure;
plot(x,yo)
hold on
plot(x,yp)
hold on
plot(x,yi)
grid on
legend('observed','polyfitted','lsq')


MSEl=mean((yo-yi).^2)

