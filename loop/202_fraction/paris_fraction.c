#include <stdio.h>
#include <math.h>
int chenhenghan(int m,int n,int d);
int gcd(int m,int n);
int output1,output2,output3,allen=0,pairs=1;
main(){
	int a,b,c,d,e,f,g,y;
	int m,n,i=1,ggcd;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	if(a<0) b=-b;
	if(e<0) f=-f;
	m=a*c+b;
	n=e*g+f;
	m*=g;
	n*=c;
	output3=g*c;
	//printf("%d,%d\n",m,n);
	y=chenhenghan(m,n,d);
	if(y<0){
		y=-y;
		i=-i;	
	}
	if(allen==0){
		ggcd=gcd(y,output3);
		y/=ggcd;
		output3/=ggcd;
		output1=y/output3;
		output2=y%output3;
		output1=i*output1;
		if(output2==0) output3=1;
		printf("%d\n",output1);
		printf("%d\n",output2);
		printf("%d",output3);
	}
	else if(allen==1){
		output2=abs(output2);
		output3=abs(output3);
		ggcd=gcd(output2,output3);
		output2/=ggcd;
		output3/=ggcd;
		output1=output2/output3;
		output2=output2%output3;
		output1=i*output1;
		if(output2==0) output3=1;
		printf("%d\n",output1);
		printf("%d\n",output2);
		printf("%d",output3);
	}
	system("PAUSE");
	return 0;
}
int chenhenghan(int m,int n,int d){
	int y;
	if(d==0){
		y=m+n;
	}
	else if(d==1){
		y=m-n;
	}
	else if(d==2){
		y=m*n;
		output3*=output3;
	}
	else if(d==3){
		output2=m;
		output3=n;
		allen=1;
		if((output2<0&&output3>0)||(output2>0&&output3<0)) y=-1;
		//printf("%d,%d,%d\n",output2,output3,y);
	}
	return y;
}
int gcd(int m,int n){
	int r,temp;
	if(m<n){
		temp=m; m=n; n=temp;
	}
	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}