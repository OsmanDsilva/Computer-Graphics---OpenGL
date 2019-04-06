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
	bitmap_output(-20, 30, "Dayanana Sagar College of Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-5, 10, "THE END", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -5, "Computer Graphics Project By:", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -15, "Osman C Dsilva		1DS16CS074", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -20, "Nandan	M	1DS16CS067", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, -25, "Samarth S Kulkarni		1DS16CS096", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-10, -35, "Press ESC to exit", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}
void init(void)
{
	//glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}


void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Thank you");
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glColor3f(1, 0, 0);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(processNormalKeys);
	glutMainLoop();
	return 0;
}