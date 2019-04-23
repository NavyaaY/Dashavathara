#include<GL/glut.h>
#include<GL/glu.h>
#include"functions.h"
#include<stdlib.h>
#include<math.h>
#define DEG2RAD 3.14159/180.0
int r7=0;
int r5=0,g5=0,b5=0;
/*void circle(float r)
{
	int j;

glBegin(GL_POLYGON);
	{
		
		for(j=0;j<360;j++)
		
			glVertex2f(r7*cos(j),r7*sin(j));
	}
         glEnd();
	 
}*/



void DrawEllipse(float radiusX,float radiusY)
{
	int i;
	glBegin(GL_POLYGON);
		for(i=0;i<360;i++)
		{
			float r=i*DEG2RAD;
			glVertex2f(cos(r7)*radiusX,sin(r7)*radiusY);
		}
		glEnd();
}



void vamanadisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);
		glColor3f(0.4,0.2,0.1);//tree branch
	glVertex2f(-57.5,-40);
	glVertex2f(-37.5,-40);
	glVertex2f(-42.5,50);
	glVertex2f(-52.5,50);
	glEnd();
glFlush();

//eye

if(r5==0 && g5==0 && b5==0)
	{
		
		r5=0.1;
		g5=0.5;
		b5=1;
	}
	else
	{

		r5=0;
		g5=0;
		b5=0;
	}
glBegin(GL_POLYGON);
		glColor3f(0.4,0.7,0.2);
	glVertex2f(-52.5,50);//tree hexagon
	glVertex2f(-57.5,65);
	glVertex2f(-52.5,80);
	glVertex2f(-42.5,80);
	glVertex2f(-37.5,65);
	glVertex2f(-42.5,50);
	glEnd();
	triangle(-52.5,50,-65,45,-57.5,65,0.4,0.7,0.2);//tree leaf
	triangle(-57.5,65,-65,85,-52.5,80,0.4,0.7,0.2);
    triangle(-52.5,80,-47.5,100,-42.5,80,0.4,0.7,0.2);
	triangle(-42.5,80,-30,85,-37.5,65,0.4,0.7,0.2);
	triangle(-37.5,65,-32.5,45,-42.5,50,0.4,0.7,0.2);

    glFlush();


rectangle(-500,50,-500,200,500,200,500,50,0.2,1,1);
	
	rectangle(-500,50,-500,-100,500,-100,500,50,0.3,0.4,0.3);
	black_line(15,75,15,45);

	

	
rectangle(-5,46,-5,40,5,40,5,46,0.9,0.8,0.6);//3


	
 rectangle(-10,40,-10,-15,10,-15,10,40,0.9,0.8,0.6);//4
 line(-5,40,-2.5,25,0.5,0.2,0.1);
 line(-2.5,25,2.5,25,0.5,0.2,0.1);
 line(5,40,2.5,25,0.5,0.2,0.1);
 rectangle(-1,25,-1,23,1,23,1,25,0.5,0.2,0.1);
line(-10,0,10,40,1,0.8,1);
glBegin(GL_POLYGON);//
	glColor3f(0.8,0.4,0.3);
glVertex2f(-10,0);
glVertex2f(-10,-15);
glVertex2f(-1.8,-15);
glVertex2f(0,0);

	glEnd();
     glFlush();

glBegin(GL_POLYGON);//
	glColor3f(0.8,0.4,0.3);
glVertex2f(10,0);
glVertex2f(10,-15);
glVertex2f(1.8,-15);
glVertex2f(0,0);

	glEnd();
     glFlush();




	triangle(-10,-15,-15,-20,-10,-20,0.8,0.4,0.3);//5
	rectangle(-10,-15,-10,-20,10,-20,10,-15,0.9,0.8,0.6);




		 glBegin(GL_POLYGON);//
	glColor3f(0.8,0.4,0.3);
glVertex2f(-10,-15);
glVertex2f(-10,-20);
glVertex2f(-2.5,-20);
glVertex2f(-1.8,-15);

	glEnd();
     glFlush();

	 
		 glBegin(GL_POLYGON);//
	glColor3f(0.8,0.4,0.3);
glVertex2f(10,-15);
glVertex2f(10,-20);
glVertex2f(2.5,-20);
glVertex2f(1.8,-15);

	glEnd();
     glFlush();

	triangle(-2.5,-20,0,0,2.5,-20,0.9,0.5,0);//cloth
	rectangle(-7.5,-20,-7.5,-41,-1.5,-41,-1.5,-20,0.9,0.8,0.6);
	triangle(-7.5,-41,-10,-47,-7.5,-47,0.3,0.2,0.2);
	rectangle(-7.5,-41,-7.5,-47,-1.5,-47,-1.5,-41,0.3,0.2,0.2);
	triangle(7.5,-30,7.5,-35,12,-30,0.3,0.2,0.2);

triangle(10,-40,7.5,-45,12.5,-45,0.0,0.3,0.4);//mahabali
rectangle(7.5,-45,7.5,-50,12.5,-50,12.5,-45,0.9,0.8,0.6);
rectangle(6,-53,4,-53,4,-55,6,-55,0.9,0.8,0.6);
rectangle(8,-46,8,-47,8.5,-47,8.5,-46,0.0,0.0,0.0);
black_line(7.5,-48,9,-48);
glBegin(GL_POLYGON);//1
	glColor3f(0.9,0.8,0.6);
glVertex2f(-10,40);
glVertex2f(-25,10);
glVertex2f(-18.5,10);
glVertex2f(-10,20);

	glEnd();
     glFlush();


