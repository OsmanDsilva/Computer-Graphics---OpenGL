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
	glVertex3f(0,2, 0);
	glVertex3f(2,2, 0);
	glVertex3f(2,0, 0);
	glVertex3f(0,0, 0);
	glEnd();
}

void roundRect(GLdouble rad)
{
	GLint points = 100;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	//screen
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex3f(20,15, 0);//tr
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
	glTranslatef(20,15, 0);
	glBegin(GL_TRIANGLE_FAN);
	{	glColor3f(0.5,0.5,0.5);
		glVertex3f(0,0,0);
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
	for(GLint i=0 ;i> -13; i-=3)
		for (GLint j = 0; j < 40 ; j+=3)
	{
			glPushMatrix();
			glTranslatef(-20+j,-21+i,0);
			keys();
			glPopMatrix();
	}
	
}


void init(void)
{
	glClearColor(0.5,0.9,0.9, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

//Inside the screen
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

	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);///sss
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

void finalscene()
{
	//blue
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.4,0.3,0);
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
	glTranslatef(-1,6,0);
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
	glTranslatef(0,0,0);
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
	glTranslatef(20, -5, 0);
	glScalef(13, 6.5, 0);
	car1();
	glPopMatrix();
}
//End inside screen


void display()
{	
	glClear(GL_COLOR_BUFFER_BIT);
	roundRect(2);
	finalscene();
	glFlush();
}

	int main(int argc, char ** argv)
	{
		
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(800,800);
		glutCreateWindow("Fifth frame");
		init();
		glutDisplayFunc(display);
		glutMainLoop();
		return 0;
	}
