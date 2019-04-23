#include<stdio.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<math.h>
#include"FUNCTIONS.h"
#include <stdlib.h> 

int id1,id2;
void keys(unsigned char key1,int x,int y)

{
	if(key1=='s')
	{
		    	 glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
				 glutInitWindowPosition(0,0);
				 glutInitWindowSize(50,50);
		     	 id1=glutCreateWindow("Certificate");
				 glutFullScreen();
			     myInit2(); 
			     glutDisplayFunc(koormadisp);
				 //sndPlaySound(TEXT("01_Gapu_Gapalli.wav"),SND_ASYNC);
	 }
			     glutMainLoop();
}

void keys1(unsigned char key1,int x,int y)
{
	if(key1=='a')
	{
				glutDestroyWindow(id1);
		    	 glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
				 glutInitWindowPosition(0,0);
				 glutInitWindowSize(50,50);
		     	 id2=glutCreateWindow("Certificate");
				 glutFullScreen();
			     myInit2(); 
			     glutDisplayFunc(narasimhadisp);
	 }
			     glutMainLoop();
}


		
