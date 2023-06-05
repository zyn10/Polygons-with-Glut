//Jeff Chastine
#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
#include<stdlib.h>
#include<cstdlib>
#include<math.h>
using namespace std;
#define PI 3.1415926
//---->For drawing Circle
void Triangle()
{   //------>Filled Triangle
	glBegin(GL_TRIANGLES);
	glColor3ub(225, 171, 0);
	glVertex2f(-0.7, 0.7);
	glVertex2f(-0.9, 0.7);
	glVertex2f(-0.8, 0.9);
	glEnd();
	//------>HollowTriangle
	glBegin(GL_LINES);
	glColor3ub(225, 171, 0);
	glVertex2f(-0.6, 0.7);//1
	glVertex2f(-0.5, 0.9);//2
	glVertex2f(-0.5, 0.9);//2
	glVertex2f(-0.4, 0.7);//3
	glVertex2f(-0.4, 0.7);//3
	glVertex2f(-0.6, 0.7);//1
	glEnd();
	glFlush();
}
void Rohumbus()
{   //------>Filled Rohumbus
	glBegin(GL_QUADS);
	glColor3ub(0, 150, 254);
	glVertex2f(-0.1, 0.65);
	glVertex2f(-0.2, 0.8);
	glVertex2f(-0.1, 0.95);
	glVertex2f(0.0, 0.8);
	glVertex2f(-0.1, 0.65);
	glEnd();
	//------>Hollow Rohumbus
	glBegin(GL_LINES);
	glColor3ub(0, 150, 254);
	glVertex2f(0.05, 0.8);
	glVertex2f(0.15, 0.95);
	glVertex2f(0.15, 0.95);
	glVertex2f(0.25, 0.8);
	glVertex2f(0.25, 0.8);
	glVertex2f(0.15, 0.65);
	glVertex2f(0.15, 0.65);
	glVertex2f(0.05, 0.8);
	glEnd();
	glFlush();
}
void Pentagon()
{  //------>Filled Pentagon
	glBegin(GL_POLYGON);
	glColor3ub(220, 70, 0);
	glVertex2f(0.45, 0.65);
	glVertex2f(0.55, 0.65);
	glVertex2f(0.6, 0.8);
	glVertex2f(0.5, 0.95);
	glVertex2f(0.4, 0.8);
	glVertex2f(0.45, 0.65);
	glEnd();
	//------>Hollow Pentagon
	glBegin(GL_LINES);
	glColor3ub(220, 70, 0);
	glVertex2f(0.75, 0.65);//1
	glVertex2f(0.85, 0.65);//2
	glVertex2f(0.85, 0.65);//2
	glVertex2f(0.9, 0.8);//3
	glVertex2f(0.9, 0.8);//3
	glVertex2f(0.8, 0.95);//4
	glVertex2f(0.8, 0.95);//4
	glVertex2f(0.7, 0.8);//5
	glVertex2f(0.7, 0.8);//5
	glVertex2f(0.75, 0.65);//1
	glEnd();
}
void Hexagon()
{   //------>Filled Hexagon
	glBegin(GL_POLYGON);
	glColor3ub(170, 170, 0);
	glVertex2f(-0.7, 0.32);
	glVertex2f(-0.8, 0.4);
	glVertex2f(-0.9, 0.32);
	glVertex2f(-0.9, 0.18);
	glVertex2f(-0.8, 0.1);
	glVertex2f(-0.7, 0.18);
	glVertex2f(-0.7, 0.32);
	glEnd();
	//------>Hollow Hexagon
	glBegin(GL_LINES);
	glColor3ub(170, 170, 0);
	glVertex2f(-0.4, 0.32);//1
	glVertex2f(-0.5, 0.4);//2
	glVertex2f(-0.5, 0.4);//2
	glVertex2f(-0.6, 0.32);//3
	glVertex2f(-0.6, 0.32);//3
	glVertex2f(-0.6, 0.18);//4
	glVertex2f(-0.6, 0.18);//4
	glVertex2f(-0.5, 0.1);//5
	glVertex2f(-0.5, 0.1);//5
	glVertex2f(-0.4, 0.18);//6
	glVertex2f(-0.4, 0.18);//6
	glVertex2f(-0.4, 0.32);//1
	glEnd();
}
void Heptagon()
{   //------>Filled Heptagon
	glBegin(GL_POLYGON);
	glColor3ub(220, 260, 0);
	glVertex2f(-0.69, -0.32);
	glVertex2f(-0.75, -0.4);
	glVertex2f(-0.85, -0.4);
	glVertex2f(-0.91, -0.32);
	glVertex2f(-0.9, -0.18);
	glVertex2f(-0.8, -0.1);
	glVertex2f(-0.7, -0.18);
	glVertex2f(-0.7, -0.32);
	glEnd();
	//------>Hollow Heptagon
	glBegin(GL_LINES);
	glColor3ub(220, 260, 0);
	glVertex2f(-0.39, -0.32);//1
	glVertex2f(-0.45, -0.4);//2
	glVertex2f(-0.45, -0.4);//2
	glVertex2f(-0.55, -0.4);//3
	glVertex2f(-0.55, -0.4);//3
	glVertex2f(-0.61, -0.32);//4
	glVertex2f(-0.61, -0.32);//4
	glVertex2f(-0.6, -0.18);//5
	glVertex2f(-0.6, -0.18);//5
	glVertex2f(-0.5, -0.1);//6
	glVertex2f(-0.5, -0.1);//6
	glVertex2f(-0.4, -0.18);//7
	glVertex2f(-0.4, -0.18);//7
	glVertex2f(-0.39, -0.32);//1
	glEnd();

}
void Octagon()
{   //------>Filled Octagon
	glBegin(GL_POLYGON);
	glColor3ub(216, 0, 254);
	glVertex2f(0.4, 0.1);
	glVertex2f(0.32, 0.18);
	glVertex2f(0.32, 0.32);
	glVertex2f(0.4, 0.4);
	glVertex2f(0.5, 0.4);
	glVertex2f(0.58, 0.32);
	glVertex2f(0.58, 0.18);
	glVertex2f(0.5, 0.1);
	glEnd();
	//------>Hollow Octagon
	glBegin(GL_LINES);
	glColor3ub(216, 0, 254);
	glVertex2f(0.7, 0.1);//1
	glVertex2f(0.62, 0.18);//2
	glVertex2f(0.62, 0.18);//2
	glVertex2f(0.62, 0.32);//3
	glVertex2f(0.62, 0.32);//3
	glVertex2f(0.7, 0.4);//4
	glVertex2f(0.7, 0.4);//4
	glVertex2f(0.8, 0.4);//5
	glVertex2f(0.8, 0.4);//5
	glVertex2f(0.88, 0.32);//6
	glVertex2f(0.88, 0.32);//6
	glVertex2f(0.88, 0.18);//7
	glVertex2f(0.88, 0.18);//7
	glVertex2f(0.8, 0.1);//8
	glVertex2f(0.8, 0.1);//8
	glVertex2f(0.7, 0.1);//1
	glEnd();
	glFlush();
}
void Circle()
{   //------>Filled Circle
	GLfloat x = -.15;
	GLfloat y = .2;
	GLfloat Radius = .12f;
	int tri = 360;
	GLfloat doublepi = 2.0f *PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(220, 220, 0);
	glVertex2f(x, y);
	for (int i = 0; i <= tri; i++)
	{
		glVertex2f(
			x + (Radius * cos(i * doublepi / tri)),
			y + (Radius * sin(i * doublepi / tri))
		);
	}
	glEnd();
	//------>Hollow Circle
	x = +.15;
	y = .2;
	Radius = .12f;
	static const double inc = PI / 12;
	static const double max = 2 * PI;
	glColor3ub(220, 520, 0);
	glBegin(GL_LINE_LOOP);
	for (double d = 0; d < max; d += inc) {
		glVertex2f(cos(d) * Radius + x, sin(d) * Radius + y);
	}
	glEnd();

}

void render()
{
	glClearColor(0.576471f, 0.847059f, 0.737255f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//------>Shapes
	Triangle();
	Rohumbus();
	Pentagon();
	Hexagon();
	Heptagon();
	Octagon();
	Circle();
	glutSwapBuffers();
}



int main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(1024, 786);
	glutCreateWindow("Dijesh");

	glutDisplayFunc(render);

	GLenum err = glewInit();
	if (GLEW_OK != err) {
		fprintf(stderr, "GLEW error");
		return 1;
	}

	glutMainLoop();
	return 0;
}