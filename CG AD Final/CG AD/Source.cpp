#include<string.h>
#include<stdio.h>
#include<stdarg.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
#define PI 3.1416

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

void intro()
{
	bitmap_output(-20, 40, "Dayanana Sagar College of Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, 30, "Computer Graphics Project", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, 20, "Advertisement for Laptop", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-12, 5, "Press spacebar to start", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-10, 0, "Press ESC to exit", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -20, "Project By:", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -25, "Osman C Dsilva		1DS16CS074", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -30, "Nandan	M	1DS16CS067", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -35, "Samarth S Kulkarni		1DS16CS096", GLUT_BITMAP_TIMES_ROMAN_24);
}


//first frame construction
GLint i;
GLfloat f1c1x = 25.0;
GLfloat f1c2x = 5.0;
GLfloat f1c3x = -10.0;

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
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();
}
//mini Cloud
void a()                                        
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

void car1()
{
	//bottom
	glColor3f(1.0, 0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.9, 0.2, 0);
	glVertex3f(-0.87, 0.5, 0);
	glVertex3f(-0.52, 0.5, 0);
	glEnd();

	//front
	glColor3f(1.0, 0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.43, 0.2, 0);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.52, 0.5, 0);
	glVertex3f(-0.46, 0.45, 0);
	glEnd();

	//top
	glColor3f(0.6, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0);
	glVertex3f(-0.83, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glVertex3f(-0.56, 0.8, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.65, 0.2, 0);
	glVertex3f(-0.65, 0.5, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.65, 0.5, 0);
	glVertex3f(-0.68, 0.79, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.75, 0.2, 0);
	glVertex3f(-0.75, 0.5, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.75, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.55, 0.2, 0);
	glVertex3f(-0.55, 0.5, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.55, 0.5, 0);
	glVertex3f(-0.58, 0.77, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.6, 0.4, 0);
	glVertex3f(-0.62, 0.4, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-0.7, 0.4, 0);
	glVertex3f(-0.72, 0.4, 0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.02);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.02);
	glPopMatrix();
}

void car2()
{
	//bottom
	glColor3f(0.2, 0, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.9, 0.2, 0);
	glVertex3f(-0.87, 0.5, 0);
	glVertex3f(-0.52, 0.5, 0);
	glEnd();

	//front
	glColor3f(0.2, 0, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.43, 0.2, 0);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.52, 0.5, 0);
	glVertex3f(-0.46, 0.45, 0);
	glEnd();

	//top
	glColor3f(0.6, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0);
	glVertex3f(-0.83, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glVertex3f(-0.56, 0.8, 0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.02);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.02);
	glPopMatrix();
}

void car3()
{
	//bottom
	glColor3f(0.6, 0.1, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.9, 0.2, 0);
	glVertex3f(-0.87, 0.5, 0);
	glVertex3f(-0.52, 0.5, 0);
	glEnd();

	//front
	glColor3f(0.6, 0.1, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.43, 0.2, 0);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.52, 0.5, 0);
	glVertex3f(-0.46, 0.45, 0);
	glEnd();

	//top
	glColor3f(0.6, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0);
	glVertex3f(-0.83, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glVertex3f(-0.56, 0.8, 0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.02);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.02);
	glPopMatrix();
}
//One Single Cloud
void c()                                        
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
// Three Cloud
void cloud()                                     
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
	glVertex2f(-30.0, 5.0);
	glVertex2f(-25.0, 5.0);
	glVertex2f(-25.0, 10.0);
	glVertex2f(-30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-17.5, 10.0);
	glVertex2f(-22.5, 15.0);
	glVertex2f(-32.5, 15.0);
	glVertex2f(-37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-20.0, 15.0);
	glVertex2f(-25.0, 20.0);
	glVertex2f(-30.0, 20.0);
	glVertex2f(-35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.5, 20.0);
	glVertex2f(-27.5, 25.0);
	glVertex2f(-32.5, 20.0);
	glEnd();

	//2nd tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(30.0, 5.0);
	glVertex2f(25.0, 5.0);
	glVertex2f(25.0, 10.0);
	glVertex2f(30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(17.5, 10.0);
	glVertex2f(22.5, 15.0);
	glVertex2f(32.5, 15.0);
	glVertex2f(37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(20.0, 15.0);
	glVertex2f(25.0, 20.0);
	glVertex2f(30.0, 20.0);
	glVertex2f(35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.5, 20.0);
	glVertex2f(27.5, 25.0);
	glVertex2f(32.5, 20.0);
	glEnd();
}
//first frame end


//second frame construction
GLfloat f2c1y = -60.0;

void carTop()
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
//second frame end


//third frame construction
GLfloat f3c1y = -60.0;
GLfloat f3c1x = -70.0;

void carToprot()
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

void treeToprot()

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
//third frame end


//fourth frame construction

GLfloat f4c1x = -10.0;

//fourth frame end


//fifth frame construction
GLfloat f5c1x = -10.0;

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
	glColor3f(0.5, 0.6, 0.9);
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
			glTranslatef(-20.5 + j, -21 + i, 0);
			keys();
			glPopMatrix();
		}
	//keyboard bottom padding
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-20, -35, 0);
	glVertex3f(20, -35, 0);
	glVertex3f(20, -37, 0);
	glVertex3f(-20, -37, 0);
	glEnd();
	
	theta -= delTheta;

	//bottom left rounded corner
	glPushMatrix();
	glTranslatef(-20, -35, 0);
	glBegin(GL_TRIANGLE_FAN);
	{	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(0, 0, 0);
	for (i = 0; i <= 25; i++, theta += delTheta)
	{
		glVertex2f(rad * cos(theta), rad * sin(theta));
	}
	}
	glEnd();
	glPopMatrix();

	theta -= delTheta;

	//bottom right rounded corner
	glPushMatrix();
	glTranslatef(20, -35, 0);
	glBegin(GL_TRIANGLE_FAN);
	{	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(0, 0, 0);
	for (i = 0; i <= 25; i++, theta += delTheta)
	{
		glVertex2f(rad * cos(theta), rad * sin(theta));
	}
	}
	glEnd();
	glPopMatrix();

}

