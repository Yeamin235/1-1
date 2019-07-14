x=7;
if x<0 a=10;
elseif x== 0 a=11;
elseif x>0 & x<5 a=12;
else a=13;
end
a;

x=12;
if x<=5 a='00';
elseif x>5 & x<=10 a='01';
elseif x>10 & x<=15 a='10';
else a='11';
end
a;

a=2;
while(a<10)
    a=a+1;
end

b=6;
while(b<10)
    b=b+1;
    if(b<6)
        break;
    end
end

x=1;
while(x<=5)
    x=x+1;
    
end

x=10;
while(x>0)
    x=x-3;
end

y(1)=3;
for m=2:5;
    y(m)=2*y(m-1);
end
y;

a=0.1;
f(1)=1;
for i=2:5;
    f(i)=(1-a)*f(i-1);
end
f;
m=1;
c=2;
for x=0:10;
    
    y=m*x+c;
end

x=0:10;
m=1;c=2;
% length(x)
for i=1:length(x)
    y(i)=m*x(i)+c;
end
y;


x1=0:10;m1=0.5;c1=2;
y1=m1*x1+c1;
figure;
subplot(1,2,1)
plot(x1,y1,'-db','linewidth',3 )
x2=5:10;
m2=1;
c2=3;
y2=m2*x2+c2;
figure;
subplot(1,2,2)
plot(x2,y2,'-db','linewidth',3 )
%plot(x1,y1,'-db',x2,y2,'-g','linewidth',3 )
%'-pc','linewidth',2)
%title ('Name of the Graph')
%xlabel('Time (s)')
%ylabel('Velocity(v)')
%ylim([2 6])
%xlim([3 7])
grid on

%grid on

%legend('velocity','acceleration')
