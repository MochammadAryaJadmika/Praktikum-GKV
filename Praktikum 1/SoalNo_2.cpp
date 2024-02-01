// Nama File: SoalNo_2.cpp
// Nama / NIM: Mochammad Arya J / 24060121130085
// Deskripsi: membuat program yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, 
//			GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP. 

#include <gl/glut.h>

void DISPLAY(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	//GL_LINE_STRIP
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.2, 0.6);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-0.2, -0.6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.2, -0.6);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.4, -0.6);
	glEnd();

	//GL_lINE_LOOP
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.5, 1.0);
	glLineWidth(2.5);
	glVertex3f(-0.50, 0.75, 0.0);
	glVertex3f(0.50, 0.75, 0.0);
	glVertex3f(0.75, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.50, -0.75, 0.0);
	glVertex3f(-0.50, -0.75, 0.0);
	glColor3f(1.0, 0.0, 0.5);
	glVertex3f(-0.75, 0.0, 0.0);
	glEnd();
	
	//GL_TRIANGLE_FAN
	glBegin(GL_TRIANGLE_FAN);
	glLineWidth(2.5);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(-0.90, -0.90);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.65, -0.90);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-0.80, -0.85);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.85, -0.75);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(-0.90, -0.50);
	glEnd();
	
	//GL_TRIANGLE_STRIP
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.90, 0.90);
	glColor3f(0.5, 1.0, 0.0);
	glVertex2f(0.65, 0.90);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.80, 0.85);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.85, 0.75);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.90, 0.50);
	glEnd();
	
	//GL_QUADS
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.80, -0.90);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.90, -0.70);
	glColor3f(0.5, 1.0, 0.0);
	glVertex2f(0.80, -0.60);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.70, -0.70);
	glEnd();
	
	//GL_QUAD_STRIP
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.90, 0.50);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(-0.90, 0.80);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(-0.80, 0.50);
	glColor3f(1.0, 1.0, 0.5);
	glVertex2f(-0.80, 0.80);
	glColor3f(0.5, 1.0, 0.0);
	glVertex2f(-0.80, 0.60);
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(-0.80, 0.90);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-0.70, 0.60);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(-0.70, 0.90);
	glEnd();
glFlush();
}

int main(int argc, char** argv){
glutInit(&argc, argv);

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(200,200);
glutCreateWindow("DISPLAY");
glutDisplayFunc(DISPLAY);
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glutMainLoop();

return 0;	
}





