#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
void rectangle(float x1,float x2,float y1,float y2,float z1,float z2,float m1,float m2,float c1,float c2,float c3)
{
		glBegin(GL_QUADS);
		glColor3f(c1,c2,c3);
		glVertex2f(x1,x2);
		glVertex2f(y1,y2);
		glVertex2f(z1,z2);
		glVertex2f(m1,m2);
		glEnd();
}
void default_rectangle(float xmax,float ymax,float xmin,float ymin)
{
		glBegin(GL_QUADS);
		glColor3f(0,0,0);
		glVertex2f(xmin,ymin);
		glVertex2f(xmax,ymin);
		glVertex2f(xmax,ymax);
		glVertex2f(xmin,ymax);
		glEnd();
}
void boundary_rectangle(float x1,float x2,float y1,float y2,float z1,float z2,float m1,float m2,float c1,float c2,float c3)
{
		glBegin(GL_QUADS);
		glColor3f(c1,c2,c3);
		glVertex2f(x1,x2);
		glVertex2f(y1,y2);
		glVertex2f(z1,z2);
		glVertex2f(m1,m2);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(x1+0.1,x2+0.1);
		glVertex2f(y1+0.1,y2+0.1);
		glVertex2f(y1+0.1,y2+0.1);
		glVertex2f(z1+0.1,z2+0.1);
		glVertex2f(z1+0.1,z2+0.1);
		glVertex2f(m1+0.1,m2+0.1);
		glVertex2f(m1+0.1,m2+0.1);
		glEnd();
}
void fish(float x1,float x2,float y1,float y2,float z1,float z2,float m1,float m2)
{
	
		glBegin(GL_QUADS);
		glColor3f(30,144,255);
		glVertex2f(x1,x2);
		glColor3f(0,191,255);
		glVertex2f(y1,y2);
		glColor3f(255,215,0);
		glVertex2f(z1,z2);
		glColor3f(255,215,0);
		glVertex2f(m1,m2);
		glEnd();
}  