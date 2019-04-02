#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<math.h>
#include"FUNCTIONS.h"
void koormadisp()
{
	int i,r=50;
	glBegin(GL_POLYGON);
	glColor4f(0.1,0.5,0,0);
	for(i=0;i<360;i++)
	{
		glVertex2f(r*cos(i),r*sin(i));
	}
	glEnd();
	glFlush();
	rectangle(-35,-100,-100,-100,-100,100,-35,100,1.0,1.0,1.0);
	rectangle(-100,0,100,0,100,-100,-100,-100,1.0,1.0,1.0);
	rectangle(-100,0,100,0,100,-100,-100,-100,1.0,1.0,1.0);	
	 glFlush();
}	