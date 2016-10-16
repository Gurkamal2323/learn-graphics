#include <windows.h>  // For MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	//draw points based on these coordinates
	//(x,y,z), z coordinate is kept zero for 2-D drawing
	glBegin(GL_POINTS);
        glVertex3f(0.2,0.2,0.0);
        glVertex3f(0.2,0.2,0.0);
        glVertex3f(0.8,0.2,0.0);
        glVertex3f(0.2,0.5,0.0);
        glVertex3f(0.8,0.5,0.0);
        glVertex3f(0.2,0.8,0.0);
        glVertex3f(0.8,0.8,0.0);
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
