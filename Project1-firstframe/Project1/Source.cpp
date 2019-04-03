#include<stdlib.h>
#include<Windows.h>

#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i;
GLfloat cx = 0, str = 500.0, mn = 500.0;
GLfloat sr = 0.0, sg = 0.749, sb = 1.0;



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





void cloudB()

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();

	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

void a()                                        //mini Cloud

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}


void c()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a();
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a();
	glPopMatrix();
}

void cloud()                                     // Three Cloud
{
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
}


void init(void)
{
	glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}
void draw_start_line()
{
	float i, j, k = 0;
	for (i = 0.0; i > -25.0; i = i - 1.25)
	{
		j = 15.0;

		if (k == 0)
		{
			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j, i);
			glVertex2f(j + 1.25, i);
			glVertex2f(j + 1.25, i - 1.25);
			glVertex2f(j, i - 1.25);
			glEnd();

			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 1.25, i);
			glVertex2f(j + 2.5, i);
			glVertex2f(j + 2.5, i - 1.25);
			glVertex2f(j + 1.25, i - 1.25);
			glEnd();

			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 2.5, i);
			glVertex2f(j + 3.75, i);
			glVertex2f(j + 3.75, i - 1.25);
			glVertex2f(j + 2.5, i - 1.25);
			glEnd();

			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 3.75, i);
			glVertex2f(j + 5.0, i);
			glVertex2f(j + 5.0, i - 1.25);
			glVertex2f(j + 3.75, i - 1.25);
			glEnd();

			k = 1;
		}
		else
		{
			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j, i);
			glVertex2f(j + 1.25, i);
			glVertex2f(j + 1.25, i - 1.25);
			glVertex2f(j, i - 1.25);
			glEnd();

			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 1.25, i);
			glVertex2f(j + 2.5, i);
			glVertex2f(j + 2.5, i - 1.25);
			glVertex2f(j + 1.25, i - 1.25);
			glEnd();

			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 2.5, i);
			glVertex2f(j + 3.75, i);
			glVertex2f(j + 3.75, i - 1.25);
			glVertex2f(j + 2.5, i - 1.25);
			glEnd();

			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 3.75, i);
			glVertex2f(j + 5.0, i);
			glVertex2f(j + 5.0, i - 1.25);
			glVertex2f(j + 3.75, i - 1.25);
			glEnd();

			k = 0;
		}

	}
}


void draw_tree()
{	
	//1st tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.6, 0.1);
	glVertex2f(-0.5, 0.1);
	glVertex2f(-0.5, 0.2);
	glVertex2f(-0.6, 0.2);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.35, 0.2);
	glVertex2f(-0.45, 0.3);
	glVertex2f(-0.65, 0.3);
	glVertex2f(-0.75, 0.2);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4, 0.3);
	glVertex2f(-0.5, 0.4);
	glVertex2f(-0.6, 0.4);
	glVertex2f(-0.7, 0.3);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.45, 0.4);
	glVertex2f(-0.55, 0.5);
	glVertex2f(-0.65, 0.4);
	glEnd();

	//2nd tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.6, 0.1);
	glVertex2f(0.5, 0.1);
	glVertex2f(0.5, 0.2);
	glVertex2f(0.6, 0.2);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.35, 0.2);
	glVertex2f(0.45, 0.3);
	glVertex2f(0.65, 0.3);
	glVertex2f(0.75, 0.2);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.4, 0.3);
	glVertex2f(0.5, 0.4);
	glVertex2f(0.6, 0.4);
	glVertex2f(0.7, 0.3);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.45, 0.4);
	glVertex2f(0.55, 0.5);
	glVertex2f(0.65, 0.4);
	glEnd();
}


void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 50.0);
	glVertex2f(50.0, 50.0);
	glVertex2f(50.0, 12.5);
	glVertex2f(-50.0, 12.5);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 12.5);
	glVertex2f(50.0, 12.5);
	glVertex2f(50.0, 0.0);
	glVertex2f(-50.0, 0.0);
	glEnd();


	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 0.0);
	glVertex2f(50.0, 0.0);
	glVertex2f(50.0, -25.0);
	glVertex2f(-50.0, -25.0);
	glEnd();

	glColor4f(255.0, 255.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -11.25);
	glVertex2f(50.0, -11.25);
	glVertex2f(50.0, -13.75);
	glVertex2f(-50.0, -13.75);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -25.0);
	glVertex2f(50.0, -25.0);
	glVertex2f(50.0, -50.0);
	glVertex2f(-50.0, -50.0);
	glEnd();
	


	glPushMatrix();                             //sun
	glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-20.0, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();
	

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cx, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	draw_start_line();
	draw_tree();
	

	glFlush();
}
void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Frame1");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}