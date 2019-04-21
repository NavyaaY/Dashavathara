#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<math.h>
#include"FUNCTIONS.h"
#include <stdlib.h> 
void keys(unsigned char key1,int x,int y)
{
	if(key1=='s')
	{
				 glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
				 glutInitWindowPosition(0,0);
				glutInitWindowSize(50,50);
		   		 glutCreateWindow("Certificate");
			   myInit2(); 
			   glutDisplayFunc(koormadisp);
	 }
			   glutMainLoop();
	
}