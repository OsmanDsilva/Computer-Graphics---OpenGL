#include<string.h>
#include<stdio.h>
#include<stdarg.h>
#include<GL/glut.h>
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

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	bitmap_output(250, 300, "Dayanana Sagar College of Enginnering", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(300, 350, "Computer Graphics Project", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(320, 400, "Advertisement for Laptop", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(320, 580, "Press spacebar to start", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(330, 620, "Press ESC to exit", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, 0, h);
	glScalef(1, -1, 1);
	glTranslatef(0, -h, 0);
	glMatrixMode(GL_MODELVIEW);
}

void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
	if (key == 32)
		exit(0);
		
		
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(865, 700);
	glutCreateWindow("Welcome");
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glColor3f(1, 0, 0);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(processNormalKeys);
	glutMainLoop();
	return 0;
}