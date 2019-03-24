#include<GL/glut.h>
#include<GL/glu.h>
#include"FUNCTIONS.h"
void myInit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glPointSize(50.0);
	glLineWidth(2.0);
	gluOrtho2D(-100,100,-100,100);
}
void display()
{
	

	//triangle(100,100,300,400,400,100,0.0,1.0,0.0);
	fish(0,0,-5,-5,-10,0,-5,5);
	//line(50,30,100,10,0.0,0.0,1.0);
//	black_line(10,80,80,10);
	glEnd();
	glFlush();
}
void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(500,500);
	glutCreateWindow("example");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}