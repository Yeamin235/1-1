clc;
clear all;
a=0.5;
b=1.8;
c=2;
d=1;
x=0:0.01:2;
y=a+b*exp(x.^c+d);
db=20;
n=5;
yn=awgn(y,db,'measured');
ap=polyfit(x,yn,n);
yp=polyval(ap,x);

F=@(a,x)(a(1)+a(2)*exp(x.^a(3)+a(4)));
ai=[0.8 1 1 1];
[al]=lsqcurvefit(F,ai,x,yn);
yl=F(al,x);
MSEp=mean((yp-yn).^2)

RMSEp=sqrt(MSEp)
MSEl=mean((yn-yl).^2)
RMSEl=sqrt(MSEl)
figure;
plot(x,yn,'-r','linewidth',2)
hold on
plot(x,yp,'-b','linewidth',2)
hold on
plot(x,yl,'-g','linewidth',2)

legend('noisy signal','polyfitted curve','lsqcurvefit')




