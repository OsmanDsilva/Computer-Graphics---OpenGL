#include<string.h>
#include<stdio.h>
#include<stdarg.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
#include <dos.h>
#define PI 3.1416

int keyFlag = 1;

GLint r[14] = {148,75,0,0,255,255,255,148,75,0,0,255,255,255 };
GLint g[14] = {0,0,0,255,255,127,0,0,0,0,255,255,127,0 };
GLint b[14] = {211,130,255,0,0,0,0,211,130,255,0,0,0,0 };


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
	bitmap_output(-20, 40, "Dayananada Sagar College of Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
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


	//tires
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
GLfloat f2c2y = -100.0;
GLfloat f2c3y = -150.0;

void carTop1()
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

void carTop2()
{
	glColor3f(0.2, 0, 0.4);
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

	glColor3f(0.2, 0, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(0.23, .43, 0);
	glVertex3f(0.32, .43, 0);
	glVertex3f(.32, .16, 0);
	glVertex3f(0.23, 0.16, 0);
	glEnd();
}

void carTop3()
{
	glColor3f(0.6, 0.1, 0.4);
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

	glColor3f(0.6, 0.1, 0.4);
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
GLfloat f3c1x = -30.0;
GLfloat f3c2x = 0.0;
GLfloat f3c3x = 100.0;
GLfloat f3c4x = 200.0;
GLfloat f3c5x = 300.0;
GLfloat f3c6x = 400.0;
GLfloat f3c7x = 500.0;
GLfloat f3c8x = -80;
GLfloat f3c9x = -95;


//third frame end


//fourth frame construction

GLfloat f4c1x = -10.0;


//fourth frame end


//fifth frame construction
GLfloat f5c1x = 0.0;
GLfloat f5c3x = -10.0;
//fifth frame end

//sixth frame construction
GLint clo = 0;
//sixth frame end

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
	carTop1();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-20, f2c2y, 0);
	glScalef(50, 30, 0);
	carTop2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-10, f2c3y, 0);
	glScalef(50, 30, 0);
	carTop3();
	glPopMatrix();
	glFlush();
}

void display3()
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

	//Cloud3
	glPushMatrix();
	glTranslatef(f3c2x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	//Cloud4
	glPushMatrix();
	glTranslatef(f3c3x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(f3c4x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	//Cloud4
	glPushMatrix();
	glTranslatef(f3c5x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(f3c6x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	//Cloud4
	glPushMatrix();
	glTranslatef(f3c7x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();



	//CARS
	glPushMatrix();
	glTranslatef(f3c1x, -15, 0);
	glScalef(40, 20, 0);
	car1();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(f3c8x, -10, 0);
	glScalef(40, 20, 0);
	car2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(f3c9x, -20, 0);
	glScalef(40, 20, 0);
	car3();
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
	glClearColor(1, 1, 1, 0);

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
	glTranslatef(f5c3x, -15, 0);
	glScalef(40, 20, 0);
	car1();
	glPopMatrix();


	roundRect(2);

	finalscene();

	glFlush();

}

void display6()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1, 1, 1, 0);

	//violet
	glPushMatrix();
	glColor3ub(r[clo], g[clo], b[clo]);
	glTranslatef(-34,35,0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo], g[clo], b[clo]);
	glTranslatef(-10, 35, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo], g[clo], b[clo]);
	glTranslatef(14, 35, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo], g[clo], b[clo]);
	glTranslatef(38, 35, 0);
	cloudB();
	glPopMatrix();

	//indigo
	glPushMatrix();
	glColor3ub(r[clo + 1], g[clo + 1], b[clo + 1]);
	glTranslatef(-46, 22, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 1], g[clo + 1], b[clo + 1]);
	glTranslatef(-22, 22, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 1], g[clo + 1], b[clo + 1]);
	glTranslatef(2, 22, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 1], g[clo + 1], b[clo + 1]);
	glTranslatef(26, 22, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 1], g[clo + 1], b[clo + 1]);
	glTranslatef(50, 22, 0);
	cloudB();
	glPopMatrix();

	//blue
	glPushMatrix();
	glColor3ub(r[clo + 2], g[clo + 2], b[clo + 2]);
	glTranslatef(-34, 9, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 2], g[clo + 2], b[clo + 2]);
	glTranslatef(-10, 9, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 2], g[clo + 2], b[clo + 2]);
	glTranslatef(14, 9, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 2], g[clo + 2], b[clo + 2]);
	glTranslatef(38, 9, 0);
	cloudB();
	glPopMatrix();

	//green
	glPushMatrix();
	glColor3ub(r[clo + 3], g[clo + 3], b[clo + 3]);
	glTranslatef(-46, -4, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 3], g[clo + 3], b[clo + 3]);
	glTranslatef(-22, -4, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 3], g[clo + 3], b[clo + 3]);
	glTranslatef(2, -4, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 3], g[clo + 3], b[clo + 3]);
	glTranslatef(26, -4, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 3], g[clo + 3], b[clo + 3]);
	glTranslatef(50, -4, 0);
	cloudB();
	glPopMatrix();

	//yellow
	glPushMatrix();
	glColor3ub(r[clo + 4], g[clo + 4], b[clo + 4]);
	glTranslatef(-34, -17, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 4], g[clo + 4], b[clo + 4]);
	glTranslatef(-10, -17, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 4], g[clo + 4], b[clo + 4]);
	glTranslatef(14, -17, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 4], g[clo + 4], b[clo + 4]);
	glTranslatef(38, -17, 0);
	cloudB();
	glPopMatrix();

	//orange
	glPushMatrix();
	glColor3ub(r[clo + 5], g[clo + 5], b[clo + 5]);
	glTranslatef(-46, -30, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 5], g[clo + 5], b[clo + 5]);
	glTranslatef(-22, -30, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 5], g[clo + 5], b[clo + 5]);
	glTranslatef(2, -30, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 5], g[clo + 5], b[clo + 5]);
	glTranslatef(26, -30, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 5], g[clo + 5], b[clo + 5]);
	glTranslatef(50, -30, 0);
	cloudB();
	glPopMatrix();

	//red
	glPushMatrix();
	glColor3ub(r[clo + 6], g[clo + 6], b[clo + 6]);
	glTranslatef(-34, -43, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 6], g[clo + 6], b[clo + 6]);
	glTranslatef(-10, -43, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 6], g[clo + 6], b[clo + 6]);
	glTranslatef(14, -43, 0);
	cloudB();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(r[clo + 6], g[clo + 6], b[clo + 6]);
	glTranslatef(38, -43, 0);
	cloudB();
	glPopMatrix();

	roundRect(2);
	ad();
	glFlush();
}

