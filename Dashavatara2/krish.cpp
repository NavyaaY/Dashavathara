#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<math.h>
#include"FUNCTIONS.h"
#include <stdlib.h> 
	float k;
void circle(float r)
{
		int j;
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	for(j=0;j<360;j++)
	{
		glVertex2f(r*cos(j),r*sin(j));
	}

	glEnd();
}

void krishdisp()
{



	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.5,1);
	glVertex2f(-9,60);
	glVertex2f(-9,67);
	glVertex2f(-3,70);
	glVertex2f(0,68);
	glVertex2f(4,70);
	glVertex2f(9,67);
	glVertex2f(9,60);
	glVertex2f(6,54);
	glVertex2f(5,52);
	glVertex2f(4,51);
	glVertex2f(3,50);
	glVertex2f(2,50);
	glVertex2f(1,50);
	glVertex2f(0,50);
	glVertex2f(-1,50);
	glVertex2f(-2,50);
	glVertex2f(-3,50);
	glVertex2f(-4,51);
	glVertex2f(-5,52);
	glVertex2f(-6,54);
	glEnd();
	glPopMatrix();

	//eye
	glPushMatrix();
	glTranslatef(5,63,0);
	circle(1);

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-5,63,0);
	circle(1);
	glPopMatrix();

	//eyebrow
	glPushMatrix();
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(-8,65);
	glVertex2f(-7,66);
	glVertex2f(-3,66);
	glVertex2f(-2,65);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex2f(2,65);
	glVertex2f(3,66);
	glVertex2f(7,66);
	glVertex2f(8,65);
	glEnd();
	glPopMatrix();

	//NOSE
	glPushMatrix();
	glBegin(GL_LINES);
	glColor3f(0.9,0.6,0.2);
	glVertex2f(-1,67);
	glVertex2f(-1,64);
	glVertex2f(-1,64);
	glVertex2f(1,64);
	glVertex2f(1,64);
	glVertex2f(1,67);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINES);
	glVertex2f(-1,63);
	glVertex2f(-1,60);
	glVertex2f(-1,60);
	glVertex2f(-2,60);
	glVertex2f(-2,60);
	glVertex2f(-2,59);
	glVertex2f(-2,59);
	glVertex2f(1,59);
	glVertex2f(1,59);
	glVertex2f(1,60);
	glEnd();
	glPopMatrix();

	//LIPS
	glPushMatrix();
	glColor3f(1,0,0);
	glBegin(GL_LINES);
	glVertex2f(-2,55);
	glVertex2f(2,55);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINES);
	glVertex2f(-1,53);
	glVertex2f(1,53);
	glEnd();
	glPopMatrix();

	//crown
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.8,0);
	glVertex2f(-10,70);
	glVertex2f(-10,75);
	glVertex2f(-7,75);
	glVertex2f(-2,80);
	glVertex2f(2,80);
	glVertex2f(7,75);
	glVertex2f(10,75);
	glVertex2f(10,70);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-10,67);
	glVertex2f(-10,70);
	glVertex2f(-3,72);
	glVertex2f(-3,70);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-3,70);
	glVertex2f(-3,72);
	glVertex2f(3,72);
	glVertex2f(3,70);
	glVertex2f(0,68);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-3,72);
	glVertex2f(-5,75);
	glVertex2f(-3,75);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-3,72);
	glVertex2f(-3,75);
	glVertex2f(5,75);
	glVertex2f(3,72);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-3,75);
	glVertex2f(-3,77);
	glVertex2f(3,77);
	glVertex2f(3,75);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(3,70);
	glVertex2f(3,72);
	glVertex2f(10,70);
	glVertex2f(10,67);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0,0.2,1);
	glVertex2f(-13,75);
	glVertex2f(-20,80);
	glVertex2f(-13,75);
	glVertex2f(-8,80);
	glVertex2f(-15,85);
	glVertex2f(-17,82);
	glEnd();
	glPopMatrix();

	line(-10,75,-13,79,0,0,1);
	glFlush();

	
}
