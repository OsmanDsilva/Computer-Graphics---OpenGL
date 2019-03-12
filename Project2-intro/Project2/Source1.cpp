#include<string.h>
#include<stdio.h>
#include<stdarg.h>
#include<GL/glut.h>
void bitmap_output(int x, int y,const char *string, void *font)
{
	int len, i;
	glRasterPos2f(x,y);
	len = (int)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font,string[i]);
	}
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	bitmap_output(40, 35, "Dayanana Sagar College of Enginnering", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(40, 35, "Computer Graphics Project", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(40, 35, "Advertisement for Laptop", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(465, 250);
	glutCreateWindow("Welcome");
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1, 0, 0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}