// Nama File: TanganBergerak.cpp
// Nama / NIM: Mochammad Arya Jadmika / 24060121130085
// Deskripsi: membuat program tangan bergerak dengan menambahkan lengan, telapak tangan beserta jari-jari 
//			yang bisa digerakkan menggunakan keyboard.

#include <gl/glut.h>

static int IbuJari1 = 0, IbuJari2 = 0, IbuJari3 = 0;
static int Telunjuk1 = 0, Telunjuk2 = 0, Telunjuk3 = 0;
static int JTengah1 = 0, JTengah2 = 0, JTengah3 = 0;
static int JManis1 = 0, JManis2 = 0, JManis3 = 0;
static int Kelingking1 = 0, Kelingking2 = 0, Kelingking3 = 0;
static int Telapak1 = 0, Telapak2 = 0;
static int LenganAtas1 = 0, LenganAtas2 = 0, LenganBawah = 0;

void init(void){
	glClearColor(0,0,0,0);
	glShadeModel(GL_FLAT);
}

void Display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		//Bagian Lengan Atas
		glTranslatef(-1.8,0,0);
		glRotatef((GLfloat) LenganAtas1,0,0,1);
		glRotatef((GLfloat) LenganAtas2,0,1,0);
		glTranslatef(1.8,0,0);
		glPushMatrix();
				glTranslatef(-1.4,0,0);
				glScalef(0.8, 0.2, 0.56);
				glutWireCube(1);
		glPopMatrix();
		
		//Bagian Lengan Bawah	
		glTranslatef(-1,0,0);	
		glRotatef((GLfloat) LenganBawah,0,0,1);
		glTranslatef(1,0,0);
		glPushMatrix();
				glTranslatef(-0.6,0,0);
				glScalef(0.8, 0.2, 0.56);
				glutWireCube(1);
		glPopMatrix();
		
		//Bagian Telapak
		glRotatef((GLfloat) Telapak1, 1,0,0);
		glRotatef((GLfloat) Telapak2, 0,0,1);
		glPushMatrix();
				glScalef(0.4, 0.2, 0.56);
				glutWireCube(1.0);
		glPopMatrix();
		
		//Bagian Ibu Jari
		glPushMatrix();
			glTranslatef(0,0,0.38);
			glRotatef((GLfloat) -IbuJari3, 1, 0, 0);
			glRotatef((GLfloat) IbuJari1, 0, 1, 0);
			glPushMatrix();
				glScalef(0.1, 0.1, 0.2);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0, 0, 0.2);
			glRotatef((GLfloat) -IbuJari2, 1, 0, 0);
			glPushMatrix();
				glScalef(0.1, 0.1, 0.25);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//Bagian Jari Telunjuk
		glPushMatrix();
			glTranslatef(0.3,0,0.22);
			glRotatef((GLfloat) Telunjuk1, 0, 0, 1);
			glPushMatrix();
				glScalef(0.2, 0.1, 0.13);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.2, 0, 0);
			glRotatef((GLfloat) Telunjuk2, 0, 0, 1);
			glPushMatrix();
				glScalef(0.22, 0.1, 0.13);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.22, 0, 0);
			glRotatef((GLfloat) Telunjuk3, 0, 0, 1);
			glPushMatrix();
				glScalef(0.21, 0.1, 0.13);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//Bagian Jari Tengah
		glPushMatrix();
			glTranslatef(0.3,0,0.05);
			glRotatef((GLfloat) JTengah1, 0, 0, 1);
			glPushMatrix();
				glScalef(0.25, 0.1, 0.14);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.25, 0, 0);
			glRotatef((GLfloat) JTengah2, 0, 0, 1);
			glPushMatrix();
				glScalef(0.27, 0.1, 0.14);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.27, 0, 0);
			glRotatef((GLfloat) JTengah3, 0, 0, 1);
			glPushMatrix();
				glScalef(0.21, 0.1, 0.14);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//Bagian Jari Manis
		glPushMatrix();
			glTranslatef(0.3,0,-0.1);
			glRotatef((GLfloat) JManis1, 0, 0, 1);
			glPushMatrix();
				glScalef(0.2, 0.1, 0.11);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.2, 0, 0);
			glRotatef((GLfloat) JManis2, 0, 0, 1);
			glPushMatrix();
				glScalef(0.21, 0.1, 0.11);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.21, 0, 0);
			glRotatef((GLfloat) JManis3, 0, 0, 1);
			glPushMatrix();
				glScalef(0.2, 0.1, 0.11);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();	
		
		//Bagian Jari Kelingking
		glPushMatrix();
			glTranslatef(0.3,0,-0.21);
			glRotatef((GLfloat) Kelingking1, 0, 0, 1);
			glPushMatrix();
				glScalef(0.18, 0.1, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.18, 0, 0);
			glRotatef((GLfloat) Kelingking2, 0, 0, 1);
			glPushMatrix();
				glScalef(0.17, 0.1, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.17, 0, 0);
			glRotatef((GLfloat) Kelingking3, 0, 0, 1);
			glPushMatrix();
				glScalef(0.19, 0.1, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();	
		
	glPopMatrix();
	glutSwapBuffers();
}

