#include<iostream>
#include<cstdio>
#include<cmath>
#define EPS (10e-8) //s�mbolo matem�tico griego epsilon que se utiliza en este contexto como el valor m�s peque�o posible para (datos o tipo de datos, seg�n el contexto). Los valores m�s peque�os se consideran cero. 
using namespace std;

double p,q,r,s,t,u;

inline double fomula(double x){
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}


int main(){
    while(scanf("%lf%lf%lf%lf%lf%lf",&p,&q,&r,&s,&t,&u)!=EOF){
    
        double left=0, right=1, mid;
        bool flag=false;
        
        if(fomula(left)*fomula(right) > 0)
		{
            cout<<("No solution\n"); 
            continue;
        }
        while(right-left > EPS)
		{
            mid = (left+right)/2;
            if(fomula(mid)*fomula(left) > 0) 
			{
			 left=mid;	
			}
            else
			{
			 right=mid;	
		    } 
        }
    
        cout<<("%.4f\n", mid);
    } 
    return 0;
}
