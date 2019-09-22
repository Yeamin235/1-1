clc;close all;
f=@(x) (cos(x)-3*x+1);
df=@(x) (-sin(x)-3);
a=input('please guess the root :');

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
subplot(3,1,1)
plot(x1,'-bs')
subplot(3,1,2)
plot(f_r)
subplot(3,1,3)
plot(error)
