//BATMAN LOGO


#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 0.3);
    glPointSize(4.0);
    glBegin(GL_POLYGON);
    glVertex2i(140, 15);
    glVertex2i(500, 15);
    glVertex2i(620, 180);
    glVertex2i(620, 300);.



p
    glVertex2i(560, 420);
    glVertex2i(80, 420);
    glVertex2i(15, 320);
    glVertex2i(15, 180);
    glEnd();
 
    glColor3f (1.0, 1.0, 1.0);
    glPointSize(20.0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(140, 20);
    glVertex2i(500, 20);
    glVertex2i(620, 180);
    glVertex2i(620, 300);
    glVertex2i(560, 420);
    glVertex2i(80, 420);
    glVertex2i(15, 320);
    glVertex2i(15, 180);
    glEnd();
 
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POLYGON);
    glVertex2i(270, 380);
    glVertex2i(270, 100);
    glVertex2i(370, 100);
    glVertex2i(370, 380);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(270, 380);
    glVertex2i(290, 380);
    glVertex2i(290, 400);
    glVertex2i(270, 400);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(350, 380);
    glVertex2i(370, 380);
    glVertex2i(370, 400);
    glVertex2i(350, 400);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(270, 100);
    glVertex2i(270, 80);
    glVertex2i(290, 80);
    glVertex2i(290, 60);
    glVertex2i(360, 60);
    glVertex2i(360, 80);
    glVertex2i(370, 80);
    glVertex2i(370, 100);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(370, 140);
    glVertex2i(460, 140);
    glVertex2i(460, 320);
    glVertex2i(400, 320);
    glVertex2i(400, 340);
    glVertex2i(370, 340);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(370, 140);
    glVertex2i(370, 120);
    glVertex2i(400, 120);
    glVertex2i(400, 140);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(440, 140);
    glVertex2i(440, 120);
    glVertex2i(460, 120);
    glVertex2i(460, 140);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(460, 120);
    glVertex2i(549, 120);
    glVertex2i(600, 180);
    glVertex2i(600, 300);
    glVertex2i(585, 320);
    glVertex2i(460, 320);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(460, 320);
    glVertex2i(480, 320);
    glVertex2i(480, 340);
    glVertex2i(460, 340);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(480, 320);
    glVertex2i(585, 320);
    glVertex2i(540, 400);
    glVertex2i(480, 400);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(460, 380);
    glVertex2i(480, 380);
    glVertex2i(480, 400);
    glVertex2i(460, 400);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(549, 120);
    glVertex2i(460, 120);
    glVertex2i(460, 100);
    glVertex2i(480, 100);
    glVertex2i(480, 80);
    glVertex2i(500, 80);
    glVertex2i(500, 60);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(270, 140);
    glVertex2i(270, 320);
    glVertex2i(55, 320);
    glVertex2i(40, 300);
    glVertex2i(40, 180);
    glVertex2i(65, 140);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(240, 120);
    glVertex2i(270, 120);
    glVertex2i(270, 140);
    glVertex2i(240, 140);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(240, 320);
    glVertex2i(270, 320);
    glVertex2i(270, 340);
    glVertex2i(240, 340);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(65, 140);
    glVertex2i(140, 60);
    glVertex2i(140, 80);
    glVertex2i(160, 80);
    glVertex2i(160, 100);
    glVertex2i(180, 100);
    glVertex2i(180, 120);
    glVertex2i(200, 120);
    glVertex2i(200, 140);
    glEnd();
 
    glBegin(GL_POLYGON);
    glVertex2i(55, 320);
    glVertex2i(160, 320);
    glVertex2i(160, 400);
    glVertex2i(100, 400);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(160, 320);
    glVertex2i(185, 320);
    glVertex2i(185, 345);
    glVertex2i(160, 345);
    glEnd();
 
    glBegin(GL_QUADS);
    glVertex2i(160, 385);
    glVertex2i(180, 385);
    glVertex2i(180, 400);
    glVertex2i(160, 400);
    glEnd();
 
    glBegin(GL_TRIANGLES);
    glVertex2i(300, 60);
    glVertex2i(320, 40);
    glVertex2i(346, 60);
    glEnd();
    glFlush ();
    }
    void myInit (void)
    {
        glClearColor(1.0, 1.0, 1.0,1.0);
        glColor3f(0.0f, 0.0f, 0.0f);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0, 640.0, 0.0, 480.0);
    }
    int main(int argc, char** argv)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize (640, 480);
        glutInitWindowPosition (120, 170);
        glutCreateWindow("Batman");
        glutDisplayFunc(myDisplay);
        myInit ();
        glutMainLoop();
    }


