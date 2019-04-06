#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416
GLfloat c1y = -60.0;
GLfloat c1x = -70.0;
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
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(.2, .7, 0);
	glVertex3f(.35, .7, 0);
	glVertex3f(.35, .1, 0);
	glVertex3f(.2, .1, 0);
	glEnd();

	glColor3f(0.6, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex3f(0.22, 0.45, 0);
	glVertex3f(0.33, 0.45, 0);
	glVertex3f(0.33, 0.14, 0);
	glVertex3f(0.22, 0.14, 0);
	glEnd();

	glColor3f(1.0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(0.23, .43, 0);
	glVertex3f(0.32, .43, 0);
	glVertex3f(.32, .16, 0);
	glVertex3f(0.23, 0.16, 0);
	glEnd();
}


void treeTop()

{
	//left tree

	glPushMatrix();
	glColor3f(0.0, 0.5, 0.0);
	glTranslatef(-10.0, 30.0, 0);
	circle(7);
	glPopMatrix();


	//right tree
	glPushMatrix();
	glColor3f(0.0, 0.5, 0.0);
	glTranslatef(-5.0, -30.0, 0);
	circle(5);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.0, 0.5, 0.0);
	glTranslatef(36.0, -20.0, 0);
	circle(7);
	glPopMatrix();

}

void init(void)
{
	glClearColor(0, 1, 0, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

void spinDisplay()
{
	c1x = c1x + .1;
	c1y = c1y + .1;
	//if (c1x > 70 || c1y >70)
		//c1x = -70;
		//c1y = -70;

	glutPostRedisplay();
}
void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT);

	//track
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.1, 0.1); 
	glVertex3f(38, 50, 0);
	glVertex3f(50,50,0);
	glVertex3f(50,38,0);
	glVertex3f(-38,-50, 0);
	glVertex3f(-50, -50, 0);
	glVertex3f(-50,-38,0);
	glEnd();

	//yellow strip
	glBegin(GL_POLYGON);
	glColor4f(255,255,0,1);
	glVertex3f(49, 50, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(50, 49, 0);
	glVertex3f(-49, -50, 0);
	glVertex3f(-50, -50, 0);
	glVertex3f(-50, -49, 0);
	glEnd();

	treeTop();

	//Car position
	glPushMatrix();
	glTranslatef(c1x,c1y, 0);
	glScalef(40, 20, 0);
	glRotatef(-37, 1,1,1);
	car1();
	glPopMatrix();
	
	glFlush();
}


void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Frame3");
	init();
	glutDisplayFunc(display);
	glutIdleFunc(spinDisplay);
	glutMainLoop();
}