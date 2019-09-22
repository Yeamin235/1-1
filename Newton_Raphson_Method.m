clc;close all;
f=@(x)( sin(x)-cos(x)-2*x+1)
df=@(x) (cos(x)+sin(x)-2)
a=input('please guess the root :')

x=a;
for i=1:1:100
x1 = x-(f(x)/df(x));
x = x1;
end

root = x

x=a;
for i=1:1:5
    x1(i)= x-(f(x)/df(x));
    x=x1(i);
    f_r(i)=subs(f,x1(i));
    error(i)= x1(i)-root;
end

figure;
subplot(1,3,1)
plot(x1,'-bs')
subplot(1,3,2)
plot(f_r)
subplot(1,3,3)
plot(error)
