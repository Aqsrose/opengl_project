
#include <gl/glut.h>
#include <math.h>

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();

    //////////////////////////sky and ground color//////////


     // Top layer Dark blue sky
    //glColor3f(0.00, 0.30, 0.90);
    glColor3f(0.10, 0.55, 1.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.85);
    glVertex2f(0.0, 1.9);
    glVertex2f(1.9, 1.9);
    glVertex2f(1.9, 0.85);

    glEnd();
    glFlush();

    //Middle layer light blue sky
    glColor3f(0.20, 0.60, 1.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.65);
    glVertex2f(0.0, 0.85);
    glVertex2f(1.9, 0.85);
    glVertex2f(1.9, 0.65);

    glEnd();
    glFlush();
    // Bottom layer light blue sky
    glColor3f(0.30, 0.65, 1.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.35);
    glVertex2f(0.0, 0.65);
    glVertex2f(1.9, 0.65);
    glVertex2f(1.9, 0.35);

    glEnd();
    glFlush();


    ////////////////    clouds      /////////
    //drawing the clouds # 01
    glColor3f(1.00, 0.60, 0.60);
    glBegin(GL_POLYGON);
    glVertex2f(0.3, 0.8);
    glVertex2f(0.3, 0.81);
    glVertex2f(0.31, 0.82);
    glVertex2f(0.34, 0.83);
    glVertex2f(0.35, 0.84);
    glVertex2f(0.37, 0.83);
    glVertex2f(0.38, 0.85);
    glVertex2f(0.39, 0.85);
    glVertex2f(0.4, 0.82);
    glVertex2f(0.41, 0.81);
    glVertex2f(0.41, 0.8);
    glEnd();
    glFlush();

    //drawing the clouds # 02
    glColor3f(1.00, 0.60, 0.60);
    glBegin(GL_POLYGON);
    glVertex2f(0.1, 0.7);
    glVertex2f(0.1, 0.71);
    glVertex2f(0.11, 0.72);
    glVertex2f(0.14, 0.73);
    glVertex2f(0.16, 0.74);
    glVertex2f(0.18, 0.73);
    glVertex2f(0.19, 0.75);
    glVertex2f(0.2, 0.75);
    glVertex2f(0.22, 0.74);
    glVertex2f(0.22, 0.73);
    glVertex2f(0.23, 0.71);
    glVertex2f(0.24, 0.7);
    glEnd();
    glFlush();


    //drawing the clouds # 03
    glColor3f(1.00, 0.60, 0.60);
    glBegin(GL_POLYGON);
    glVertex2f(0.8, 0.75);
    glVertex2f(0.81, 0.78);
    glVertex2f(0.82, 0.79);
    glVertex2f(0.84, 0.78);
    glVertex2f(0.86, 0.8);
    glVertex2f(0.88, 0.81);
    glVertex2f(0.89, 0.82);
    glVertex2f(0.93, 0.83);
    glVertex2f(0.94, 0.82);
    glVertex2f(0.96, 0.81);
    glVertex2f(0.97, 0.8);
    glVertex2f(0.98, 0.77);
    glVertex2f(0.99, 0.75);

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
    glEnd();
    glFlush();
    ///tree shade

    glColor3f(0.16, 0.50, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.84, 0.61);
    glVertex2f(0.8, 0.76);
    glVertex2f(0.8, 0.77);
    glVertex2f(0.85, 0.61);


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



    ///////////////////////  main tree 04   ///////////

       ///tree#4  part a  top

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.85, 0.55);
    glVertex2f(0.85, 0.56);
    glVertex2f(0.86, 0.58);
    glVertex2f(0.87, 0.6);
    glVertex2f(0.88, 0.61);
    glVertex2f(0.92, 0.6);
    glVertex2f(0.93, 0.61);
    glVertex2f(0.95, 0.62);
    glVertex2f(0.96, 0.59);
    glVertex2f(0.97, 0.57);
    glVertex2f(0.98, 0.55);
    glVertex2f(0.98, 0.55);
    glEnd();
    glFlush();


    ///tree#4  part a left top

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.8, 0.47);
    glVertex2f(0.8, 0.48);
    glVertex2f(0.81, 0.5);
    glVertex2f(0.82, 0.53);
    glVertex2f(0.83, 0.54);
    glVertex2f(0.85, 0.53);
    glVertex2f(0.86, 0.55);
    glVertex2f(0.88, 0.52);
    glVertex2f(0.89, 0.5);
    glVertex2f(0.9, 0.49);
    glVertex2f(0.92, 0.47);
    glVertex2f(0.92, 0.47);
    glEnd();
    glFlush();

    ///tree stem  part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.92, 0.4);
    glVertex2f(0.86, 0.47);
    glVertex2f(0.87, 0.47);
    glVertex2f(0.92, 0.42);

    glEnd();
    glFlush();

    ///tree#4  part b right

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.9, 0.45);
    glVertex2f(0.9, 0.47);
    glVertex2f(0.91, 0.48);
    glVertex2f(0.92, 0.47);
    glVertex2f(0.93, 0.49);
    glVertex2f(0.95, 0.5);
    glVertex2f(0.96, 0.51);
    glVertex2f(0.98, 0.51);
    glVertex2f(0.99, 0.45);

    glEnd();
    glFlush();

    ///tree#4 part c middle left side

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.75, 0.4);
    glVertex2f(0.75, 0.42);
    glVertex2f(0.76, 0.43);
    glVertex2f(0.78, 0.42);
    glVertex2f(0.79, 0.44);
    glVertex2f(0.81, 0.45);
    glVertex2f(0.82, 0.46);
    glVertex2f(0.84, 0.46);
    glVertex2f(0.85, 0.45);
    glVertex2f(0.87, 0.4);
    glVertex2f(0.89, 0.43);
    glVertex2f(0.9, 0.4);
    glEnd();
    glFlush();

    /// stem part

    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.86, 0.35);
    glVertex2f(0.84, 0.4);
    glVertex2f(0.85, 0.4);
    glVertex2f(0.87, 0.36);

    glEnd();
    glFlush();


    ///tree#4 part c middle right side top

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);

    glVertex2f(0.94, 0.5);
    glVertex2f(0.95, 0.53);
    glVertex2f(0.98, 0.56);
    glVertex2f(1.9, 0.5);

    glEnd();
    glFlush();

    ///tree#4 part c middle right side

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);

    glVertex2f(0.95, 0.4);
    glVertex2f(0.96, 0.42);
    glVertex2f(0.98, 0.46);
    glVertex2f(1.9, 0.4);

    glEnd();
    glFlush();

    ///tree#4 part c middle near stem

    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.85, 0.35);
    glVertex2f(0.85, 0.37);
    glVertex2f(0.86, 0.38);
    glVertex2f(0.88, 0.37);
    glVertex2f(0.89, 0.39);
    glVertex2f(0.91, 0.4);
    glVertex2f(0.92, 0.41);
    glVertex2f(0.94, 0.41);
    glVertex2f(0.95, 0.4);
    glVertex2f(0.96, 0.35);
    glVertex2f(0.85, 0.37);
    glVertex2f(0.86, 0.36);
    glEnd();
    glFlush();

    ///tree stem  part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.92, 0.32);
    glVertex2f(0.87, 0.35);
    glVertex2f(0.88, 0.35);
    glVertex2f(0.92, 0.31);

    glEnd();
    glFlush();

    ///tree#4  part d left stem part     
    glColor3f(0.30, 0.60, 0.00);
    glBegin(GL_POLYGON);

    glVertex2f(0.85, 0.3);
    glVertex2f(0.83, 0.31);
    glVertex2f(0.85, 0.34);
    glVertex2f(0.89, 0.34);
    glVertex2f(0.89, 0.3);

    glEnd();
    glFlush();

    ///tree stem top part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.92, 0.47);
    glVertex2f(0.92, 0.55);
    glVertex2f(0.95, 0.55);
    glVertex2f(0.95, 0.5);

    glEnd();
    glFlush();

    ///tree stem top left part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.92, 0.5);
    glVertex2f(0.89, 0.55);
    glVertex2f(0.9, 0.55);
    glVertex2f(0.92, 0.52);

    glEnd();
    glFlush();
    ///tree stem upper part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.92, 0.41);
    glVertex2f(0.92, 0.45);
    glVertex2f(0.95, 0.45);
    glVertex2f(0.95, 0.4);

    glEnd();
    glFlush();

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

    //stem right lower part
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.95, 0.27);
    glVertex2f(0.9, 0.28);
    glVertex2f(0.99, 0.4);
    glVertex2f(0.98, 0.4);
    glVertex2f(0.97, 0.3);
    glVertex2f(0.95, 0.29);

    glEnd();
    glFlush();




    ///////////////////////////wood stand ///////

    // left side wood stand for heating pot
    glColor3f(0.40, 0.00, 0.07);
    glBegin(GL_POLYGON);
    glVertex2f(0.48, 0.15);
    glVertex2f(0.48, 0.17);
    glVertex2f(0.62, 0.33);
    glVertex2f(0.63, 0.32);

    glEnd();
    glFlush();

    // right side wood stand for heating pot
    glColor3f(0.40, 0.00, 0.07);
    glBegin(GL_POLYGON);
    glVertex2f(0.75, 0.15);
    glVertex2f(0.74, 0.17);
    glVertex2f(0.58, 0.33);
    glVertex2f(0.57, 0.32);

    glEnd();
    glFlush();



    //////////////////////////////pot//////////////

    //pot main part
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.62, 0.26);
    glVertex2f(0.63, 0.25);
    glVertex2f(0.63, 0.2);
    glVertex2f(0.58, 0.2);
    glVertex2f(0.58, 0.25);
    glVertex2f(0.59, 0.26);

    glEnd();
    glFlush();

    //pot spout
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.58, 0.21);
    glVertex2f(0.57, 0.24);
    glVertex2f(0.57, 0.25);
    glVertex2f(0.58, 0.23);

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
    glLineWidth(10.05f);
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

    ////////////////////////   bundle of woods near tent //////////////
    
     /// wood
    glColor3f(0.50, 0.25, 0.00);
    glBegin(GL_POLYGON);
    glVertex2f(0.22, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.09, 0.35);
    glVertex2f(0.12, 0.39);
    glVertex2f(0.18, 0.39);
    glVertex2f(0.19, 0.37);
    glVertex2f(0.2, 0.35);
   
    glEnd();
    glFlush();


    //first row
    glColor3f(1.00, 0.47, 0.20);
    glBegin(GL_POLYGON);

    glVertex2f(0.1, 0.3);
    glVertex2f(0.09, 0.31);
    glVertex2f(0.09, 0.32);
    glVertex2f(0.08, 0.33);
    glVertex2f(0.08, 0.34);
    glVertex2f(0.07, 0.35);
    glVertex2f(0.07, 0.36);
    glVertex2f(0.08, 0.37);
    glVertex2f(0.09, 0.36);
    glVertex2f(0.09, 0.35);
    glVertex2f(0.1, 0.34);
    glVertex2f(0.1, 0.33);
    glVertex2f(0.11, 0.32);
    glVertex2f(0.11, 0.31);
    glEnd();
    glFlush();

    //second row
    glColor3f(1.00, 0.47, 0.20);
    glBegin(GL_POLYGON);

    glVertex2f(0.11, 0.33);
    glVertex2f(0.1, 0.34);
    glVertex2f(0.1, 0.35);
    glVertex2f(0.09, 0.36);
    glVertex2f(0.09, 0.37);
    glVertex2f(0.1, 0.38);
    glVertex2f(0.11, 0.37);
    glVertex2f(0.11, 0.36);
    glVertex2f(0.12, 0.35);
    glVertex2f(0.12, 0.34);
  
    glEnd();
    glFlush();

    //top wood
    glColor3f(1.00, 0.47, 0.20);
    glBegin(GL_POLYGON);

    glVertex2f(0.12, 0.36);
    glVertex2f(0.11, 0.37);
    glVertex2f(0.11, 0.38);
    glVertex2f(0.12, 0.39);
    glVertex2f(0.13, 0.38);
    glVertex2f(0.13, 0.37);

    glEnd();
    glFlush();


    //lines row 1 part 1
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glLineWidth(10.0f);
    glVertex2f(0.1, 0.33);
    glVertex2f(0.09, 0.32);
  
    glEnd();
    glFlush();

    //lines row 1 part 2
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glLineWidth(10.0f);
    glVertex2f(0.09, 0.35);
    glVertex2f(0.08, 0.34);

    glEnd();
    glFlush();

     //lines row 1 part 2
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glLineWidth(10.0f);
    glVertex2f(0.1, 0.35);
    glVertex2f(0.11, 0.36);

    glEnd();
    glFlush();

    //top wood line
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glLineWidth(10.0f);
    glVertex2f(0.12, 0.36);
    glVertex2f(0.19, 0.36);

    glEnd();
    glFlush();

    //middle wood line
    glColor3f(0.00, 0.00, 0.00);
    glBegin(GL_LINES);
    glLineWidth(10.0f);
    glVertex2f(0.1, 0.33);
    glVertex2f(0.21, 0.33);

    glEnd();
    glFlush();

   

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
    glutInitWindowSize(1300, 900);
    // glutInitWindowPosition(400, 230);
    glutCreateWindow("Aqsa");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}   