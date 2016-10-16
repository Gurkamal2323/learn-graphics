#include <windows.h>  // For MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	//opengl requires that the polygons should be simple and convex
	//simple means that edges do no cross each other
	//convex means the line segment between any two points lies withing the polygon
	glBegin(GL_POLYGON);
        glVertex3f(0.2,0.2,0.0);
        glVertex3f(0.6,0.1,0.0);
        glVertex3f(0.8,0.3,0.0);
        glVertex3f(0.7,0.6,0.0);
        glVertex3f(0.4,0.8,0.0);
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
