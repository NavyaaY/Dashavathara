#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<math.h>
#include"FUNCTIONS.h"
#include <stdlib.h> 
	float i;


void koormadisp()
{
//	glClear(GL_COLOR_BUFFER_BIT);
	
	i-=1;
	if(i>(-100))
	{
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(-100,0);
	glColor3f(0.8,0.3,0.0);
	glVertex2f(-100,100);
	glColor3f(1,1,1);
	glVertex2f(100,100);
	glColor3f(0.8,0.3,0.0);
	glVertex2f(100,0);
	glEnd();
	int j,r=50;
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.4,0);
	for(j=0;j<360;j++)
	{
		glVertex2f(r*cos(j)+i,r*sin(j));
	}
	glEnd();
	glFlush();

//	rectangle(-35,-100,-100,-100,-100,100,-35,100,1.0,1.0,1.0);
	rectangle(-100,0,100,0,100,-100,-100,-100,0.1,0.6,0.9);
	rectangle(0+i,20,0+i,30,-10+i,30,-10+i,20,0.6,0.3,0.1);
	
	glEnd();	
	rectangle(10+i,20,10+i,30,20+i,30,20+i,20,0.6,0.3,0.1);
	rectangle(-10+i,10,-10+i,20,-20+i,20,-20+i,10,0.6,0.3,0.1);
	rectangle(0+i,0,0+i,10,-10+i,10,-10+i,0,0.6,0.3,0.1);
	rectangle(0+i,10,0+i,20,10+i,20,10+i,10,0.6,0.3,0.1);
	rectangle(20+i,10,20+i,20,30+i,20,30+i,10,0.6,0.3,0.1);
	rectangle(10+i,0,10+i,10,20+i,10,20+i,0,0.6,0.3,0.1);
	rectangle(30+i,0,30+i,10,40+i,10,40+i,0,0.6,0.3,0.1);
	rectangle(-20+i,0,-20+i,10,-30+i,10,-30+i,0,0.6,0.3,0.1);
	triangle(-40+i,35,5+i,100,45+i,35,0.6,0.5,0);
	triangle(0+i,35,25+i,90,60+i,35,0.6,0.8,0.2);
	
	rectangle(-20+i,0,-25+i,-10,-20+i,-10,-10+i,0,0.0,0.0,0.0);
	rectangle(30+i,0,23+i,-15,28+i,-15,35+i,0,0,0,0);
	

	rectangle(-20+i,0,-25+i,-10,-20+i,-10,-10+i,0,0.0,0.0,0.0);
	rectangle(30+i,0,23+i,-15,28+i,-15,35+i,0,0,0,0);
	rectangle(-35+i,0,-35+i,15,-60+i,15,-60+i,0,0.6,0.4,0);
	triangle(-60+i,15,-50+i,25,-50+i,0,0.6,0.4,0);
	rectangle(-50+i,15,-50+i,25,-35+i,25,-35+i,15,0.6,0.4,0);
	black_line(-60+i,15,-50+i,15);
	//eye
rectangle(-50+i,20,-50+i,24,-53+i,24,-53+i,20,0,0,0);

	glBegin(GL_POLYGON);
	glColor3f(0.6,0.4,0);
	glVertex2f(-60+i,0);
	glVertex2f(-61+i,2);
	glVertex2f(-61+i,3);
	glVertex2f(-62+i,4);
	glVertex2f(-62+i,6);
	glVertex2f(-63+i,7);
	glVertex2f(-63+i,8);
	glVertex2f(-63+i,9);
	glVertex2f(-63+i,10);
	glVertex2f(-62+i,11);
	glVertex2f(-62+i,12);
	glVertex2f(-61+i,14);
	glVertex2f(-60+i,15);
	glEnd();
	}
	else
		i=100;
	
	
	 int k;
	 float m=0;
	 m+=0.001;
	 for(k=0;k<600;k++)
	 {

	 int max=100,min=-100;
	 int max2=0,min2=-100;
	 int x1=rand()%(max-min)+min;
	 int y1=rand()%(max2-min2)+min2;
	 glColor3f(0,0,1);
	 if(m>-100)
	 {
	  glBegin(GL_POINTS);
	  glVertex2f(x1,y1);
	  glEnd();
	  
	 }
	 else
		m=0;
	glutPostRedisplay();
	glutKeyboardFunc(keys);
	  glFlush();
	 }
}

	