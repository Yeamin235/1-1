clc;
%a=10;
%xlswrite('aaa.xls',a)
data=xlsread('aaa.xls');
figure;
mesh(data)
grid on