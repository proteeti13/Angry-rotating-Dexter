#include<windows.h>
#include <GL/glut.h>

#include <stdlib.h>


#include <math.h>

#define PI 3.1416


static GLfloat spin = 0.0;//spin korar jnne initial degree
static float	tx	=  0.0;
static float	ty	=  0.0;

void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle =  PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void circle1(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2* PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);

	//golla
	//1
	glColor3f(0.827, 0.827, 0.827);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(20.4,20);

glColor3f(0.373, 0.620, 0.627);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(19.4,19);

	glColor3f(0.827, 0.827, 0.827);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(18.4,18);

	glColor3f(0.373, 0.620, 0.627);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(17.4,17);

	glColor3f(0.827, 0.827, 0.827);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(16.4,16);

	glColor3f(0.373, 0.620, 0.627);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(15.4,15);

	glColor3f(0.827, 0.827, 0.827);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(14.4,14);

		glColor3f(0.373, 0.620, 0.627);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(13.4,13);

glColor3f(0.827, 0.827, 0.827);
     glRotatef(spin, 0.0, 0.0, 1.0);
	glTranslatef(tx,ty,0);
	circle1(12.4,12);


	//hand left triangle
////////////
glPushMatrix();
glTranslatef(-2,-3,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);

   glVertex2f(1.5,-1);
   glVertex2f(-1.5,1.8);
   glVertex2f(1.2,1.3);

glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-2,-3,0);
glBegin(GL_TRIANGLES);
glColor3f(0.600, 0.196, 0.800);

    glVertex2f(1.0,-.2);
   glVertex2f(-1.0,1.5);
   glVertex2f(1.0,1.1);


glEnd();
glPopMatrix();

//hand left circle
glPushMatrix();
     glRotatef(-40,0,0,1);
     glColor3f(0,0,0);
     glTranslatef(0,-4,0);
     circle1(0.8,0.8);

glPopMatrix();

glPushMatrix();
     glRotatef(-40,0,0,1);
     glColor3f(0.600, 0.196, 0.800);
     glTranslatef(0,-4,0);
     circle1(0.6,0.6);

glPopMatrix();

//beguni fota
glPushMatrix();
glRotatef(90, 0.0, 0.0, 1.0);
glColor3f(0.600, 0.196, 0.800);
glTranslatef(-2.7,2.0,0);
circle1(-.55,.29);
glPopMatrix();



/////////////////


//labcoat
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(0,0,0);
glRectf(5,2,-2,-4);
glPopMatrix();

glPushMatrix();
glColor3f(1,1,1);
glTranslatef(0,0,0);
glRectf(4.7,1.7,-1.7,-3.5);
glPopMatrix();

glLineWidth(4);
glBegin(GL_LINES);

glColor3f(0,0,0);
glVertex2f(2,1.7);
glVertex2f(2,-3.5);
glEnd();


//face base
glTranslatef(0,5.0,0);
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0);

   glVertex2f(-4.0, 2.0);
   glVertex2f(-4.5, -1.5);
  glVertex2f(-4.75, -2.5);
   glVertex2f(-4.6, -3.5);
   glVertex2f(-4.5, -4);
   glVertex2f(-4.1, -4.5);
   glVertex2f(-3.6, -5.0);
   glVertex2f(-3.1, -5.5);
     glVertex2f(-2.5, -6.0);
     glVertex2f(-1.9, -6.25);
      glVertex2f(-1.5, -6.5);
      glVertex2f(0.0, -7.0);
    glVertex2f(5.0, -5.0);
   glVertex2f(5.0, 2.0);

glEnd();

