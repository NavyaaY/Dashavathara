#include<GL/glut.h>
#include<GL/glu.h>
#include"FUNCTIONS.h"
#include <stdlib.h> 
#include <math.h>

void myInit()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glPointSize(5.0);
	glLineWidth(2.0);
	gluOrtho2D(0,1000,0,1000);
}
void myInit2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glPointSize(5.0);
	glLineWidth(2.0);
	gluOrtho2D(-100,100,-100,100);
}
void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(50,50);
	glutCreateWindow("Certificate");
	glutFullScreen();
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);
	myInit();
	glutMainLoop();
}