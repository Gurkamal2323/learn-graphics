#include <windows.h>  // For MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	//draw triangle strip, the following points will give a rectangle
	//but the rectangle is made of 4 triangular strips
	//v1,v2,v3
	//v2,v3,v4
	//v3,v4,v5
	//v4,v5,v6
	glBegin(GL_TRIANGLE_STRIP);
        glVertex3f(0.2,0.2,0.0); //v1
        glVertex3f(0.8,0.2,0.0); //v2
        glVertex3f(0.2,0.5,0.0); //v3
        glVertex3f(0.8,0.5,0.0); //v4
        glVertex3f(0.2,0.8,0.0); //v5
        glVertex3f(0.8,0.8,0.0); //v6
	glEnd();
	glFlush();
}

void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Plotting Primitives");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