//face
glBegin(GL_POLYGON);
glColor3f(1.000, 0.855, 0.725);

   glVertex2f(-3.75, 1.5);
   glVertex2f(-4.25, -1.25);
   glVertex2f(-4.3, -1.5);
  glVertex2f(-4.35, -2.25);
   glVertex2f(-4.4, -3.0);
   glVertex2f(-4.3, -3.5);
   glVertex2f(-4.2, -4.0);
   glVertex2f(-3.8, -4.5);
   glVertex2f(-2.8, -5.3);
   glVertex2f(-2.3, -5.6);
     glVertex2f(-2, -5.8);
     glVertex2f(-1.8, -5.9);
    glVertex2f(-1.4, -6.0);
     glVertex2f(-1.3, -6.1);
     glVertex2f(-1.2, -6.2);
      glVertex2f(-1.1, -6.3);
     glVertex2f(0.0, -6.5);
    glVertex2f(4.75, -4.5);
   glVertex2f(4.75, 1.55);

glEnd();

//mouth
glPushMatrix();

glColor3f(0,0,0);
glTranslatef(1,-4,0);
glRectf(1,1.0,-1.0,-1.0);

glPopMatrix();


//right glass
glPushMatrix();
glRotatef(10, 0.0, 0.0, 1.0);
     glColor3f(0.0, 0.0, 0.0);
     glTranslatef(3,-1.2,0);
     circle(3,-3);

      glColor3f(0.196078, 0.6, 0.8);
        glTranslatef(0,-0.5,0);
     circle(2.3,-2.0);

     glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-2,0.0,0);
     circle(1.0,-0.75);
glPopMatrix();

//left  glass
glPushMatrix();
glRotatef(-25, 0.0, 0.0, 1.0);
     glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-2.0,-1.0,0);
     circle(3,-3);

      glColor3f(0.196078, 0.6, 0.8);
        glTranslatef(0,-0.5,0);
     circle(2.3,-2.0);

      glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-2,0.0,0);
     circle(1.0,-0.75);
glPopMatrix();


//nose base
glPushMatrix();
glRotatef(15, 0.0, 0.0, 1.0);
glTranslatef(-0.7,-0.6,0);
glBegin(GL_TRIANGLES);
glColor3f(0.0, 0.0, 0.0);

   glVertex2f(0.5, -1.0);
   glVertex2f(-2.5, -0.5);
   glVertex2f(-0.5, -2.0);

glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0, 0.0, 0.0);

   glVertex2f(0.5, -1.0);
   glVertex2f(-1.5, -3.0);
   glVertex2f(1, -2.0);

glEnd();


//nose
glBegin(GL_TRIANGLES);
glColor3f(1.000, 0.855, 0.725);

   glVertex2f(0.5, -1.25);
   glVertex2f(-1.5, -1.00);
   glVertex2f(-0.0, -2.0);

glEnd();
glBegin(GL_TRIANGLES);
glColor3f(1.000, 0.855, 0.725);

   glVertex2f(0.5, -1.25);
   glVertex2f(-0.5, -2.3);
   glVertex2f(0.5, -2.0);



glEnd();

glPopMatrix();

//hair base

glPushMatrix();

glRotatef(-2, 0.0, 0.0, 1.0);
     glColor3f(0.000, 0, 0.00);
     glTranslatef(-1.0,2.5,0);
     circle1(4,2);

glPopMatrix();


//hair
glPushMatrix();

glRotatef(-2, 0.0, 0.0, 1.0);
     glColor3f(1.000, 0.549, 0.00);
     glTranslatef(-1.0,2.5,0);
     circle1(3.7,1.7);

glPopMatrix();

//hair base triangle                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            air rect
glPushMatrix();

glTranslatef(0,0,0);
glColor3f(0.000, 0, 0.00);
glBegin(GL_POLYGON);



   glVertex2f(5.0, 2.5);
   glVertex2f(2, 3.9);
   glVertex2f(2, 1);



glEnd();


glPopMatrix();

//hair  triangle
glPushMatrix();


glColor3f(1.000, 0.549, 0.00);
glBegin(GL_POLYGON);

   glVertex2f(4.99, 2.3);
   glVertex2f(1.7, 3.6);
   glVertex2f(1.7, 1.7);

glEnd();


glPopMatrix();

//a1
glPushMatrix();
     glRotatef(24, 0.0, 0.0, 1.0);
     glColor3f(0,0,0);
     glTranslatef(3.4,0,0);
     circle1(2,.8);
