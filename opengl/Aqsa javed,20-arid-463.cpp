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


    ////////////////     tree       //////
     
    /////////////  01   //////////
     ///tree#1 upper part
    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.39, 0.51);
    glVertex2f(0.32, 0.51);
    glVertex2f(0.35, 0.55);
    glVertex2f(0.33, 0.59);
    glVertex2f(0.37, 0.6);
    glVertex2f(0.39, 0.65);
    glVertex2f(0.41, 0.6);
    glVertex2f(0.45, 0.59);
    glVertex2f(0.43, 0.55);
    glVertex2f(0.46, 0.51);

    glEnd();
    glFlush();

    //tree shade
    glColor3f(0.16, 0.50, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.45, 0.52);
    glVertex2f(0.4, 0.52);
    glVertex2f(0.44, 0.53);
    glVertex2f(0.41, 0.55);
    glVertex2f(0.43, 0.59);
    glVertex2f(0.39, 0.6);
    glVertex2f(0.39, 0.64);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.42, 0.59);
    glVertex2f(0.4, 0.55);
    glVertex2f(0.43, 0.52);

    glEnd();
    glFlush();

    ///tree stem
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.38, 0.41);
    glVertex2f(0.38, 0.51);
    glVertex2f(0.4, 0.51);
    glVertex2f(0.4, 0.41);

    glEnd();
    glFlush();

    ///////////////  02  ///////////

        ///tree#2 upper part

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.76, 0.6);
    glVertex2f(0.8, 0.78);
    glVertex2f(0.86, 0.6);

    ///tree shade

    glColor3f(0.16, 0.50, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.84, 0.62);
    glVertex2f(0.8, 0.76);
    glVertex2f(0.8, 0.77);
    glVertex2f(0.85, 0.62);


    glEnd();
    glFlush();
     ///tree stem
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.8, 0.5);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.82, 0.6);
    glVertex2f(0.82, 0.5);

    glEnd();
    glFlush();


    ///////////////  03  ///////////


    ////////////Round tree upper part #03//////
    GLfloat PI = 3.14159269;
    GLfloat x = .65f; GLfloat y = .65f; GLfloat radius = .09f;
    int triangleAmount = 40;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.30, 0.60, 0.00);

    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glFlush();


 
    ///tree stem
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
  
    glVertex2f(0.65, 0.6);
    glVertex2f(0.63, 0.66);
    glVertex2f(0.66, 0.62);
    glVertex2f(0.67, 0.66);
    glVertex2f(0.68, 0.6);
   

    glEnd();
    glFlush();

    //stem lower part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.65, 0.5);
    glVertex2f(0.65, 0.6);
    glVertex2f(0.68, 0.6);
    glVertex2f(0.68, 0.5);

    glEnd();
    glFlush();



    ///////////////////////   04   ///////////



      ///tree stem
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.92, 0.2);
    glVertex2f(0.92, 0.35);
    glVertex2f(0.95, 0.35);
    glVertex2f(0.95, 0.2);

    glEnd();
    glFlush();

    //stem left part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.92, 0.25);
    glVertex2f(0.88, 0.3);
    glVertex2f(0.89, 0.31);
    glVertex2f(0.92, 0.27);

    glEnd();
    glFlush();
 
   
   

    ///////////////////////////wood stand ///////

    // left side wood stand for heating pot
    glColor3f(0.40, 0.00, 0.07);
    glBegin(GL_POLYGON);
    glVertex2f(0.47, 0.15);
    glVertex2f(0.46, 0.19);
    glVertex2f(0.62, 0.33);
    glVertex2f(0.64, 0.32);

    glEnd();
    glFlush();

    // right side wood stand for heating pot
    glColor3f(0.40, 0.00, 0.07);
    glBegin(GL_POLYGON);
    glVertex2f(0.76, 0.15);
    glVertex2f(0.75, 0.19);
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



/*   //drawing circle
    GLfloat PI = 3.14159269;
    GLfloat x = .5f; GLfloat y = .5f; GLfloat radius = .2f;
    int triangleAmount = 40;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x +(radius *cos(i * twicePi /triangleAmount)),
            y + (radius *sin( i * twicePi/triangleAmount))
        );
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
    glutInitWindowSize(1050,750 );
   // glutInitWindowPosition(400, 230);
    glutCreateWindow("Aqsa");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}