#include <GL/glut.h> 

void drawStar() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 1.0f, 1.0f);


    glBegin(GL_LINE_LOOP);



    glVertex2f(0.0f, 10.0f);    // 1 point
    glVertex2f(-3.0f, 5.0f);    // 2 point


    glVertex2f(-8.0f, 5.0f);    // 3point
    glVertex2f(-3.0f, 0.0f);    // 4 point

    glVertex2f(-7.0f, -6.0f);   // 5point
    glVertex2f(0.0f, -3.0f);    // 6 point

    glVertex2f(7.0f, -6.0f);    // 7 point
    glVertex2f(3.0f, 0.0f);      // 8 point

    glVertex2f(8.0f, 5.0f);     // 9 point
    glVertex2f(3.0f, 5.0f);     // 10 point


    glEnd();
    glFlush();

}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(-10, 10, -10, 10);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Star in OpenGL");
    glutInitWindowSize(800, 800);
    init();
    glutDisplayFunc(drawStar);
    glutMainLoop();
    return 0;
}
