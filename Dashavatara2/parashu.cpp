#include<GL/glut.h>
#include<GL/glu.h>
#include"functions.h"
#include<stdlib.h>

void parashudisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	rectangle(-500,50,-500,200,500,200,500,50,0.3,0.6,0.9);
	
	rectangle(-500,50,-500,-100,500,-100,500,50,0.4,0.6,0.3);
	
	glBegin(GL_POLYGON);
	//glBegin(GL_LINE_LOOP);
		glColor3f(0,0,0);
	glVertex2f(5,90);
	
	glVertex2f(10,80);
	
	glVertex2f(10,60);
		
	glVertex2f(0,50);
	
	glVertex2f(-10,60);
	
		
	glVertex2f(-10,80);
	
	glVertex2f(-5,90);
	glEnd();
	glFlush();

	

triangle(-10,60,0,40,0,50,0,0,0);
triangle(10,60,0,40,0,50,0,0,0);


glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(-20,25);
glVertex2f(-20,30);
glVertex2f(-15,30);
glVertex2f(-15,25);
glEnd();
	glFlush();





//glColor3f(0.9,0.7,0.6);
triangle(-5,50,0,40,-5.5,40,0.9,0.8,0.6);//a
triangle(5,50,0,40,5.5,40,0.9,0.8,0.6);//b

glBegin(GL_POLYGON);//1
glColor3f(0.9,0.8,0.6);
glVertex2f(-5.5,40);
glVertex2f(-15.5,40);
glVertex2f(-15,30);
glVertex2f(-10.5,30);
glVertex2f(-10.5,-25);
glVertex2f(10.5,-25);
glVertex2f(10.5,30);
glVertex2f(15,30);
glVertex2f(15.5,40);
glVertex2f(5.5,40);
glEnd();
     glFlush();
triangle(-15.5,40,-20,35,-15,30,0.9,0.78,0.6);//c
triangle(15.5,40,20,35,15,30,0.9,0.8,0.6);//d

glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0.6);//2
glVertex2f(20,35);
glVertex2f(20,20);
glVertex2f(15,20);
glVertex2f(15,30);
glEnd();
     glFlush();


	 glBegin(GL_POLYGON);
glColor3f(0.9,0.5,0.2);//cloth1
glVertex2f(-10.5,0);
glVertex2f(10.5,30);
glVertex2f(10.5,14);
glVertex2f(-10.5,-20);
glEnd();
     glFlush();



glBegin(GL_POLYGON);
glColor3f(0.9,0.5,0.2);//cloth2
glVertex2f(-15.5,40);
glVertex2f(-10,40);
glVertex2f(20,-25);
glVertex2f(10.5,-40);
glEnd();
     glFlush();

glBegin(GL_LINES);//chain
glColor3f(0.4,0.2,0.0);
glVertex2f(-5.5,40);
glVertex2f(0,25);
glEnd();
     glFlush();


glBegin(GL_LINES);//chain
glColor3f(0.4,0.2,0.0);
glVertex2f(0,25);
glVertex2f(5.5,40);
glEnd();
     glFlush();


glBegin(GL_POINTS);//pendent
glColor3f(0,0,0);
glVertex2f(0,25);
glVertex2f(-1.5,29);
glVertex2f(1.5,29);
glVertex2f(-2.8,33);
glVertex2f(2.8,33);
glVertex2f(-4.3,37);
glVertex2f(4.3,37);






glEnd();
     glFlush();


triangle(-40,-30,-35,10,-25,-30,0.6,0.7,0.2);//grass
triangle(-38,-15,-45,10,-55,-30,0.6,0.7,0.2);
triangle(-38,-15,-40,-30,-55,-30,0.6,0.7,0.2);




	 glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0.6);//4
glVertex2f(20,20);
glVertex2f(15,20);
glVertex2f(10.5,10.5);
glVertex2f(10.5,0.2);
glEnd();
     glFlush();


glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0.6);//5
glVertex2f(-20,35);
glVertex2f(-20,-0.5);
glVertex2f(-15,-0.5);
glVertex2f(-15,30);
glEnd();
     glFlush();



 glBegin(GL_POLYGON);//3
	glColor3f(0.9,0.5,0.2);
