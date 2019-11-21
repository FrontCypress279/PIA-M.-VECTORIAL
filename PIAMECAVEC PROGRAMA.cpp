#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <math.h>       /*pythagorean*/
#define PI 3.14159265

int main ()
{
  int coCL, caCL;
  float ang_CL, paramCL,Ay,FX,BC,CL,KL;
  /*Ax=0;     Sum Fx=0*/
  /*Gy-Ay=0;  Sum Md=0*/
  /*Ay+Gy=FX  Sum Fy=0*/
  printf("Introduzca el peso en Newtons del ferrocarril que quiere que pase sobre el puente.  ");
  scanf("%f",&FX);
  Ay=FX/2;
  /*Secciones*/
  /*BC*5-Ay*3=0  Sum Ml=0*/
  BC=3*Ay/5;
  /*Ay-CL*sin(ang_CL)=0  Sum Fy=0*/
  coCL=5;
  caCL=3;
  paramCL=coCL/caCL;
  ang_CL = atan (paramCL) * 180 / PI;
  CL=Ay/(sin(ang_CL));
  /*CL*cos(ang_CL)+BC-KL=0  Sum Fx=0*/
  KL=CL*(cos(ang_CL))+BC;
  printf("Barra BC = %.3f (T) \nBarra CL = %.3f (T) \nBarra KL = %.3f (C) \n",BC,CL,KL);
  return 0;
}
