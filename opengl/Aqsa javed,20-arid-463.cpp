#include <GL/glut.h>
#include <iostream>

// Function to handle rendering
void renderScene() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

    // Set the color for the rectangles
    glColor3f(1.0f, 0.0f, 0.0f); // Red color

    // Draw the first rectangle
    glRecti(100, 100, 200, 200);

    // Set a different color for the second rectangle
    glColor3f(0.0f, 1.0f, 0.0f); // Green color

    // Draw the second rectangle
    glRecti(150, 150, 250, 250);

    // Swap buffers to display the rendered image
    glutSwapBuffers();
    // Check for OpenGL errors
    GLenum error = glGetError();
    if (error != GL_NO_ERROR) {
        std::cout << "OpenGL Error: " << gluErrorString(error) << std::endl;
    }
}

int main(int argc, char** argv) {
    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // Double buffer and RGB color mode
    glutInitWindowSize(400, 400); // Set the window size
    glutCreateWindow("Aligned Rectangles"); // Create a window with the specified title

    // Set the clear color to white
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 400, 0, 400); // Adjust the values according to your desired coordinate system
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
  


    // Set the rendering callback function
    glutDisplayFunc(renderScene);

    // Enter the GLUT event processing loop
    glutMainLoop();

    return 0;
}
