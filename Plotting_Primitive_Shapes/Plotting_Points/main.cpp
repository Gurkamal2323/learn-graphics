#include <windows.h>  // For MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

void Draw() {
    //clear all pixels
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
    //select background color
	glClearColor(0,0,0,1);
	//initialize viewing angles
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
    /*
 *  Declare initial window size, position, and display mode
 *  (single buffer and RGBA).  Open window with "Plotting Primitives"
 *  in its title bar.  Call initialization routines.
 *  Register callback function to display graphics.
 *  Enter main loop and process events.
 */
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(720,1080);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Plotting Primitives");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