glBegin(GL_POLYGON);//2
	glColor3f(0.9,0.8,0.6);
glVertex2f(-25,10);
glVertex2f(-18.5,10);
glVertex2f(-10,2);
glVertex2f(-10,-2.8);

	glEnd();
     glFlush();
	 

glBegin(GL_POLYGON);//2
	glColor3f(0.9,0.8,0.6);
glVertex2f(1.5,-20);
glVertex2f(1.5,-35);
glVertex2f(7.5,-30);
glVertex2f(7.5,-20);

	glEnd();
     glFlush();
black_line(-12,4,-16,-5);
triangle(-17.5,-1,-18.5,-13,-13,-6,0.1,0.3,0.3);
/*glBegin(GL_POLYGON);
glColor3f(0.6,0.7,0);
glVertex2f(-15,-5);	
glVertex2f(-12,-10);
glVertex2f(-17.5,-8);		 
glVertex2f(-13,-15);
	glEnd();
     glFlush();
	*/
glBegin(GL_POLYGON);//2
	glColor3f(0.3,0.2,0.2);
glVertex2f(1.5,-35);
glVertex2f(4,-40);
glVertex2f(7.5,-35);
glVertex2f(7.5,-30);

	glEnd();
     glFlush();

glBegin(GL_POLYGON);//2
	glColor3f(0.9,0.8,0.6);
glVertex2f(7.5,-50);
glVertex2f(7.5,-53);
glVertex2f(6,-53);
glVertex2f(6,-57);
glVertex2f(12.5,-57);
glVertex2f(12.5,-50);
	glEnd();
     glFlush();


glBegin(GL_POLYGON);//2
	glColor3f(0.8,0.4,0.0);
glVertex2f(6,-57);
glVertex2f(5,-65);
glVertex2f(10,-65);
glVertex2f(12.5,-57);

	glEnd();
     glFlush();
	 

glBegin(GL_POLYGON);//2
	glColor3f(0.8,0.4,0.0);
glVertex2f(11.5,-60);
glVertex2f(10,-65);
glVertex2f(15,-65);
glVertex2f(15,-60);

	glEnd();
     glFlush();


glBegin(GL_POLYGON);//left arm
	glColor3f(0.9,0.8,0.6);
glVertex2f(10,40);
glVertex2f(10,20);
glVertex2f(15,15);
glVertex2f(17.5,25);

	glEnd();
     glFlush();
	black_line(15,45,15,10);
	 glBegin(GL_POLYGON);//left hand
	glColor3f(0.9,0.8,0.6);
glVertex2f(17.5,25);
glVertex2f(15,15);
glVertex2f(23,15);
glVertex2f(25,25);

	glEnd();
     glFlush();


glBegin(GL_POLYGON);//left hand
	glColor3f(0.9,0.8,0.6);
glVertex2f(20,25);
glVertex2f(25,25);
glVertex2f(20,45);
glVertex2f(17,45);

	glEnd();
     glFlush();


glBegin(GL_POLYGON);//left palm
	glColor3f(0.9,0.8,0.6);
glVertex2f(20,45);
glVertex2f(19,50);
glVertex2f(15,50);
glVertex2f(15,45);

	glEnd();
    

glPushMatrix();
glColor3f(0.9,0.8,0.6);
glTranslatef(0,55,0);

circle(11);
glPopMatrix();
line(1,63,1,59,0.4,0,0);
line(1,59,0,59,0.4,0,0);
line(-1,63,-1,59,0.4,0,0);
line(-1,59,0,59,0.4,0,0);
triangle(-5,57,-6,56,-4,56,1,1,1);//left eye upper part
triangle(-5,55,-6,56,-4,56,1,1,1);//left eye lower part

triangle(5,57,6,56,4,56,1,1,1);//right eye upper part
triangle(5,55,6,56,4,56,1,1,1);//right eye lower part
glPointSize(3);

glBegin(GL_POINTS);
	glColor3f(r5,g5,b5);
	glVertex2f(-5,56);
		glVertex2f(5,56);
	glEnd();
line(0,55,-1,53,0.4,0.3,0.3);
line(-1,53,1,53,0.4,0.3,0.3);
triangle(-2.5,50,0,48,2.5,50,0,0,0);//mouth




/*glPushMatrix();//umbrella
glColor3f(0.4,0.2,0.1);
glTranslatef(16,80,0);
circle(17);
glPopMatrix();

 glFlush();*/
 


 /*if(r==0&&g==0&&b==0)
 {
	 r=1.4;
	 g=0;
	 b=0;
 }
 else
 {
	 r=0;
	 g=0;
	 b=0;
 }*/

 /*glPushMatrix();
	 glColor3f(r,g,b);
 glTranslatef(-5,56,0);
 circle(1);
 glPopMatrix();

glPushMatrix();
	 glColor3f(r,g,b);
 glTranslatef(5,56,0);
 circle(1);
 glPopMatrix();
*/


glColor3f(0.4,0.2,0.1);
glTranslatef(8,75,0);
//glRotatef(-45,22,5,0);
	DrawEllipse(22,5);
	glFlush();
//rectangle(-10,20,-10,-25,10,-25,10,20,0.9,0.8,0.6);
/*glBegin(GL_POLYGON);//6
	glColor3f(0.9,0.8,0.6);
glVertex2f(-10,-15);
glVertex2f(-15,-20);
glVertex2f(-12,-10);
glVertex2f(-15,-10);

	glEnd();
     glFlush();*/




}