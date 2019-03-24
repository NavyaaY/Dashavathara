#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
void triangle(float x1,float x2,float y1,float y2,float z1,float z2,float c1,float c2,float c3)
{
		glBegin(GL_TRIANGLES);
		glColor3f(c1,c2,c3);
		glVertex2f(x1,x2);
		glVertex2f(y1,y2);
		glVertex2f(z1,z2);
		glEnd();
}
void black_triangle(float x1,float x2,float y1,float y2,float z1,float z2)
{
		glBegin(GL_TRIANGLES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(x1,x2);
		glVertex2f(y1,y2);
		glVertex2f(z1,z2);
		glEnd();
}
void boundary_triangle(float x1,float x2,float y1,float y2,float z1,float z2,float c1,float c2,float c3)
{	
		glBegin(GL_TRIANGLES);
		glColor3f(c1,c2,c3);
		glVertex2f(x1,x2);
		glVertex2f(y1,y2);
		glVertex2f(z1,z2);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(x1+0.1,x2+0.1);
		glVertex2f(y1+0.1,y2+0.1);
		glVertex2f(y1+0.1,y2+0.1);
		glVertex2f(z1+0.1,z2+0.1);
		glVertex2f(z1+0.1,z2+0.1);
		
		glEnd();
}
