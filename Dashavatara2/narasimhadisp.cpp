#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include <stdlib.h> 
#include <math.h>
#include"FUNCTIONS.H"
void narasimhadisp()
{

	rectangle(-100,100,-100,-100,100,-100,100,100,0,0,0);

	//body
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0.8,0.5);
	glVertex2f(-4+10,52);
	glVertex2f(-4+10,52);
	glVertex2f(-10+10,52);
	glVertex2f(-11+10,51);
	glVertex2f(-17+10,48);
	glVertex2f(-18+10,47.5); 
	glVertex2f(-19+10,47);
	glVertex2f(-20+10,46);
	glVertex2f(-20+10,45);
	glVertex2f(-21+10,44);
	glVertex2f(-22+10,43);
	glVertex2f(-23+10,42);
	glVertex2f(-23+10,41);
	glVertex2f(-24+10,40);
	glVertex2f(-24+10,39);
	glVertex2f(-24+10,38);
	glVertex2f(-23+10,36);
	glVertex2f(-22.5+10,35);
	glVertex2f(-22+10,34);
	glVertex2f(-21+10,33);
	glVertex2f(-21+10,32);
	glVertex2f(-20+10,31);
	glVertex2f(-19+10,30);
	glVertex2f(-18+10,28);
	glVertex2f(-15+10,25);
	glVertex2f(-11+10,20);
	glVertex2f(-11+10,19);
	glVertex2f(-10+10,18);
	glVertex2f(-9+10,17);
	glVertex2f(-8+10,16);
	glVertex2f(-7+10,15);
	glVertex2f(-6+10,14);
	glVertex2f(0+10,10);
	glVertex2f(3+10,8);
	glVertex2f(5+10,7);
	glVertex2f(10+10,7);
	glVertex2f(12+10,8);
	glVertex2f(9+10,12);
	glVertex2f(8+10,14);
	glVertex2f(8+10,20);
	glVertex2f(10+10,25);
	glVertex2f(12+10,28);
	glVertex2f(17+10,35);
	glVertex2f(12+10,48);
	glVertex2f(10+10,50);
	glVertex2f(2+10,48);
	glVertex2f(-4+10,48);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-24+10,39);
	glVertex2f(-24+10,38);
	glVertex2f(-23+10,36);
	glVertex2f(-22.5+10,35);
	glVertex2f(-22+10,34);
	glVertex2f(-21+10,33);
	glVertex2f(-21+10,32);
	glVertex2f(-20+10,31);
	glVertex2f(-19+10,30);
	glVertex2f(-18+10,28);
	glVertex2f(-15+10,25);
	glVertex2f(-11+10,20);
	glVertex2f(-11+10,19);
	glVertex2f(-10+10,18);
	glVertex2f(-9+10,17);
	glVertex2f(-8+10,16);
	glVertex2f(-7+10,15);
	glVertex2f(-6+10,14);
	glVertex2f(0+10,10);
	glVertex2f(3+10,8);
	glVertex2f(5+10,7);
	glVertex2f(10+10,7);
	glVertex2f(12+10,8);
	glVertex2f(15+10,0);
	glVertex2f(3+10,0);
	glVertex2f(-10+10,7);
	glVertex2f(-13+10,10);
	glVertex2f(-20+10,19);
	glVertex2f(-28+10,32);
	glVertex2f(12+10,8);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0.8,0.5);
	glVertex2f(3+10,0);
	glVertex2f(-10+10,7);
	glVertex2f(-13+10,10);
	glVertex2f(-20+10,19);
	glVertex2f(-20+10,0);
	glVertex2f(3+10,0);
	glEnd();
	glPopMatrix();


		//shawl
			glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0.4,0.6);
	glVertex2f(-20,48);
	glVertex2f(-10,52);
	glVertex2f(-10,-10);
	glVertex2f(-20,-10);
	glEnd();
	glPopMatrix();



	
	
	//hair
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.7,0.1);
	glVertex2f(-5,85);
	glVertex2f(-8,92);
	glVertex2f(-15,90);
	glVertex2f(-20,80);
	glVertex2f(-20,60);
	glVertex2f(-2,0);
	glVertex2f(2,0);
	glVertex2f(20,60);
	glVertex2f(20,80);
	glVertex2f(15,90);
	glVertex2f(8,92);
	glVertex2f(5,85);
	glEnd();



	glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(0,65,0);
	circle(5);
	glPopMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	glVertex2f(-15,70);
	glVertex2f(-5,88);
	glVertex2f(5,88);
	glVertex2f(15,70);
	glVertex2f(15,68);
	glVertex2f(14,67);
	glVertex2f(13,66);
	glVertex2f(10,65);
	glVertex2f(8,64);
	glVertex2f(6,63);
	glVertex2f(5,60);
	glVertex2f(-5,60);
	glVertex2f(-6,63);
	glVertex2f(-8,64);
	glVertex2f(-10,65);
	glVertex2f(-13,66);
	glVertex2f(-14,67);
	glVertex2f(-15,68);
	glEnd();




	

	//bindi
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2f(-5,88);
	glVertex2f(-1,80);
	glVertex2f(-1,80);
	glVertex2f(1,80);
	glVertex2f(1,80);
	glVertex2f(5,88);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2f(-3,88);
	glVertex2f(0,80);
	glVertex2f(0,80);
	glVertex2f(3,88);
	glEnd();

	//eyes
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(-5,77,0);
	circle(2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(5,77,0);
	circle(2);
	glPopMatrix();

		glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(-5,77,0);
	circle(1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(5,77,0);
	circle(1);
	glPopMatrix();


	glBegin(GL_POLYGON);
	glVertex2f(-5,60);
	glVertex2f(-5,57);
	glVertex2f(5,57);
	glVertex2f(5,60);
	glEnd();


		//mouth
	line(-2,74,-2,68,0,0,0);
	line(2,74,2,68,0,0,0);
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.7,0.1);
	glVertex2f(-8,60);
	glVertex2f(-5,68);
	glVertex2f(5,68);
	glVertex2f(8,60);;
	glEnd();


	//crown
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(0,90,0);
	circle(7);

	glPopMatrix();


		glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-5,85);
	glVertex2f(5,85);
	glVertex2f(15,99);
	glVertex2f(-15,99);
	glEnd();



	//pole
//	glBegin(GL_POLYGON);
//	glColor3f(1,0.4,0.6);
	
	rectangle(-30,0,-30,-100,30,-100,30,0,1,1,0);
	rectangle(10,0,40,100,80,100,40,0,1,1,0);
	rectangle(-10,0,-40,100,-80,100,-40,0,1,1,0);
	line(-30,-80,30,-80,0,0,0);
	line(-30,-60,30,-60,0,0,0);
	glFlush();



}