glPopMatrix();

//a2
glPushMatrix();
     glRotatef(20, 0.0, 0.0, 1.0);
     glColor3f(1.000, 0.549, 0.00);
     glTranslatef(3.2,.5,0);
     circle1(2,.8);
glPopMatrix();


//curl1
glPushMatrix();
     glRotatef(20, 0.0, 0.0, 1.0);
     glColor3f(0,0,0);
     glTranslatef(0.5,1.5,0);
     circle1(2,1.7);
glPopMatrix();

//curl2
glPushMatrix();
     glRotatef(20, 0.0, 0.0, 1.0);
     glColor3f(1.000, 0.549, 0.00);
     glTranslatef(0.5,1.8,0);
     circle1(2,1.7);
glPopMatrix();

//curl3

glPushMatrix();
     glRotatef(24, 0.0, 0.0, 1.0);
     glColor3f(0,0,0);
     glTranslatef(-.2,1.9,0);
     circle1(1.6,1);
glPopMatrix();

//curl4
glPushMatrix();
     glRotatef(24, 0.0, 0.0, 1.0);
     glColor3f(1.000, 0.549, 0.00);
     glTranslatef(-.2,2,0);
     circle1(1.4,.7);
glPopMatrix();

//curl5
glPushMatrix();
     glRotatef(90, 0.0, 0.0, 1.0);
     glColor3f(0,0,0);
     glTranslatef(1.8,-1.5,0);
     circle1(0.9,.4);
glPopMatrix();

//curl6
glPushMatrix();
     glRotatef(90, 0.0, 0.0, 1.0);
     glColor3f(1.000, 0.549, 0.00);
     glTranslatef(1.8,-1.5,0);
     circle1(0.7,.3);
glPopMatrix();



//mouthalfcircle
glPushMatrix();
glRotatef(90, 0.0, 0.0, 1.0);
glColor3f(0,0,0);
glTranslatef(-4.0,-1.7,0);
circle(1,-1);
glPopMatrix();

//teeth

glPushMatrix();

glColor3f(1,1,1);
glTranslatef(1,-4,0);
glRectf(0.7,0.7,0,-0.7);
glRectf(-.2,0.7,-0.7,-0.7);

glPopMatrix();
glPushMatrix();
glRotatef(90, 0.0, 0.0, 1.0);
glColor3f(0,0,0);
glTranslatef(-4.0,-1.7,0);
circle(1,-1);
glPopMatrix();

glPushMatrix();
glRotatef(90, 0.0, 0.0, 1.0);
glTranslatef(-4.0,-1.85,0);
glColor3f(1,1,1);
circle(0.7,-0.7);
glPopMatrix();

//hand right triangle
glPushMatrix();
glTranslatef(4.5,-7.1,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);

   glVertex2f(-.6,0);
   glVertex2f(1.5,1.8);
   glVertex2f(-1.2,1.3);

glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(4.5,-7.1,0);
glBegin(GL_TRIANGLES);
glColor3f(0.600, 0.196, 0.800);

   glVertex2f(-.3,.4);
   glVertex2f(.6,1.4);
   glVertex2f(-1.0,1.1);

glEnd();
glPopMatrix();

//button
glPushMatrix();
glRotatef(90, 0.0, 0.0, 1.0);
glColor3f(0,0,0);
glTranslatef(-7.7,-1.5,0);
circle1(-.55,.2);
glPopMatrix();




//hand right circle
glPushMatrix();
     glRotatef(-40,0,0,1);
     glColor3f(0,0,0);
     glTranslatef(7.6,-3.4,0);
     circle1(1.3,1.0);

glPopMatrix();

glPushMatrix();
     glRotatef(-40,0,0,1);
     glColor3f(0.600, 0.196, 0.800);
     glTranslatef(7.6,-3.4,0);
     circle1(1.0,.8);

glPopMatrix();

