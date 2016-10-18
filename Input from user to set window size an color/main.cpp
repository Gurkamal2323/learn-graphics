#include <windows.h>  // For MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include<stdio.h>

void Draw() {
    //clear all pixels
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void Initialize(GLfloat a,GLfloat b,GLfloat c) {
    //select background color
	glClearColor(a,b,c,0);
	}

int main(int iArgc, char** cppArgv) {
    //declaration of variables
 	GLfloat x,y,a,b,c;
	printf("Enter window size in pixels\n");
	scanf("%f%f",&x,&y);
	printf("\n");
	printf("Enter window colors range within 0-255\n");
	scanf("%f%f%f",&a,&b,&c);
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(x,y);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Color Window");
	Initialize(a,b,c);
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
