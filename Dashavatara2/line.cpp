#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
void line(float x1,float x2,float y1,float y2,float c1,float c2,float c3)
{
	glBegin(GL_LINES);
	glColor3f(c1,c2,c3);
	glVertex2f(x1,x2);
	glVertex2f(y1,y2);
	glEnd();
}
void black_line(float x1,float x2,float y1,float y2)
{
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(x1,x2);
	glVertex2f(y1,y2);
	glEnd();
}