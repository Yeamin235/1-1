clc;
x=0:0.1:100;
y=5./(1+4*((x-50)./40).^2)


dB=20;
yo=awgn(y,dB,'measured') %%Additing White Gaussian Noise
n=yo-y;
figure;
plot(x,y)
hold on
plot(x,yo)
legend('y','yo')
SNR=snr(y,n)


