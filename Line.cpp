//
// Created by xaero on 15.04.2020.
//

#include "Line.h"

Line::Line () {
    x1 = -0.5;
    x2 = 0.5;
    y1 = -0.5;
    y2 = 0.5;
    red1 = 1;
    green1 = 0;
    blue1 = 0;
    red2 = 0;
    green2 = 0;
    blue2 = 1;
    width = 4;
    transparency1 = 1;
    transparency2 = 1;
};

Line::Line (Vector2D v1, Vector2D v2, double red1,double green1,double blue1,double transparency1,
                                      double red2,double green2,double blue2,double transparency2) {
    x1 = v1.getX();
    y1 = v1.getY();
    x2 = v2.getX();
    y2 = v2.getY();
    this->red1 = red1;
    this->green1 = green1;
    this->blue1 = blue1;
    this->transparency1 = transparency1;
    this->red2 = red2;
    this->green2 = green2;
    this->blue2 = blue2;
    this->transparency2 = transparency2;
};

Line::Line (double x1, double x2, double y1, double y2, double red1, double green1, double blue1, double transparency1,
                                                        double red2, double green2, double blue2, double transparency2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->red1 = red1;
    this->green1 = green1;
    this->blue1 = blue1;
    this->transparency1 = transparency1;
    this->red2 = red2;
    this->green2 = green2;
    this->blue2 = blue2;
    this->transparency2 = transparency2;
};

Line::~Line () {
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
};

void Line::drow_line() {
    glLineWidth(width);
    glBegin(GL_LINES);

    glColor3f(red1, green1, blue1);
    glVertex2f(x1, y1);

    glColor3f(red2, green2, blue2);
    glVertex2f(x2, y2);
    glEnd();
};

void Line::move_up(double up) {
    y1 += up;
    y2 += up;
};

void Line::move_down(double down) {
    y1 -= down;
    y2 -= down;
};

void Line::move_right(double right) {
    x1 += right;
    x2 += right;
};

void Line::move_left(double left) {
    x1 -= left;
    x2 -= left;
};

void Line::new_coordinates(double x1, double y1, double x2, double y2) {
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}

void Line::change_width(double width) {
    this->width = width;
};

void Line::change_transparency(double transparency1, double transparency2) {
    this->transparency1 = transparency1;
    this->transparency2 = transparency2;
};

void Line::change_line_color(double red1, double green1, double blue1,
                  double red2, double green2, double blue2) {
    this->red1 = red1;
    this->green1 = green1;
    this->blue1 = blue1;
    this->red2 = red2;
    this->green2 = green2;
    this->blue2 = blue2;
};