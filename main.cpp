#include <iostream>
#include <GL/glut.h>
#include "Vector2D.cpp" //это лучше оставить, работает и ладно
#include "Vector2D.h"
#include "Star.h"
#include "Line.h"
#include "Point.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Ellipse.h"

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //очищаем экран, чтобы картинки "не размножались"
    glLoadIdentity();  // служебная функция

    Vector2D v(0.1, 0.1);
    Point a, b, c;

    Star s;
    s.move_up(0.62);
    s.change_star_color(0, 1, 1);
    s.drow_Star();

    Triangle t, t2;
    t.move_down(0.2);
    t2.move_down(0.2);
    t.draw_triangle();
    t2.change_triangle_size(0.5);

    Line l;
    l.change_line_color(1,1,0.5,1,1,1);
    l.move_up(0.4);
    l.move_right(0.2);
    l.new_coordinates(1, 1, -1, -1);
    l.drow_line();
    t2.draw_triangle();

    Circle circle, circle2;
    circle2.change_size(0.6);
    circle2.move_left(0.8);
    circle2.move_up(0.8);
    circle2.change_circle_color(0.5, 0, 1);
    circle2.draw_circle();
    circle.draw_the_Ring();

    Rectangle r;
    r.move_down(0.7);
    r.move_left(0.7);
    r.draw_Rectangle();

    Ellipse e, e2;
    e.draw_ellipse();
    e2.move_down(0.7);
    e2.move_right(0.7);
    e2.change_big(0.3);
    e2.change_small(0.8);
    e2.change_ellipse_color(0,0.5,1);
    e2.draw_full_ellipse();

    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Graphoooooon!!!");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}