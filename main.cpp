#include <iostream>
#include <GL/glut.h>
#include "Vector2D.cpp" //это лучше оставить, работает и ладно
#include "Vector2D.h"
#include "Star.h"

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //очищаем экран, чтобы картинки "не размножались"
    glLoadIdentity();  // служебная функция

    Vector2D v(0.1, 0.1);

  
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("First program. Lesson 2");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}