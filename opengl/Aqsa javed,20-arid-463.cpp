#include <gl/glut.h>
#include <math.h>

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();

    //////////////////////////sky and ground color//////////

    // light blue sky
    glColor3f(0.00, 0.30, 0.90);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.35);
    glVertex2f(0.0, 1.9);
    glVertex2f(1.9, 1.9);
    glVertex2f(1.9, 0.35);

    glEnd();
    glFlush();

    // ground far away
    glColor3f(0.05, 0.30, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.4, 0.35);
    glVertex2f(0.3, 0.5);
    glVertex2f(1.9, 0.5);
    glVertex2f(1.9, 0.35);

    glEnd();
    glFlush();



    // ground
    //glColor3f(0.40, 1.00, 0.40);
    glColor3f(0.05, 0.30, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.35);
    glVertex2f(1.9, 0.35);
    glVertex2f(1.9, 0.0);

    glEnd();
    glFlush();

    ////////////////////////////tent/////////////////////

    // tent
    glColor3f(0.60, 0.10, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.05, 0.35);
    glVertex2f(0.25, 0.6);
    glVertex2f(0.4, 0.35);

    glEnd();
    glFlush();


    // tent left side 
    glColor3f(0.70, 0.23, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.35);
    glVertex2f(0.0, 0.6);
    glVertex2f(0.25, 0.6);
    glVertex2f(0.05, 0.35);

    glEnd();
    glFlush();

   
    //tent inner side

    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.23, 0.35);
    glVertex2f(0.23, 0.45);
    glVertex2f(0.25, 0.5);
    glVertex2f(0.28, 0.45);
    glVertex2f(0.28, 0.35);

    glEnd();
    glFlush();

    //tent inner side left rope
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glVertex2f(0.25, 0.5);
    glVertex2f(0.2, 0.35);

    glEnd();
    glFlush();

    //tent inner side right rope
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glVertex2f(0.25, 0.5);
    glVertex2f(0.33, 0.35);

    glEnd();
    glFlush();

    // tent left side peg
    glColor3f(0.30, 0.00, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, 0.35);
    glVertex2f(0.04, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.35);

    glEnd();
    glFlush();

    // tent right side peg
    glColor3f(0.30, 0.00, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f(0.4, 0.35);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.41, 0.4);
    glVertex2f(0.41, 0.35);

    glEnd();
    glFlush();


    ////////////////tree//////

     ///tree upper part
    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.39, 0.51);
    glVertex2f(0.35, 0.51);
    glVertex2f(0.38, 0.55);
    glVertex2f(0.35, 0.59);
    glVertex2f(0.39, 0.63);
    glVertex2f(0.44, 0.59);
    glVertex2f(0.4, 0.55);
    glVertex2f(0.44, 0.5);
  

    glEnd();
    glFlush();
    ///tree stem
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.38, 0.4);
    glVertex2f(0.38, 0.51);
    glVertex2f(0.4, 0.51);
    glVertex2f(0.4, 0.4);

    glEnd();
    glFlush();

    ///////////////////////////wood stand ///////

    // left side wood stand for heating pot
    glColor3f(0.40, 0.00, 0.07);
    glBegin(GL_POLYGON);
    glVertex2f(0.4, 0.15);
    glVertex2f(0.39, 0.19);
    glVertex2f(0.62, 0.33);
    glVertex2f(0.64, 0.32);

    glEnd();
    glFlush();

    // right side wood stand for heating pot
    glColor3f(0.40, 0.00, 0.07);
    glBegin(GL_POLYGON);
    glVertex2f(0.8, 0.15);
    glVertex2f(0.82, 0.19);
    glVertex2f(0.58, 0.33);
    glVertex2f(0.56, 0.32);

    glEnd();
    glFlush();



    //////////////////////////////pot//////////////

    //pot main part
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.62, 0.26);
    glVertex2f(0.63, 0.25);
    glVertex2f(0.63, 0.2);
    glVertex2f(0.62, 0.19);
    glVertex2f(0.59, 0.19);
    glVertex2f(0.58, 0.2);
    glVertex2f(0.58, 0.25);
    glVertex2f(0.59, 0.26);

    glEnd();
    glFlush();

    //pot spout
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.58, 0.23);
    glVertex2f(0.58, 0.21);
    glVertex2f(0.56, 0.25);
    glVertex2f(0.56, 0.23);
    
    glEnd();
    glFlush();

    //pot CAP
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.58, 0.26);
    glVertex2f(0.59, 0.27);
    glVertex2f(0.62, 0.27);
    glVertex2f(0.63, 0.26);

    glEnd();
    glFlush();

    //pot handle
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glLineWidth(10.0f);
    glVertex2f(0.64, 0.24);
    glVertex2f(0.64, 0.21);
    glVertex2f(0.64, 0.23);
    glVertex2f(0.63, 0.23);
    glVertex2f(0.64, 0.22);
    glVertex2f(0.63, 0.22);
    
    glEnd();
    glFlush();


    //rope for holding pot
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glLineWidth(10.0f);
    glVertex2f(0.6, 0.25);
    glVertex2f(0.6, 0.3);
  
    glEnd();
    glFlush();



/* glColor3f(1.0f, 1.0f, 1.0f);//WHite
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.14159269 / 90.0f;
        float x = 0.3f * cos(angle);
        float y = 0.3f * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
    glFlush();*/
   


    ///////////////inner area wood fire//////////////
    
    /*
    //inner area for wood fire
    glColor3f(0.60, 0.30, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, 0.1);
    glVertex2f(0.5, 0.2);
    glVertex2f(0.7, 0.2);
    glVertex2f(0.7, 0.1);

    glEnd();
    glFlush();*/
    



}
void myInit()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(950,700 );
   // glutInitWindowPosition(400, 230);
    glutCreateWindow("Aqsa");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}