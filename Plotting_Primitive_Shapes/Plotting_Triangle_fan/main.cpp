#include <windows.h>  // For MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	//drawing of polygon using triangle combinations
	//v1,v2,v3, 1st triangle
	//v3,v1,v4, 2nd triangle
	//v4,v1,v5, 3rd triangle
	glBegin(GL_TRIANGLE_FAN);
        glVertex3f(0.2,0.2,0.0); //v1
        glVertex3f(0.6,0.1,0.0); //v2
        glVertex3f(0.8,0.3,0.0); //v3
        glVertex3f(0.7,0.6,0.0); //v4
        glVertex3f(0.4,0.8,0.0); //v5
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