void finalscene()
{
	//blue
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4, 0.3, 0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 50.0);
	glVertex2f(50.0, 50.0);
	glVertex2f(50.0, 12.5);
	glVertex2f(-50.0, 12.5);
	glEnd();
	glTranslatef(-20, 15, 0);
	glPopMatrix();

	//green
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4, 0.3, 0);
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 12.5);
	glVertex2f(50.0, 12.5);
	glVertex2f(50.0, 0.0);
	glVertex2f(-50.0, 0.0);
	glEnd();
	glTranslatef(-20, 26.5, 0);
	glPopMatrix();

	//road
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4, 0.3, 0);
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 0.0);
	glVertex2f(50.0, 0.0);
	glVertex2f(50.0, -25.0);
	glVertex2f(-50.0, -25.0);
	glEnd();
	glTranslatef(-20, 34, 0);
	glPopMatrix();

	//yellow
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4, 0.3, 0);
	glColor4f(255.0, 255.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -11.25);
	glVertex2f(50.0, -11.25);
	glVertex2f(50.0, -13.75);
	glVertex2f(-50.0, -13.75);
	glEnd();
	glTranslatef(-20, 34.75, 0);
	glPopMatrix();

	//green
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4, 0.3, 0);
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -25.0);
	glVertex2f(50.0, -25.0);
	glVertex2f(50.0, -50.0);
	glVertex2f(-50.0, -50.0);
	glEnd();
	glTranslatef(-20, 41.5, 0);
	glPopMatrix();


	//SUN
	glPushMatrix();
	glTranslatef(-9, 12, 0);
	glScalef(1.0, 1.5, 0.0);
	glScalef(0.4, 0.3, 0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glTranslatef(-1, 6, 0);
	glScalef(0.4, 0.3, 0);
	glColor3f(1, 1, 1);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(-1, 5, 0);
	glScalef(0.4, 0.3, 0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(-2, -1, 0);
	glScalef(0.4, 0.3, 0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	//finish line
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4, 0.3, 0);
	draw_start_line();
	glPopMatrix();

	//trees
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4, 0.3, 0);
	draw_tree();
	glPopMatrix();

	//CARS
	glPushMatrix();
	glTranslatef(f5c1x, -5, 0);
	glScalef(13, 6.5, 0);
	car1();
	glPopMatrix();
}
//fifth  frame end


//sixth frame construction
void ad()
{
	glColor3f(1, 0, 0);
	bitmap_output(-8, 8, "Razor Laptops", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, 2, "Super fast processing thanks to", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, 0, "the powerful intel i9 processor", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-14, -4, "Built by gamers for gamers", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-12, -9, "Starting at Rs. 95,000/-", GLUT_BITMAP_HELVETICA_18);
}
//sixth frame end