glVertex2f(-10.5,-20.5);
glVertex2f(-15.5,-35);
glVertex2f(10.5,-35);
glVertex2f(10.5,-20.5);
	glEnd();
     glFlush();


 glBegin(GL_POLYGON);//6
	glColor3f(0.9,0.8,0.6);
glVertex2f(-20.5,-0.5);
glVertex2f(-20.5,-10);
glVertex2f(-14,-10);
glVertex2f(-14,-0.5);
	glEnd();
     glFlush();


 glBegin(GL_POLYGON);//kodali handle
	glColor3f(0.5,0.2,0);
glVertex2f(-30,-35);
glVertex2f(-28,-35);
glVertex2f(-18,-10);
glVertex2f(-15,-10);
	glEnd();
     glFlush();


	  glBegin(GL_POLYGON);//kodali
	glColor3f(0.9,0.9,1);
glVertex2f(-32,-35);
glVertex2f(-30,-45);
glVertex2f(-28,-35);
glVertex2f(-30,-30);
	glEnd();
     glFlush();
	

	   glBegin(GL_POLYGON);//INNER FACE left half
	glColor3f(0.9,0.8,0.6);
glVertex2f(-10,60);
glVertex2f(-2.5,80);
glVertex2f(0,75);
glVertex2f(0,50);
	glEnd();
     glFlush();


	 glBegin(GL_POLYGON);//INNER FACE right half
	glColor3f(0.9,0.8,0.6);
glVertex2f(10,60);
glVertex2f(2.5,80);
glVertex2f(0,75);
glVertex2f(0,50);
	glEnd();
     glFlush();
	


	 glBegin(GL_POLYGON);//left eyes
	glColor3f(0.1,0.2,0.2);
glVertex2f(-4.8,68);
glVertex2f(-4.1,67);
glVertex2f(-2.6,67);
glVertex2f(-2.3,68);
glVertex2f(-2.6,70);
glVertex2f(-4.1,70);
	glEnd();
     glFlush();


	 	 glBegin(GL_POLYGON);//right eyes
	glColor3f(0.1,0.2,0.2);
glVertex2f(4.8,68);
glVertex2f(4.1,67);
glVertex2f(2.6,67);
glVertex2f(2.3,68);
glVertex2f(2.6,70);
glVertex2f(4.1,70);
	glEnd();
     glFlush();

	//triangle(-5.5,68,-4.1,70,-4.1,65,0,0,0);//eye
	
	
	rectangle(-2.5,90,-2.5,95,2.5,95,2.5,90,0,0,0);

		rectangle(-20,25,-20,30,-15,30,-15,25,0.7,0.4,0.1);//hand chain
		rectangle(20,25,20,30,15,30,15,25,0.7,0.4,0.1);//hand chain
	
rectangle(-2.5,60,-2.5,58,2.5,58,2.5,60,0.5,0,0.2);

	 glBegin(GL_POLYGON);//LEG
	glColor3f(0.9,0.8,0.6);
glVertex2f(-10,-35);
glVertex2f(-10,-60);
	
glVertex2f(-5,-60);
glVertex2f(-5,-35);
glEnd();
     glFlush();

 glBegin(GL_POLYGON);//leg
	glColor3f(0.9,0.8,0.6);
glVertex2f(10,-35);
glVertex2f(10,-60);
	
glVertex2f(5,-60);
glVertex2f(5,-35);
glEnd();
 glFlush();

 glBegin(GL_POLYGON);//leg
	glColor3f(0.9,0.8,0.6);
glVertex2f(-15,-60);
glVertex2f(-15,-65);
	
glVertex2f(-5,-65);
glVertex2f(-5,-60);
glEnd();
 glFlush();

 glBegin(GL_POLYGON);//leg
	glColor3f(0.9,0.8,0.6);
glVertex2f(0,-60);
glVertex2f(0,-65);
	
glVertex2f(10,-65);
glVertex2f(10,-60);
glEnd();
 glFlush();

 line(15,-10.5,0,0,0,0,0);
}

/*int main(int argc,char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1400,900);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Introduction Page");
	glutDisplayFunc(display);
	//glutFullScreen();
	myInit();
	glutMainLoop();
	return 0;
}*/

