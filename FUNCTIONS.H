#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
void triangle(float x1,float x2,float y1,float y2,float z1,float z2,float c1,float c2,float c3);
void black_triangle(float x1,float x2,float y1,float y2,float z1,float z2);
void boundary_triangle(float x1,float x2,float y1,float y2,float z1,float z2,float c1,float c2,float c3);
void line(float x1,float x2,float y1,float y2,float c1,float c2,float c3);
void black_line(float x1,float x2,float y1,float y2);
void rectangle(float x1,float x2,float y1,float y2,float z1,float z2,float m1,float m2,float c1,float c2,float c3);
void default_rectangle(float xmax,float ymax,float xmin,float ymin);
void boundary_rectangle(float x1,float x2,float y1,float y2,float z1,float z2,float m1,float m2,float c1,float c2,float c3);
void fish(float x1,float x2,float y1,float y2,float z1,float z2,float m1,float m2);
#endif