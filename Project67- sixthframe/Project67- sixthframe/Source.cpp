#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416
GLint i;

void keys()
{
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(0, 2, 0);
	glVertex3f(2, 2, 0);
	glVertex3f(2, 0, 0);
	glVertex3f(0, 0, 0);
	glEnd();
}

void roundRect(GLdouble rad)
{
	GLint points = 100;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	//screen
	glBegin(GL_QUADS);
	glColor3f(0.5,0.6,0.9);
	glVertex3f(20, 15, 0);//tr
	glVertex3f(-20, 15, 0);//tl
	glVertex3f(-20, -15, 0);//bl
	glVertex3f(20, -15, 0);//br
	glEnd();

	//top padding
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(20, 17, 0);
	glVertex3f(-20, 17, 0);
	glVertex3f(-20, 15, 0);
	glVertex3f(20, 15, 0);
	glEnd();

	//left padding
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-20, 15, 0);
	glVertex3f(-20, -15, 0);
	glVertex3f(-22, -15, 0);
	glVertex3f(-22, 15, 0);
	glEnd();

	//bottom padding
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-22, -15, 0);
	glVertex3f(22, -15, 0);
	glVertex3f(22, -17, 0);
	glVertex3f(-22, -17, 0);
	glEnd();

	//right padding
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(20, 15, 0);
	glVertex3f(20, -15, 0);
	glVertex3f(22, -15, 0);
	glVertex3f(22, 15, 0);
	glEnd();

	//keyboard
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(22, -17, 0);
	glVertex3f(-22, -17, 0);
	glVertex3f(-22, -35, 0);
	glVertex3f(22, -35, 0);
	glEnd();

	//right rounded corner
	glPushMatrix();
	glTranslatef(20, 15, 0);
	glBegin(GL_TRIANGLE_FAN);
	{	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(0, 0, 0);
	for (i = 0; i <= 25; i++, theta += delTheta)
	{
		glVertex2f(rad * cos(theta), rad * sin(theta));
	}
	}
	glEnd();
	glPopMatrix();

	theta -= delTheta;

	//left rounded corner
	glPushMatrix();
	glTranslatef(-20, 15, 0);
	glBegin(GL_TRIANGLE_FAN);
	{	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(0, 0, 0);
	for (i = 0; i <= 25; i++, theta += delTheta)
	{
		glVertex2f(rad * cos(theta), rad * sin(theta));
	}
	}
	glEnd();
	glPopMatrix();



	//keys
	for (GLint i = 0; i > -13; i -= 3)
		for (GLint j = 0; j < 40; j += 3)
		{
			glPushMatrix();
			glTranslatef(-20 + j, -21 + i, 0);
			keys();
			glPopMatrix();
		}

}

void bitmap_output(int x, int y, const char *string, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (int)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}
}


void init(void)
{
	glClearColor(0.5, 0.9, 0.9, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

void ad()
{
	glColor3f(1, 0, 0);
	bitmap_output(-8, 8, "Razor Laptops", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, 2, "Super fast processing thanks to", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, 0, "the powerful intel i9 processor", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-14, -4, "Built by gamers for gamers", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-12, -9, "Starting at Rs. 95,000/-", GLUT_BITMAP_HELVETICA_18);
	
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	roundRect(2);
	
	ad();
	
	glFlush();
}


int main(int argc, char ** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Six frame");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}