// Nama : Adiba Justinian
// NIM	: 24060120130080
// Praktikum GKV B1
// Tugas No 3 Praktikum GKV (Kubus Bertingkat)

#include <gl/glut.h>
void KubusBertingkat(void)
{
	glClear (GL_COLOR_BUFFER_BIT);

	//Urut dari bawah
	
	//KubusBawah
	glColor3f(0.7f, 0.7f, 0.7f);
	glRectf(-0.80, -0.85, -0.50, -0.55);
	glColor3f(0.7f, 0.90f, 1.0f);
	glRectf(-0.485, -0.85, -0.185, -0.55);
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(-0.17, -0.85, 0.13, -0.55);
	glColor3f(1.0f, 0.90f, 0.60f);
	glRectf(0.145, -0.85, 0.445, -0.55);
	glColor3f(0.7f, 0.7f, 0.7f);
	glRectf(0.46, -0.85, 0.76, -0.55);

	//KubusTengah1
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(-0.625, -0.535, -0.325, -0.235);
	glColor3f(0.7f, 0.90f, 1.0f);
	glRectf(0.285, -0.535, 0.585, -0.235);
	
	//KubusTengah2
	glColor3f(1.0f, 0.90f, 0.60f);
	glRectf(-0.475, -0.22, -0.175, 0.08);
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(0.135, -0.22, 0.435, 0.08);		
	
	//KubusTengah3
	glColor3f(0.7f, 0.90f, 1.0f);
	glRectf(-0.325, 0.095, -0.025, 0.395);
	glColor3f(0.7f, 0.7f, 0.7f);	
	glRectf(-0.010, 0.095, 0.290, 0.395);
	
	//KubusAtas
	glColor3f(1.0f, 0.90f, 0.60f);
	glRectf(-0.15, 0.41, 0.15, 0.71);		
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(-0.075, 0.725, 0.075, 0.925);
			
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(720,640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Kubus Bertingkat");
	glutDisplayFunc(KubusBertingkat);
	glClearColor(0.30f, 0.40f, 0.40f, 0.50f);
	glutMainLoop();
	return 0;
}

