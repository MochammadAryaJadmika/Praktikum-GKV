// Nama File: SoalNo_3.cpp
// Nama / NIM: Mochammad Arya J / 24060121130085
// Deskripsi: Membuat Gambar Kubus bertingkat dari objek primitif sekreatif mungkin. (minimal 5 kubus)

#include <gl/glut.h>

void DISPLAY(){
	glClear(GL_COLOR_BUFFER_BIT);

	// Baris pertama segi empat
	glColor3f(0.0, 0.0, 0.0);
	glRectf(-0.1, -0.1, 0.1, -0.7);
	
	// Baris kedua segi empat
	glColor3f(0.0, 0.0, 0.0);
	glRectf(-0.1, -0.1, 0.1, -0.5);
	
	// Baris ketiga segi empat
	glColor3f(0.0, 0.0, 0.0);
	glRectf(-0.1, -0.1, 0.1, -0.3);

	// Baris keempat segi empat 
		// segi empat dipinggir
		glColor3f(0.0, 0.0, 0.0);
		glRectf(0.0, 0.1, 0.3, -0.1);
		glRectf(-0.3, -0.1, 0.0, 0.1);
		// segi empat ditengah
		glColor3f(0.0, 1.0, 1.0);
		glRectf(-0.1, -0.1, 0.1, 0.3);
		
	// Baris kelima segi empat
		// segi empat dipinggir
		glColor3f(0.0, 0.0, 0.0);
		glRectf(0.1, 0.3, 0.5, 0.1);
		glRectf(-0.5, 0.3, -0.1, 0.1);
		// segi empat ditengah
		glColor3f(0.0, 1.0, 1.0);
		glRectf(0.1, 0.3, 0.3, 0.1);
		glRectf(-0.3, 0.3, 0.1, 0.1);
		
	// Baris keenam segi empat
		// segi empat dipinggir dan paling atas (penutup)
		glColor3f(0.0, 0.0, 0.0);
		glRectf(-0.7, 0.3, 0.7, 0.6);
		glRectf(-0.7, -0.6, -0.7, -0.5);
		// segi empat ditengah
		glColor3f(0.0, 1.0, 1.0);
		glRectf(-0.5, 0.3, 0.5, 0.5);
		glRectf(-0.4, 0.3, 0.5, 0.4);
	glFlush();
}
int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(200,200);
glutCreateWindow("DISPLAY");
glutDisplayFunc(DISPLAY);
glClearColor(1.0f, 1.0f, 0.5f, 1.0f);
glutMainLoop();

return 0;
}