//beguni fota
glPushMatrix();
glRotatef(90, 0.0, 0.0, 1.0);
glColor3f(0.600, 0.196, 0.800);
glTranslatef(-6.5,-4,0);
circle1(-.55,.29);
glPopMatrix();


glLineWidth(4);
glTranslatef(-1.5,-8.4,0);
glBegin(GL_LINES);

glColor3f(0,0,0);
glVertex2f(-1.2,1.8);
glVertex2f(-1.2,3);
glEnd();

//right hand
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(5.6,2.7,0);
glRectf(.8,1.5,0,0);
glPopMatrix();

glPushMatrix();
glColor3f(1,1,1);
glTranslatef(5.6,2.7,0);
glRectf(.6,1.5,.2,.2);
glPopMatrix();

glPushMatrix();
glRotatef(180, 0.0, 0.0, 1.0);
glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-6,-4,0);
     circle(.4,-0.75);
glPopMatrix();

glPushMatrix();
glRotatef(180, 0.0, 0.0, 1.0);
glColor3f(1,1,1);
        glTranslatef(-6,-4,0);
     circle(.17,-0.6);
glPopMatrix();

//shoes

glPushMatrix();
glTranslatef(2,-.5,0);
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);

   glVertex2f(-1,0);
   glVertex2f(-2,-1.2);
   glVertex2f(0,-1.2);

glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0,0,0);

   glVertex2f(2,0);
   glVertex2f(-1.5,-2.5);
   glVertex2f(2,-2.5);

glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);

   glVertex2f(2,0);
   glVertex2f(-1,0);
   glVertex2f(0,-1.7);

glEnd();
glRectf(3,0,1.5,-3.0);
glPopMatrix();

//lines

glLineWidth(4);
glTranslatef(1,3.5,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0.5,-1);
glVertex2f(0,0.4);
glVertex2f(1.,0);
glEnd();

glLineWidth(6);
glTranslatef(1.5,2.5,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(-0.5,1);
glVertex2f(-1,2);

glEnd();

glLineWidth(5);
glTranslatef(-.59,0.5,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0,0);
glVertex2f(0.5,1);
glVertex2f(1,1.2);
glVertex2f(1.5,1.5);
glVertex2f(2,1.7);

glEnd();


glLineWidth(5);
glTranslatef(4.2,4.3,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0,0);
glVertex2f(1,1.0);
glVertex2f(1.1,1.1);



glEnd();
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0,0);
glVertex2f(1,0);




glEnd();

glLineWidth(3);
glTranslatef(-8,-10.6,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0,0);
glVertex2f(0.5,0.3);
glVertex2f(1,0.5);

glEnd();


glLineWidth(3);
glTranslatef(0.2,-0.399,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0,0);
glVertex2f(0.5,0.3);
glVertex2f(1,0.5);

glEnd();


//////////
glPushMatrix();
glLineWidth(3);
glTranslatef(6.5,0,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0,0);
glVertex2f(0,1);
//glVertex2f(1,0.5);

glEnd();

glPopMatrix();

glPushMatrix();
glLineWidth(3);
glTranslatef(7,0,0);
glBegin(GL_LINE_STRIP);

glColor3f(0,0,0);
glVertex2f(0,0);
glVertex2f(0,1);
//glVertex2f(1,0.5);

glEnd();

glPopMatrix();


	glPopMatrix();

	glFlush();
}

void spinDisplay_left(void)
{
   spin = spin + 0.1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)F
{
   spin = spin - 0.1;
   if (spin < 0)
      spin = spin + 360.0;
   glutPostRedisplay();
}


void init(void)
{
	glClearColor (1.0, 1.0, 1.0, 0.0);
	glOrtho(-25.0, 25.0, -25.0, 25.0, -25.0, 25.0);
}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			spinDisplay_left();
			break;

		case 'r':
			spinDisplay_right();
			break;

		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
			glutIdleFunc(spinDisplay_right);
          //glutIdleFunc(NULL); // make idle function inactive
         break;
      default:
         break;
   }
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1050, 1050);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("mist");
	init();
    glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

