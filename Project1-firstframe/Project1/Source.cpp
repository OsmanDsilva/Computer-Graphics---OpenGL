#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14

void draw_start_line()
{
	float i, j, k = 0;
	for (i = 0.0; i > -0.5; i = i - 0.025)
	{
		j = 0.3;

		if (k == 0)
		{
			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j, i);
			glVertex2f(j + 0.025, i);
			glVertex2f(j + 0.025, i - 0.025);
			glVertex2f(j, i - 0.025);
			glEnd();

			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 0.025, i);
			glVertex2f(j + 0.05, i);
			glVertex2f(j + 0.05, i - 0.025);
			glVertex2f(j + 0.025, i - 0.025);
			glEnd();

			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 0.05, i);
			glVertex2f(j + 0.075, i);
			glVertex2f(j + 0.075, i - 0.025);
			glVertex2f(j + 0.05, i - 0.025);
			glEnd();

			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 0.075, i);
			glVertex2f(j + 0.1, i);
			glVertex2f(j + 0.1, i - 0.025);
			glVertex2f(j + 0.075, i - 0.025);
			glEnd();

			k = 1;
		}
		else
		{
			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j, i);
			glVertex2f(j + 0.025, i);
			glVertex2f(j + 0.025, i - 0.025);
			glVertex2f(j, i - 0.025);
			glEnd();

			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 0.025, i);
			glVertex2f(j + 0.05, i);
			glVertex2f(j + 0.05, i - 0.025);
			glVertex2f(j + 0.025, i - 0.025);
			glEnd();

			glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 0.05, i);
			glVertex2f(j + 0.075, i);
			glVertex2f(j + 0.075, i - 0.025);
			glVertex2f(j + 0.05, i - 0.025);
			glEnd();

			glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
			glBegin(GL_QUADS);
			glVertex2f(j + 0.075, i);
			glVertex2f(j + 0.1, i);
			glVertex2f(j + 0.1, i - 0.025);
			glVertex2f(j + 0.075, i - 0.025);
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

	/*//mid tree
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
}*/
	

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
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, 0.25);
	glVertex2f(-1.0, 0.25);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-1.0, 0.25);
	glVertex2f(1.0, 0.25);
	glVertex2f(1.0, 0.0);
	glVertex2f(-1.0, 0.0);
	glEnd();


	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1.0, -0.5);
	glVertex2f(-1.0, -0.5);
	glEnd();

	glColor4f(255.0, 255.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-1.0, -0.225);
	glVertex2f(1.0, -0.225);
	glVertex2f(1.0, -0.275);
	glVertex2f(-1.0, -0.275);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-1.0, -0.5);
	glVertex2f(1.0, -0.5);
	glVertex2f(1.0, -1.0);
	glVertex2f(-1.0, -1.0);
	glEnd();
	
	

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
	glutDisplayFunc(display);
	glutMainLoop();
}