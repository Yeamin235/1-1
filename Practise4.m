clc;
close all;
x=0:1:200;
y=10./(1+4*((x-100)./50).^2);
dB=20;
a=1;
yo=awgn(y,dB,'measured')
% xlswrite('n_vs_MSEp2',a)
r=xlsread('n_vs_MSEp2.xls ');
A=r(1,:);
B=r(2,:);
figure;
plot(A,B)
title('N vs MSEp')