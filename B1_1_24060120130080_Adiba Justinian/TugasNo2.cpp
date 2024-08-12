// Nama : Adiba Justinian
// NIM	: 24060120130080
// Praktikum GKV B1
// Tugas No 2 Praktikum GKV 

#include <gl/glut.h>
void FungsiGL(void)
{
	glClear (GL_COLOR_BUFFER_BIT);

	//GL LINE STRIP (kiri bawah)
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.80, -0.75, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-0.525, -0.50, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.80, -0.25, 0.0);

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.25, -0.25, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-0.525, -0.50, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.25, -0.75, 0.0);
	glEnd();
	
	// GL LINE LOOP (tengah bawah)
	glLineWidth(3.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.15, -0.75, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.30, -0.75, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.075, -0.50, 0.0);
	
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.30, -0.25, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.15, -0.25, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.075, -0.50, 0.0);			
	glEnd();		
	
	
	//GL TRIANGLE FAN (kanan bawah)
	glLineWidth(3.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.40, -0.75, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.85, -0.75, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.625, -0.50, 0.0);
	
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.85, -0.75, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.85, -0.25, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.625, -0.50, 0.0);
	
	glColor3f(1.0f, .0f, 1.0f);
	glVertex3f(0.40, -0.25, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.40, -0.75, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.625, -0.50, 0.0);
	glEnd();	
		
	
	//GL TRIANGLE STRIP (kanan atas)
	glLineWidth(3.0f);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.85, -0.10, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.40, -0.10, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.625, 0.50, 0.0);	
	
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.75, 0.0, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.50, 0.0, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.625, 0.50, 0.0);

	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.65, 0.0, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.60, 0.0, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.625, 0.50, 0.0);	
	glEnd();
	
	
	//GL QUADS (tengah atas)
	glLineWidth(3.0f);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.30, 0.0, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.30, -0.10, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.10, 0.0, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-0.15, -0.10, 0.0);
	
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.30, 0.30, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.30, 0.50, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.10, 0.30, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.15, 0.50, 0.0);
	
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.30, 0.10, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.30, 0.025, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-0.10, 0.10, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.10, 0.025, 0.0);
	
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.30, 0.15, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.30, 0.275, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.10, 0.15, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.10, 0.275, 0.0);
	glEnd();
	
	
	//GL QUAD STRIP (kiri atas)
	glLineWidth(2.0f);
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.80, 0.50, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-0.80, -0.10, 0.0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.45, 0.30, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.45, 0.10, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-0.25, 0.30, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.25, 0.10, 0.0);
	glEnd();
	
	
	//GL LINE STRIP (kotak luar)
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.90, -0.95, 0.0);
	glColor3f(0.20f, 0.20f, 0.20f);
	glVertex3f(0.95, -0.95, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.95, 0.75, 0.0);
		
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.95, 0.75, 0.0);
	glColor3f(0.20f, 0.20f, 0.20f);
	glVertex3f(-0.90, 0.75, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.90, -0.95, 0.0);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.85, -0.90, 0.0);
	glColor3f(0.20f, 0.20f, 0.20f);
	glVertex3f(0.90, -0.90, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.90, 0.70, 0.0);
		
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.90, 0.70, 0.0);
	glColor3f(0.20f, 0.20f, 0.20f);
	glVertex3f(-0.85, 0.70, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.85, -0.90, 0.0);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.90, -0.90, 0.0);
	glColor3f(0.40f, 0.40f, 0.40f);
	glVertex3f(-0.95, -0.075, 0.0);
	glColor3f(0.30f, 0.30f, 0.30f);
	glVertex3f(-0.90, 0.75, 0.0);
	glEnd();
	
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(720,640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Fungsi GL");
	glutDisplayFunc(FungsiGL);
	glClearColor(0.50f, 0.45f, 0.25f, 0.0f);
	glutMainLoop();
	return 0;
}


