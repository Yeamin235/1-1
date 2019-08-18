clc;
close all;

x=0:1:200;
y=10./(1+4*((x-100)./50).^2);
dB=20;
yo=awgn(y,dB,'measured')
n=10;
ap=polyfit(x,yo,n);
yp=polyval(ap,x);
MSEp=mean((yo-yp).^2)
F=@(a,x)(a(1)./(1+4*((x-a(2))./a(3)).^2))
ai=[8 90 45];
[ai]=lsqcurvefit(F,ai,x,yo)
yp=F(ai,x);
MSEp=mean((yo-yp).^2)
plot(x,y)
hold on
plot(x,yo)
hold on
plot(x,yp)
hold on

legend('y','yo','yp')

