clc;
%A=[1 2 3]
%A=[1;2;3 ]
%B=[4 ;5 ;6]
%C=[7; 8; 9]
%M=[A B C]
%D=[M(3,2)]
%E=[M(2,:)]
%F=[M(:,2)]

%M=[3 -11 5;4 -8 12;7 -5 -12]
%N=[-5 12 4;7 -3 2;-12 15 -16 ]
%Multi=M*N

%A=complex(6,8) % complex number declaration
%B=abs(A)  %Magnitude
%C=angle(A) % Angle declaration
Amp=5;
f=100;
T=1/f;
t=0:0.0001:2*T;

A=Amp*sin(2*pi*f*t)
db=10;
xn=awgn(A,db,'measured')
n=A-xn;
%B=Amp*cos(2*pi*f*t)
figure;

%subplot(2,1,1);
plot(t,A,'r','linewidth',2)
xlabel('Time(t)->s')
ylabel('amplitude(v)->volt')
hold on
%subplot(2,1,2)
plot(t,xn,'b')
hold on
plot(t,n,'g')
legend('clean','noisy','noise')
%grid on
%xlabel('Time domain(t)')
%ylabel('amplitude(volt)')
SNR=snr(xn,n)









