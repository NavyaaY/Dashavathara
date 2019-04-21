#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<math.h>
#include"FUNCTIONS.h"
#include <stdlib.h> 
	float k;
int r=0;
int g=0;
int b=0;
float r1,g1,b1;
void circle(float r)
{
		int j;
	glBegin(GL_POLYGON);
	
	for(j=0;j<360;j++)
	{
		glVertex2f(r*cos(j),r*sin(j));
	}

	glEnd();
}

void krishdisp()
{

	rectangle(-100,0,-100,-100,100,-100,100,0,0.3,0.7,0.1);
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
	k-=0.01;
	if(k>-100)
	{
		glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(-60+k,60);
	glVertex2f(-60+k,70);
	glVertex2f(-70+k,75);
	glVertex2f(-60+k,80);
	glVertex2f(-50+k,90);
	glVertex2f(-40+k,80);
	glVertex2f(-30+k,85);
	glVertex2f(-25+k,80);
	glVertex2f(-30+k,70);
	glVertex2f(-30+k,65);
	glVertex2f(-40+k,65);
	glVertex2f(-40+k,60);
	glVertex2f(-50+k,65);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(60+k,60);
	glVertex2f(60+k,70);
	glVertex2f(70+k,75);
	glVertex2f(60+k,80);
	glVertex2f(50+k,90);
	glVertex2f(40+k,80);
	glVertex2f(30+k,85);
	glVertex2f(25+k,80);
	glVertex2f(30+k,70);
	glVertex2f(30+k,65);
	glVertex2f(40+k,65);
	glVertex2f(40+k,60);
	glVertex2f(50+k,65);
	glEnd();
	glPopMatrix();
	}
	else 
		k=100;


	triangle(-100,0,-60,30,10,0,0,0.5,0.1);
	triangle(-40,0,0,100,60,0,0.1,0.6,0);
	triangle(30,0,100,60,100,0,0,0.5,0.1);

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

	if(r==0 && g==0 && b==0)
	{
		
		r=0.1;
		g=0.5;
		b=1;
	}
	else
	{

		r=0;
		g=0;
		b=0;
	}
	glPushMatrix();
	glColor3f(r,g,b);
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
	glVertex2f(-14,75);
	glVertex2f(-20,80);
	glVertex2f(-20,86);
	glVertex2f(-15,85);
	glVertex2f(-8,80);

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0,1,0);
	glTranslatef(-15,80,0);
	circle(2);
	glPopMatrix();

	line(-10,75,-13,79,0,0,1);
	glutPostRedisplay();


	//body
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,1);
	glVertex2f(-4,52);
	glVertex2f(-4,52);
	glVertex2f(-10,52);
	glVertex2f(-11,51);
	glVertex2f(-17,48);
	glVertex2f(-18,47.5); 
	glVertex2f(-19,47);
	glVertex2f(-20,46);
	glVertex2f(-20,45);
	glVertex2f(-21,44);
	glVertex2f(-22,43);
	glVertex2f(-23,42);
	glVertex2f(-23,41);
	glVertex2f(-24,40);
	glVertex2f(-24,39);
	glVertex2f(-24,38);
	glVertex2f(-23,36);
	glVertex2f(-22.5,35);
	glVertex2f(-22,34);
	glVertex2f(-21,33);
	glVertex2f(-21,32);
	glVertex2f(-20,31);
	glVertex2f(-19,30);
	glVertex2f(-18,28);
	glVertex2f(-15,25);
	glVertex2f(-11,20);
	glVertex2f(-11,19);
	glVertex2f(-10,18);
	glVertex2f(-9,17);
	glVertex2f(-8,16);
	glVertex2f(-7,15);
	glVertex2f(-6,14);
	glVertex2f(0,10);
	glVertex2f(3,8);
	glVertex2f(5,7);
	glVertex2f(10,7);
	glVertex2f(12,8);
	glVertex2f(9,12);
	glVertex2f(8,14);
	glVertex2f(8,20);
	glVertex2f(10,25);
	glVertex2f(12,28);
	glVertex2f(17,35);
	glVertex2f(12,48);
	glVertex2f(10,50);
	glVertex2f(2,48);
	glVertex2f(-4,48);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-24,39);
	glVertex2f(-24,38);
	glVertex2f(-23,36);
	glVertex2f(-22.5,35);
	glVertex2f(-22,34);
	glVertex2f(-21,33);
	glVertex2f(-21,32);
	glVertex2f(-20,31);
	glVertex2f(-19,30);
	glVertex2f(-18,28);
	glVertex2f(-15,25);
	glVertex2f(-11,20);
	glVertex2f(-11,19);
	glVertex2f(-10,18);
	glVertex2f(-9,17);
	glVertex2f(-8,16);
	glVertex2f(-7,15);
	glVertex2f(-6,14);
	glVertex2f(0,10);
	glVertex2f(3,8);
	glVertex2f(5,7);
	glVertex2f(10,7);
	glVertex2f(12,8);
	glVertex2f(15,0);
	glVertex2f(3,0);
	glVertex2f(-10,7);
	glVertex2f(-13,10);
	glVertex2f(-20,19);
	glVertex2f(-28,32);
	glVertex2f(12,8);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(3,0);
	glVertex2f(-10,7);
	glVertex2f(-13,10);
	glVertex2f(-20,19);
	glVertex2f(-20,0);
	glVertex2f(3,0);
	glEnd();
	glPopMatrix();

	




	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(0,20);
	glVertex2f(-16,41);
	glVertex2f(-16,48);
	glVertex2f(-19,52);
	glVertex2f(-12,52);
	glVertex2f(-11,50);
	glVertex2f(-11,43);
	glVertex2f(0,30);
	glEnd();
	glPopMatrix();


	//flute
	rectangle(0,53,0,55,-40,50,-40,48,0.8,0.6,0.2  );


	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-25,24);
	glVertex2f(-29,21);
	glVertex2f(-43,0);
	glVertex2f(-40,-4);
	glVertex2f(-42,-12);
	glVertex2f(-40,-10);
	glVertex2f(-30,-10);
	glVertex2f(-25,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	
	glBegin(GL_LINE);
	glColor3f(1,1,0);
	glVertex2f(-10,50);
	glVertex2f(-10,40);
	glVertex2f(10,40);
	glVertex2f(10,50);
	glEnd();
	glPopMatrix();
	
	glBegin(GL_POINTS);
	glVertex2f(-10,50);
	glVertex2f(-10,48);
	glVertex2f(-10,46);
	glVertex2f(-10,44);
	glVertex2f(-10,42);
	glVertex2f(-10,40);
	glVertex2f(-8,40);
	glVertex2f(-6,40);
	glVertex2f(-4,40);
	glVertex2f(-2,40);
	glVertex2f(0,40);
	glVertex2f(2,40);
	glVertex2f(4,40);
	glVertex2f(6,40);
	glVertex2f(6,40);
	glVertex2f(6,42);
	glVertex2f(6,44);
	glVertex2f(6,46);
	glVertex2f(6,48);
	glEnd();



	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-20,-10);
	glVertex2f(-10,-10);
	glVertex2f(-10,0);
	glVertex2f(15,0);
	glVertex2f(15,-7);
	glVertex2f(14,-10);
	glVertex2f(5,-40);
	glVertex2f(-15,-40);
	glVertex2f(-20,-30);
	glEnd();
	glPopMatrix();

