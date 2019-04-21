

#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<string.h>
#include"functions.h"
 

int i=0,x=0,y=0,z=0;

char str1[]="SRINIVAS INSTITUTE OF TECHNOLOGY, VALACHIL, MANGALURU-574143";
char str2[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
char str3[]="COMPUTER GRAPHICS LABORATORY";
char str4[]="MINI PROJECT";
char str5[]="ON";
char str6[]="DASHAVATARA";
char str7[]="TEAM MEMBERS";
char str8[]="APOORVA N-4SN16CS704";
char str9[]="NAVYA Y-4SN16CS725";
char str10[]="PROJECT GUIDE ";
char str11[]="MR.SUDARSHAN K ";
char str12[]="Press S to enter";
char str13[]=" ASSOCIATE PROFESSOR ";
char str14[]="6th SEM CS-C";

void display(void){
  
	glClear(GL_COLOR_BUFFER_BIT);
	
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0,0);
    glColor3f(0,0,0);
    glVertex2f(1000,0);
    glColor3f(0,0,0);
    glVertex2f(1000,1000);
    glColor3f(0,0,0);
    glVertex2f(0,1000);
    glEnd();
    
    glColor3f(1,1,1);
    
    glRasterPos2f(190,950); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str1);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);		
	

	glRasterPos2f(250,900); 
	for(i=0;i<strlen(str2);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);		
			

	glRasterPos2f(330,850); 
	for(i=0;i<strlen(str3);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
	
	glRasterPos2f(400,800); 
	for(i=0;i<strlen(str4);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);

	glRasterPos2f(440,750); 
	for(i=0;i<strlen(str5);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);		
	
	glRasterPos2f(390,700);
    for(i=0;i<strlen(str6);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);		

	glRasterPos2f(50,300); //calculate points by refering previous text positions
	for(i=0;i<strlen(str7);i++) 
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);		

	glRasterPos2f(50,250); 
	for(i=0;i<strlen(str8);i++) 
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);		

	glRasterPos2f(50,200); 
	for(i=0;i<strlen(str9);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[i]);		

	glRasterPos2f(820,300); 
	for(i=0;i<strlen(str10);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);		

	glRasterPos2f(810,250); 
	for(i=0;i<strlen(str11);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[i]);		
	
	glRasterPos2f(430,50); 
	for(i=0;i<strlen(str12);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[i]);	
	
	glRasterPos2f(790,200);
	for(i=0;i<strlen(str13);i++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[i]);	
	
	glRasterPos2f(50,150);
	for(i=0;i<strlen(str14);i++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);	
	

	glFlush();
    
}