void reshape (int w, int h) {
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -5.0);
}

void keyboard (unsigned char key, int x, int y) {
	switch (key){
		//Bagian Lengan Atas
		case 'a': LenganAtas1 = (LenganAtas1 + 5) % 360;
					if(LenganAtas1 > 110) LenganAtas1 = 110;
					glutPostRedisplay();
					break;
		case 'A': LenganAtas1 = (LenganAtas1 - 5) % 360;
					if(LenganAtas1 < -110) LenganAtas1 = -110;
					glutPostRedisplay();
					break;
		case 'r': LenganAtas2 = (LenganAtas2 + 5) % 360;
					if(LenganAtas2 > 90) LenganAtas2 = 90;
					glutPostRedisplay();
					break;
		case 'R': LenganAtas2 = (LenganAtas2 - 5) % 360;
					if(LenganAtas2 < -90) LenganAtas2 = -90;
					glutPostRedisplay();
					break;
				
		//Bagian Lengan Bawah
		case 'y': LenganBawah = (LenganBawah + 5) % 360;
					if(LenganBawah > 120) LenganBawah = 120;
					glutPostRedisplay();
					break;
		case 'Y': LenganBawah = (LenganBawah - 5) % 360;
					if(LenganBawah < 0) LenganBawah = 0;
					glutPostRedisplay();
					break;	
				
		//Bagian Telapak Tangan	
		case 'j': Telapak1 = (Telapak1 + 5) % 360;
					if(Telapak1 > 90) Telapak1 = 90;
					glutPostRedisplay();
					break;
		case 'J': Telapak1 = (Telapak1 - 5) % 360;
					if(Telapak1 < -90) Telapak1 = -90;
					glutPostRedisplay();
					break;
		case 'd': Telapak2 = (Telapak2 + 5) % 360;
					if(Telapak2 > 90) Telapak2 = 90;
					glutPostRedisplay();
					break;
		case 'D': Telapak2 = (Telapak2 - 5) % 360;
					if(Telapak2 < 0) Telapak2 = 0;
					glutPostRedisplay();
					break;
		
		//Bagian Ibu Jari
		case 'm': IbuJari3 = (IbuJari3 - 5) % 360;
					if(IbuJari3 < 0) IbuJari3 = 0;
					glutPostRedisplay();
					break;
		case 'M': IbuJari3 = (IbuJari3 + 5) % 360;
					if(IbuJari3 > 90) IbuJari3 = 90;
					glutPostRedisplay();
					break;
		case 'i': IbuJari1 = (IbuJari1 - 5) % 360;
					if(IbuJari1 < 0) IbuJari1 = 0;
					glutPostRedisplay();
					break;
		case 'I': IbuJari1 = (IbuJari1 + 5) % 360;
					if(IbuJari1 > 90) IbuJari1 = 90;
					glutPostRedisplay();
					break;
		case 'k': IbuJari2 = (IbuJari2 - 5) % 360;
					if(IbuJari2 < 0) IbuJari2 = 0;
					glutPostRedisplay();
					break;
		case 'K': IbuJari2 = (IbuJari2 + 5) % 360;
					if(IbuJari2 > 90) IbuJari2 = 90;
					glutPostRedisplay();
					break;
					
		//Bagian Jari Telunjuk
		case 'o': Telunjuk1 = (Telunjuk1 - 5) % 360;
					if(Telunjuk1 < 0) Telunjuk1 = 0;
					glutPostRedisplay();
					break;
		case 'O': Telunjuk1 = (Telunjuk1 + 5) % 360;
					if(Telunjuk1 > 90) Telunjuk1 = 90;
					glutPostRedisplay();
					break;
		case 'c': Telunjuk2 = (Telunjuk2 - 5) % 360;
					if(Telunjuk2 < 0) Telunjuk2 = 0;
					glutPostRedisplay();
					break;
		case 'C': Telunjuk2 = (Telunjuk2 + 5) % 360;
					if(Telunjuk2 > 90) Telunjuk2 = 90;
					glutPostRedisplay();
					break;
		case 'h': Telunjuk3 = (Telunjuk3 - 5) % 360;
					if(Telunjuk3 < 0) Telunjuk3 = 0;
					glutPostRedisplay();
					break;
		case 'H': Telunjuk3 = (Telunjuk3 + 5) % 360;
					if(Telunjuk3 > 90) Telunjuk3 = 90;
					glutPostRedisplay();
					break;
					
		//Bagian Jari Tengah
		case 'b': JTengah1 = (JTengah1 - 5) % 360;
					if(JTengah1 < 0) JTengah1 = 0;
					glutPostRedisplay();
					break;
		case 'B': JTengah1 = (JTengah1 + 5) % 360;
					if(JTengah1 > 90) JTengah1 = 90;
					glutPostRedisplay();
					break;
		case 'e': JTengah2 = (JTengah2 - 5) % 360;
					if(JTengah2 < 0) JTengah2 = 0;
					glutPostRedisplay();
					break;
		case 'E': JTengah2 = (JTengah2 + 5) % 360;
					if(JTengah2 > 90) JTengah2 = 90;
					glutPostRedisplay();
					break;
		case 'f': JTengah3 = (JTengah3 - 5) % 360;
					if(JTengah3 < 0) JTengah3 = 0;
					glutPostRedisplay();
					break;
		case 'F': JTengah3 = (JTengah3 + 5) % 360;
					if(JTengah3 > 90) JTengah3 = 90;
					glutPostRedisplay();
					break;
					
		//Bagian Jari Manis
		case 'g': JManis1 = (JManis1 - 5) % 360;
					if(JManis1 < 0) JManis1 = 0;
					glutPostRedisplay();
					break;
		case 'G': JManis1 = (JManis1 + 5) % 360;
					if(JManis1 > 90) JManis1 = 90;
					glutPostRedisplay();
					break;
		case 'l': JManis2 = (JManis2 - 5) % 360;
					if(JManis2 < 0) JManis2 = 0;
					glutPostRedisplay();
					break;
		case 'L': JManis2 = (JManis2 + 5) % 360;
					if(JManis2 > 90) JManis2 = 90;
					glutPostRedisplay();
					break;
		case 'n': JManis3 = (JManis3 - 5) % 360;
					if(JManis3 < 0) JManis3 = 0;
					glutPostRedisplay();
					break;
		case 'N': JManis3 = (JManis3 + 5) % 360;
					if(JManis3 > 90) JManis3 = 90;
					glutPostRedisplay();
					break;	
		
		//Bagian Jari Kelingking
		case 'p': Kelingking1 = (Kelingking1 - 5) % 360;
					if(Kelingking1 < 0) Kelingking1 = 0;
					glutPostRedisplay();
					break;
		case 'P': Kelingking1 = (Kelingking1 + 5) % 360;
					if(Kelingking1 > 90) Kelingking1 = 90;
					glutPostRedisplay();
					break;	
		case 'q': Kelingking2 = (Kelingking2 - 5) % 360;
					if(Kelingking2 < 0) Kelingking2 = 0;
					glutPostRedisplay();
					break;
		case 'Q': Kelingking2 = (Kelingking2 + 5) % 360;
					if(Kelingking2 > 90) Kelingking2 = 90;
					glutPostRedisplay();
					break;
		case 's': Kelingking3 = (Kelingking3 - 5) % 360;
					if(Kelingking3 < 0) Kelingking3 = 0;
					glutPostRedisplay();
					break;
		case 'S': Kelingking3 = (Kelingking3 + 5) % 360;
					if(Kelingking3 > 90) Kelingking3 = 90;
					glutPostRedisplay();
					break;
	}
	
}
int main(int argc, char** argv) { 
glutInit(&argc, argv); 
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 
glutInitWindowSize (700, 600); 
glutInitWindowPosition (100, 100); 
glutCreateWindow (argv[0]); 
init(); 
glutDisplayFunc(Display); 
glutReshapeFunc(reshape); 
glutKeyboardFunc(keyboard); 
glutMainLoop(); 
return 0;
} 
