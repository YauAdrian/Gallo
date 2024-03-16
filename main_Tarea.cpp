#include <gl/glut.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>


void Triangulo(){
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(200, 375);
	glVertex2i(175, 175);
	glVertex2i(250, 300);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(2.0, 1.0, 3.0);
	glVertex2i(370, 300);
	glVertex2i(250, 300);
	glVertex2i(335, 200);
	glEnd();
}
void Pentagono(){
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(370, 300);
	glVertex2i(335, 200);
	glVertex2i(490, 300);
	glVertex2i(530, 200);
	glVertex2i(430, 120);
	
}
void Cuadrado(){
	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(250, 300);
	glVertex2i(200, 375);
	glVertex2i(325, 375);
	glVertex2i(370, 300);
	glEnd();
}
void Triangulo2(){
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(490, 300);
	glVertex2i(370, 300);
	glVertex2i(490, 450);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(450, 450);
	glVertex2i(470, 510);
	glVertex2i(540, 450);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(540, 440);
	glVertex2i(540, 400);
	glVertex2i(590, 400);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(515, 400);
	glVertex2i(490, 325);
	glVertex2i(540, 325);
	glEnd();
	
	
}
void linea(){
	glBegin(GL_LINES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(430, 120);
	glVertex2f(430, 60);
	glEnd();
}

void Cuadrado2(){
	glBegin(GL_POLYGON);
	glColor3f(2.0, 0.0, 4.0);
glVertex2i(540, 450);
	glVertex2i(490, 450);
	glVertex2i(490, 400);
	glVertex2i(540, 400);
	glEnd();
}

void myInit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 1.0);
	Triangulo();linea();
	Cuadrado2();
	Pentagono();
	Cuadrado();
	Triangulo2();
	
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Pollo mal optimizado y vandalizado");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;}
