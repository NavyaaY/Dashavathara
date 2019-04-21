#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include <stdlib.h> 
#include <math.h>
#include"FUNCTIONS.H"
int r2,g2,b2;
float k1;
void buddadisp()
{



		glBegin(GL_POLYGON);
	glColor3f(0,0.8,1);
	glVertex2f(-100,0);
	glColor3f(0,0.7,1);
	glVertex2f(-100,100);
	glColor3f(0.1,0.3,0.9);
	glVertex2f(100,100);
	glColor3f(0.1,0.3,1);
	glVertex2f(100,0);
	glEnd();
		//ccloud
	k1-=0.01;
	if(k1>-100)
	{
		glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(-60+k1,60);
	glVertex2f(-60+k1,70);
	glVertex2f(-70+k1,75);
	glVertex2f(-60+k1,80);
	glVertex2f(-50+k1,90);
	glVertex2f(-40+k1,80);
	glVertex2f(-30+k1,85);
	glVertex2f(-25+k1,80);
	glVertex2f(-30+k1,70);
	glVertex2f(-30+k1,65);
	glVertex2f(-40+k1,65);
	glVertex2f(-40+k1,60);
	glVertex2f(-50+k1,65);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(60+k1,60);
	glVertex2f(60+k1,70);
	glVertex2f(70+k1,75);
	glVertex2f(60+k1,80);
	glVertex2f(50+k1,90);
	glVertex2f(40+k1,80);
	glVertex2f(30+k1,85);
	glVertex2f(25+k1,80);
	glVertex2f(30+k1,70);
	glVertex2f(30+k1,65);
	glVertex2f(40+k1,65);
	glVertex2f(40+k1,60);
	glVertex2f(50+k1,65);
	glEnd();
	glPopMatrix();
	}
	else 
		k1=100;

	//tree
	rectangle(-100,0,-100,-100,100,-100,100,0,0.5,0.6,0.1);
	rectangle(-50,-15,-30,30,60,30,45,-15,1,0.6,00.2);
	rectangle(-50,-15,-50,-60,-45,-60,-45,-15,1,0.6,0.2);
	rectangle(-45,-15,60,30,60,-30,-45,-60,1,0.6,0.2);

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.4,0);
	glVertex2f(-20,30);
	glVertex2f(-20,40);
	glVertex2f(-22,41);
	glVertex2f(-20,50);
	glVertex2f(-20,60);
	glVertex2f(-30,70);
	glVertex2f(-32,77);
	glVertex2f(-30,80);
	glVertex2f(-40,100);
	glVertex2f(35,100);
	glVertex2f(30,80);
	glVertex2f(30,70);
	glVertex2f(25,60);
	glVertex2f(25,0);
	glEnd();
	glPopMatrix();


	//aura
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(0,70,0);
	circle(18);
	glPopMatrix();


	//hair
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(-11,49);
	glVertex2f(-12,50);
	glVertex2f(-12,55);
	glVertex2f(-12,58);
	glVertex2f(-11,60);
	glVertex2f(-10,62);
	glVertex2f(-8,64);
	glVertex2f(-7,65);
	glVertex2f(-5,67);
	glVertex2f(-2,68);
	glVertex2f(0,68);
	glVertex2f(3,68);
	glVertex2f(5,67);
	glVertex2f(7,66);
	glVertex2f(8,65);
	glVertex2f(10,63);
	glVertex2f(11,60);
	glVertex2f(12,55);
	glVertex2f(12,52);	
	glVertex2f(10,50);
	glVertex2f(10,58);
	glVertex2f(10,60);
	glVertex2f(8,61.5);
	glVertex2f(5,62);
	glVertex2f(2,60);
	glVertex2f(0,60);
	glVertex2f(-2,61); 
	glVertex2f(-5,62);
	glVertex2f(-7,61);
	glVertex2f(-9,60);
	glVertex2f(-10,58);
	glVertex2f(-10,50);
	glEnd();
	glPopMatrix();

	//face
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0.9,0.6);
	glVertex2f(-10,58);
	glVertex2f(-10,50);
	glVertex2f(-9,48);
	glVertex2f(-8,46);
	glVertex2f(-7,45);
	glVertex2f(-5,43);
	glVertex2f(-3,41);
	glVertex2f(0,40);
	glVertex2f(1,40);
	glVertex2f(3,41);
	glVertex2f(5,42);
	glVertex2f(7,44);
	glVertex2f(8,46);
	glVertex2f(9,48);
	glVertex2f(10,50);
	glVertex2f(10,58);
	glVertex2f(10,60);
	glVertex2f(8,61.5);
	glVertex2f(5,62);
	glVertex2f(2,60);
	glVertex2f(0,60);
	glVertex2f(-2,61); 
	glVertex2f(-5,62);
	glVertex2f(-7,61);
	glVertex2f(-9,60);
	glEnd();
	glPopMatrix();

	//hair bun
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(0,70,0);
	circle(6);
	glPopMatrix();

	//eyes

	


	
	if(r2==0 && g2==0 && b2==0)
	{
		
		r2=1;
		g2=0.9;
		b2=0.6;

		glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(-5,55,0);
	circle(2);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(5,55,0);
	circle(2);
	glPopMatrix();
	glutPostRedisplay();

		glPushMatrix();
	glColor3f(0,0,0);
	glTranslatef(-5,55,0);
	circle(1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(5,55,0);
	circle(1);
	glPopMatrix();
	}
	else
	{

		r2=0;
		g2=0;
		b2=0;
		
	glPushMatrix();
	glColor3f(1,0.9,0.6);
	glTranslatef(5,55,0);
	circle(2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1,0.9,0.6);
	glTranslatef(-5,55,0);
	circle(2);
	glPopMatrix();

		
	}

	//lips
	glPushMatrix();
	glColor3f(1,0,0);
	glBegin(GL_LINES);
	glVertex2f(-2,46);
	glVertex2f(2,46);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINES);
	glVertex2f(-1,44);
	glVertex2f(1,44);
	glEnd();
	glPopMatrix();

	//nose
		glPushMatrix();
	glColor3f(1,0.6,0.4);
	glBegin(GL_LINES);
	glVertex2f(0,54);
	glVertex2f(0,50);
	glVertex2f(0,50);
	glVertex2f(2,51);
	glEnd();
	glPopMatrix();

	//body
	 
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.6,0.1);
	glVertex2f(-5,43);
	glVertex2f(-5,37);
	glVertex2f(-7,36);
	glVertex2f(-15,35);
	glVertex2f(-17,33);
	glVertex2f(-19,30);
	glVertex2f(-19,25);
	glVertex2f(-20,20);
	glVertex2f(-20,10);
	glVertex2f(-20,7);
	glVertex2f(-21,5);
	glVertex2f(-22,3);
	glVertex2f(-23,2.5);
	glVertex2f(-25,0);
	glVertex2f(25,0);
	glVertex2f(23,2.5);
	glVertex2f(22,3);
	glVertex2f(21,5);
	glVertex2f(20,7);
	glVertex2f(20,10);
	glVertex2f(20,20);
	glVertex2f(19,25);
	glVertex2f(19,30);
	glVertex2f(17,33);
	glVertex2f(15,35);
	glVertex2f(5,43);
	glEnd();
	glPopMatrix();




	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0.9,0.6);
	glVertex2f(-5,43);
	glVertex2f(-8,37);
	glVertex2f(-8,30);
	glVertex2f(-7,25);
	glVertex2f(-6,23);
	glVertex2f(-5,20);
	glVertex2f(-4,15);
	glVertex2f(-2,10);
	glVertex2f(0,5);
	glVertex2f(2,10);
	glVertex2f(4,15);
	glVertex2f(5,20);
	glVertex2f(6,23);
	glVertex2f(7,25);
	glVertex2f(8,30);
	glVertex2f(8,37);
	glVertex2f(5,43);
	glVertex2f(3,41);
	glVertex2f(1,40);
	glVertex2f(0,40);
	glVertex2f(-1,40);
	glVertex2f(-3,41);
	glEnd();
	glPopMatrix();

	glBegin(GL_LINES);
	glColor3f(0.9,0.5,0.2);
	glVertex2f(-15,27);
	glVertex2f(-13,20);
	glVertex2f(-13,20);
	glVertex2f(-13,10);
	glVertex2f(-13,10);
	glVertex2f(-10,5);
	glVertex2f(-10,5);
	glVertex2f(10,5);
	glVertex2f(10,5);
	glVertex2f(13,10);
	glVertex2f(13,10);
	glVertex2f(13,20);
	glVertex2f(13,20);
	glVertex2f(15,27);
	glEnd();


		//folded legs
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.6,0.1);
	glVertex2f(-30,0);
	glVertex2f(-30,0);
	glVertex2f(30,0);
	glVertex2f(30,-2);
	glVertex2f(32,-5);
	glVertex2f(33,-8);
	glVertex2f(33,-10);
	glVertex2f(32,-12);
	glVertex2f(30,-15);
	
	glVertex2f(-30,-15);
	glVertex2f(-32,-12);
	glVertex2f(-33,-10);
	glVertex2f(-33,-8);
	glVertex2f(-32,-5);
	glVertex2f(-30,-2); 
	glEnd();

	//hands
	glBegin(GL_POLYGON);
	glColor3f(1,0.9,0.6);
	glVertex2f(0,5);
	glVertex2f(-10,5);
	glVertex2f(-12,2);
	glVertex2f(-9,0);
	glVertex2f(-5,-2);
	glVertex2f(-2,-2);
	glVertex2f(0,0);
	glVertex2f(0,2);
	glVertex2f(-5,1);
	glVertex2f(-6,2);
	glVertex2f(-5,3);
	glVertex2f(0,3);
	glEnd();



	glBegin(GL_POLYGON);
	glVertex2f(0,5);
	glVertex2f(10,5);
	glVertex2f(12,2);
	glVertex2f(9,0);
	glVertex2f(5,-2);
	glVertex2f(2,-2);
	glVertex2f(0,0);
	glVertex2f(0,2);
	glVertex2f(5,1);
	glVertex2f(6,2);
	glVertex2f(5,3);
	glVertex2f(0,3);
	glEnd();



	

	glutPostRedisplay();
	glFlush();


}
