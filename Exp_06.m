clc;
close all;
clear all;
f=@(x)(x-2); %[0 3]
xl=input ('Please input the value of Xl : ');
xu=input ('Please input the value of Xu : ');
tol=input('Percentage of relative error tolerance : ');
rel_error=1; % error must be greater than tolerance
%%To check if there is root in between xl and xu
a=subs(f,xl);
b=subs(f,xu);

if(a*b>0)
    disp('wrong guess of xl and xu.Try other values ')
end
xr=(xl+xu)/2;

if(a*b<0 & subs(f,xr)==0);
    fprintf('Root of given function is %f',xr)
end
i=1;
if(a*b<0)
    xr=(xl+xu)/2
    xri=(xl+xu)/2; %%initial value which will be updated later
    
    while(rel_error>tol)
        xr_old=xr;
        c=subs(f,xr);
        d=subs(f,xl);
        
        if(c*d<0)
            xu=xr;
        else 
            xl=xr;
        end
        xr=(xl+xu)/2;
        xrnew(i)=xr;  %xr updated after 'i'th iteratiom
        rel_error(i)=abs((xr-xr_old)/xr*100);
        i=i+1;
    end
end

n=1:1:i-1;
figure;
plot(n,rel_error,'-bo')
grid on
xlabel('number of iteratoin n')
ylabel('percentage of relative error')
n=1:1:i;
xru=[xri xrnew];
f_xru=subs(f,xru);
        figure;
        plot(n,xru,'-rs')
        xlabel('number of iteration n')
        ylabel('updated xr at each iteration')
grid on
  figure;
        plot(n,f_xru,'-*g')
        xlabel('number of iteration n')
        ylabel('updated xr at each iteration')
        
        
        
        
        