//keyboard functions
void processFrameKeys(unsigned char key, int x, int y)
{
	if (key == 32)
	{
		if (keyFlag == 0)
			keyFlag = 1;
		else
			keyFlag = 0;
	}
}


//Animation functions

void spinDisplay6()
{
	int c, d;
	if (clo == 6)
		clo = 0;
	else
		clo++;
	for (c = 1; c <= 32767; c++)
		for (d = 1; d <= 10000; d++)
		{}
	glutPostRedisplay();

}

void spinDisplay5()
{
	int c, d;
	if (keyFlag == 1)
	{
		f5c1x = f5c1x + .2;
		f5c3x = f5c3x + .1;

	}
	if (f5c1x > 20)
	{
		glutDisplayFunc(display6);
		glutIdleFunc(spinDisplay6);
		for (c = 1; c <= 32767; c++)
			for (d = 1; d <= 32767; d++)
			{
			}
	}
	glutPostRedisplay();

}

void spinDisplay4()
{	
	int c, d;
	if (keyFlag == 1)
	{
		f4c1x = f4c1x + .2;
	}
	if (f4c1x > 60) {
		glutDisplayFunc(display5);
		glutIdleFunc(spinDisplay5);
		glutKeyboardFunc(processFrameKeys);
		for (c = 1; c <= 2767; c++)
			for (d = 1; d <= 30000; d++)
			{
			}
	}
	glutPostRedisplay();

}

void spinDisplay3()
{
	if (keyFlag == 1)
	{
		f3c1x = f3c1x + .09; //car1
		f3c8x = f3c8x + .07; //car2
		f3c9x = f3c9x + .07; //car3
		f3c2x = f3c2x - .09;
		f3c3x = f3c3x - .09;
		f3c4x = f3c4x - .09;
		f3c5x = f3c5x - .09;
		f3c6x = f3c6x - .09;
		f3c7x = f3c7x - .09;
	}
	if (f3c9x > 80) {
		glutDisplayFunc(display4);
		glutIdleFunc(spinDisplay4);
		glutKeyboardFunc(processFrameKeys);
	}
	glutPostRedisplay();

}

void spinDisplay2()
{
	if (keyFlag == 1)
	{
		f2c1y = f2c1y + .05;
		f2c2y = f2c2y + .03;
		f2c3y = f2c3y + .03;
	}
	if (f2c3y > 60) {
		glutDisplayFunc(display3);
		glutIdleFunc(spinDisplay3);
		glutKeyboardFunc(processFrameKeys);
	}

	glutPostRedisplay();
}

void spinDisplay1()
{
	if (keyFlag == 1)
	{
		f1c1x = f1c1x + .03;
		f1c2x = f1c2x + .009;
		f1c3x = f1c3x + .009;
	}
	if (f1c1x > 80) {
		glutDisplayFunc(display2);
		glutIdleFunc(spinDisplay2);
		glutKeyboardFunc(processFrameKeys);
	}
	glutPostRedisplay();
}

//user input
void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
	else if (key == 32) {
		glutDisplayFunc(display1);
		glutIdleFunc(spinDisplay1);
		glutKeyboardFunc(processFrameKeys);
	}
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
