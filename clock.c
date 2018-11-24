#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int h,m,s,i,j,k,h1,m1,s1;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	printf("\nSet the time enter  hours  min  sec :\n ");
	scanf("%d%d%d",&h,&m,&s);
	
	for(i=h;i<=12;i++)
	{
		for(j=m;j<60;j++)
		{
			for(k=s;k<60;k++)
			{
				printf("%d : %d : %d",h,m,s);
				delay(1000);
				cleardevice();
			}
		}
		if(i==12 && j==59 && k==59)
		{
			i=1;
			j=0;
			k=0;
		}
	}
	closegraph();
}