/*void outro()
{
	bitmap_output(-20, 30, "Dayanana Sagar College of Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-5, 10, "THE END", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -5, "Computer Graphics Project By:", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -15, "Osman C Dsilva		1DS16CS074", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -20, "Nandan	M	1DS16CS067", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -25, "Samarth S Kulkarni		1DS16CS096", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-10, -35, "Press ESC to exit", GLUT_BITMAP_TIMES_ROMAN_24);
}*/



//display funnctions
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	intro();
	glFlush();
}
 
void display1()
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


	//SUN
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-20.0, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(0, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	draw_start_line();
	draw_tree();

	//CARS
	glPushMatrix();
	glTranslatef(f1c1x, -15, 0);
	glScalef(40, 20, 0);
	car1();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(f1c2x, -10, 0);
	glScalef(40, 20, 0);
	car2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(f1c3x, -25, 0);
	glScalef(40, 20, 0);
	car3();
	glPopMatrix();

	glFlush();
	glFlush();
}


void display2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,1,0,0);

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
	glTranslatef(-15, f2c1y, 0);
	glScalef(50, 30, 0);
	carTop();
	glPopMatrix();
	glFlush();
}

void display3()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 1, 0, 0);

	//track
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(38, 50, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(50, 38, 0);
	glVertex3f(-38, -50, 0);
	glVertex3f(-50, -50, 0);
	glVertex3f(-50, -38, 0);
	glEnd();

	//yellow strip
	glBegin(GL_POLYGON);
	glColor4f(255, 255, 0, 1);
	glVertex3f(49, 50, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(50, 49, 0);
	glVertex3f(-49, -50, 0);
	glVertex3f(-50, -50, 0);
	glVertex3f(-50, -49, 0);
	glEnd();

	treeToprot();

	//Car position
	glPushMatrix();
	glTranslatef(f3c1x, f3c1y, 0);
	glScalef(40, 20, 0);
	glRotatef(-37, 1, 1, 1);
	carToprot();
	glPopMatrix();

	glFlush();

}

void display4()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 1, 0, 0);

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


	//SUN
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-20.0, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(0, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	draw_start_line();
	draw_tree();

	//CARS
	glPushMatrix();
	glTranslatef(f4c1x, -15, 0);
	glScalef(40, 20, 0);
	car1();
	glPopMatrix();

	glFlush();

}

void display5()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.5, 0.9, 0.9, 0);
	roundRect(2);
	finalscene();
	glFlush();

}

void display6()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.5, 0.9, 0.9, 0);
	roundRect(2);
	ad();
	glFlush();
}

/*void displayf()
{
	glClear(GL_COLOR_BUFFER_BIT);
	outro();
	glFlush();
}*/

//Animation functions
void spinDisplay5()
{
	f5c1x = f5c1x + .1;
	if (f5c1x > 20)
		glutDisplayFunc(display6);
	glutPostRedisplay();

}

void spinDisplay4()
{	
	f4c1x = f4c1x + .1;
	if (f4c1x > 60) {
		glutDisplayFunc(display5);
		glutIdleFunc(spinDisplay5);
	}
	glutPostRedisplay();

}

void spinDisplay3()
{
	f3c1x = f3c1x + .1;
	f3c1y = f3c1y + .1;
	if (f3c1x > 60 || f3c1y > 60) {
		glutDisplayFunc(display4);
		glutIdleFunc(spinDisplay4);
	}
	glutPostRedisplay();

}

void spinDisplay2()
{
	f2c1y = f2c1y + .1;
	if (f2c1y > 60) {
		glutDisplayFunc(display3);
		glutIdleFunc(spinDisplay3);
	}

	glutPostRedisplay();
}

void spinDisplay1()
{
	f1c1x = f1c1x + .1;
	f1c2x = f1c2x + .04;
	f1c3x = f1c3x + .04;
	if (f1c1x > 80) {
		glutDisplayFunc(display2);
		glutIdleFunc(spinDisplay2);
	}
	glutPostRedisplay();
}


//User input
void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
	else if (key == 32) {
		glutDisplayFunc(display1);
		glutIdleFunc(spinDisplay1);
	}
	/*if (key == 'e') {
		
		glutDisplayFunc(displayf);
	}*/
	
}


void init(void)
{
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Laptop Advertisement");
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glColor3f(1, 0, 0);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(processNormalKeys);
	glutMainLoop();
	return 0;
}
