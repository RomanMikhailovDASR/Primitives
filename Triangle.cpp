//
// Created by xaero on 15.04.2020.
//

#include "Triangle.h"

Triangle::Triangle () {
    a.new_coordinates(0, 0.7);
    b.new_coordinates(0.5, 0);
    c.new_coordinates(-0.5, 0);
    a.set_red(1);
    a.set_green(1);
    a.set_blue(1);
    b.set_red(0);
    b.set_green(0);
    b.set_blue(1);
    c.set_red(1);
    c.set_green(0);
    c.set_blue(1);
};

Triangle::Triangle(Point a, Point b, Point c) {
    this->a = a;
    this->b = b;
    this->c = c;
};

Triangle::~Triangle() {};

void Triangle::draw_triangle() {
    glBegin(GL_TRIANGLES);
    glColor3f( a.get_red(), a.get_green(), a.get_blue());
    glVertex2f(a.get_x(), a.get_y());
    glColor3f( b.get_red(), b.get_green(), b.get_blue());
    glVertex2f(b.get_x(), b.get_y());
    glColor3f(c.get_red(), c.get_green(), c.get_blue());
    glVertex2f(c.get_x(), c.get_y());
    glEnd();
};

void Triangle::move_up(double up) {
    a.new_coordinates(a.get_x(), a.get_y() + up);
    b.new_coordinates(b.get_x(), b.get_y() + up);
    c.new_coordinates(c.get_x(), c.get_y() + up);
};

void Triangle::move_down(double down) {
    a.new_coordinates(a.get_x(), a.get_y() - down);
    b.new_coordinates(b.get_x(), b.get_y() - down);
    c.new_coordinates(c.get_x(), c.get_y() - down);
};

void Triangle::move_left(double left) {
    a.new_coordinates(a.get_x() - left, a.get_y());
    b.new_coordinates(b.get_x() - left, b.get_y());
    c.new_coordinates(c.get_x() - left, c.get_y());
};

void Triangle::move_right(double right) {
    a.new_coordinates(a.get_x() + right, a.get_y());
    b.new_coordinates(b.get_x() + right, b.get_y());
    c.new_coordinates(c.get_x() + right, c.get_y());
};

void Triangle::change_triangle_size(double p) {
    a.new_coordinates(a.get_x() * p, a.get_y() * p);
    b.new_coordinates(b.get_x() * p, b.get_y() * p);
    c.new_coordinates(c.get_x() * p, c.get_y() * p);
};
