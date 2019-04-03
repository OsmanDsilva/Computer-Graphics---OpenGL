#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i;

void circle(GLdouble rad)
{
	GLint points = 50;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	glBegin(GL_POLYGON);
	{
		for (i = 0; i <= 50; i++, theta += delTheta)
		{
			glVertex2f(rad * cos(theta), rad * sin(theta));
		}
	}
	glEnd();
}

void car1()
{
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex3f(.2,.7, 0);
	glVertex3f(.35,.7,0);
	glVertex3f(.35,.1,0);
	glVertex3f(.2,.1,0);
	glEnd();

	glColor3f(0.6, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex3f(0.22,0.45, 0);
	glVertex3f(0.33,0.45, 0);
	glVertex3f(0.33,0.14, 0);
	glVertex3f(0.22,0.14, 0);
	glEnd();

	glColor3f(1.0,0,0);
	glBegin(GL_POLYGON);
	glVertex3f(0.23,.43, 0);
	glVertex3f(0.32,.43, 0);
	glVertex3f(.32,.16, 0);
	glVertex3f(0.23,0.16, 0);
	glEnd();
}



void treeTop()

{
	//left tree

	glPushMatrix();
	glColor3f(0.0, 0.5, 0.0);
	glTranslatef(-30.0, 15.0, 0);
	circle(6);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.0, 0.5, 0.0);
	glTranslatef(-45.0, -35.0, 0);
	circle(4);
	glPopMatrix();

	//right tree
	glPushMatrix();
	glColor3f(0.0, 0.5, 0.0);
	glTranslatef(23.0, 30.0, 0);
	circle(5);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.0, 0.5, 0.0);
	glTranslatef(36.0, -20.0, 0);
	circle(6);
	glPopMatrix();

}



void init(void)
{
	glClearColor(0,1,0,0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.1f, 0.1f, 0.1f);  //black road
	glBegin(GL_QUADS);
	glVertex2f(-12.5, 50.0);
	glVertex2f(12.5, 50.0);
	glVertex2f(12.5, -50.0);
	glVertex2f(-12.5, -50.0);
	glEnd();

	glColor4f(255.0, 255.0, 0.0, 1.0);  //yellow strip
	glBegin(GL_QUADS);
	glVertex2f(-1.0, 50.0);
	glVertex2f(1.0, 50.0);
	glVertex2f(1.0, -50.0);
	glVertex2f(-1.0, -50.0);
	glEnd();

	treeTop();

	//Car position
	glPushMatrix();
	glTranslatef(-15,-45, 0);
	glScalef(50, 30, 0);
	car1();
	glPopMatrix();
	glFlush();
}


void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Frame2");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}