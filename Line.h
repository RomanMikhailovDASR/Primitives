//
// Created by xaero on 15.04.2020.
//

#ifndef UNTITLED1_LINE_H
#define UNTITLED1_LINE_H

#include "Vector2D.h"
#include <GL/glut.h>

class Line {
private:
    double x1; // координаты, прозрачность и цвета в RGB для первой точки
    double y1;
    double red1;
    double green1;
    double blue1;
    double transparency1;
    double x2; // и для второй
    double y2;
    double red2;
    double green2;
    double blue2;
    double transparency2;
    double width;
public:
    Line (); // дефолтный конструктор, а также конструктор с центром указанным по вектору и заданным через координаты
    Line (Vector2D v1, Vector2D v2, double red1,double green1,double blue1,double transparency1,
          double red2,double green2,double blue2,double transparency2);
    Line (double x1, double x2, double y1, double y2, double red1, double green1, double blue1, double transparency1,
          double red2, double green2, double blue2, double transparency2);

    ~Line (); // типикал деструктор

    void drow_line(); // нарисовать линию

    void move_up(double up); // изменить положение линии
    void move_down(double down);
    void move_right(double right);
    void move_left(double left);

    void new_coordinates(double x1, double y1, double x2, double y2);

    void change_width(double width); // изменить толщину линии

    void change_transparency(double transparency1, double transparency2); // изменить прозрачность

    void change_line_color(double red1, double green1, double blue1,
                      double red2, double green2, double blue2); // изменить цвет

};


#endif //UNTITLED1_LINE_H