//shawl
			glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	glVertex2f(-20,48);
	glVertex2f(-10,52);
	glVertex2f(-10,-10);
	glVertex2f(-20,-10);
	glEnd();
	glPopMatrix();



//right hand
		glPushMatrix();
//	glTranslatef(0,30,0);
	   glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(10,51);
	glVertex2f(15,42);
	glVertex2f(17,35);
	
	glVertex2f(0,20);
	glVertex2f(0,30);
	glVertex2f(8,31);
	glVertex2f(10,50);
	glEnd();
	glPopMatrix();


	//hand
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(-28,32);
	glVertex2f(-32,44);
	glVertex2f(-28,51);
	glVertex2f(-37,49);
	glVertex2f(-37,46);
	glVertex2f(-33,43);
	glVertex2f(-29,21);
	glVertex2f(-24,25);
	glEnd();
	glPopMatrix();



	//legs

		glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(-15,-40);
	glVertex2f(0,-40);
	glVertex2f(10,-55);
	glVertex2f(5,-60);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(5,-38);
	glVertex2f(-5,-57);
	glVertex2f(-12,-55);
	glVertex2f(-8,-45);
	glEnd();
	glPopMatrix();


glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(-5,-57);
	glVertex2f(-12,-55);
	glVertex2f(-15,-60);
	glVertex2f(-10,-64);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.5,0.8);
	glVertex2f(5,-60);
	glVertex2f(10,-55);
	glVertex2f(13,-60);
	glVertex2f(10,-61);
	glVertex2f(3,-70);
	glVertex2f(1,-68);
	glVertex2f(3,-67);
glVertex2f(0,-64);
	glEnd();
	glPopMatrix();
	

	//music
	r1=rand()%10;
	g1=rand()%10;
	b1=rand()%10;

	glBegin(GL_LINES);
	glColor3f(r1,g1,b1);
	glVertex2f(-45,40);
	glVertex2f(-45,50);
	glVertex2f(-45,50);
	glVertex2f(-50,50);
	glVertex2f(-50,50);
	glVertex2f(-50,40);
	glEnd();



	glBegin(GL_LINES);
	glVertex2f(-55,35);
	glVertex2f(-55,40);
	glVertex2f(-55,40);
	glVertex2f(-60,40);
	glVertex2f(-60,40);
	glVertex2f(-60,35);
	glEnd();


	glBegin(GL_LINES);
	glVertex2f(-60,45);
	glVertex2f(-60,55);
	glVertex2f(-60,55);
	glVertex2f(-65,55);
	glVertex2f(-65,55);
	glVertex2f(-65,45);
	glEnd();


	
	rectangle(-20,0,-20,-3,15,3,15,0,1,1,0);


	glutPostRedisplay();
		glFlush();
	
}
