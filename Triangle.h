//
// Created by xaero on 15.04.2020.
//

#ifndef UNTITLED1_TRIANGLE_H
#define UNTITLED1_TRIANGLE_H

#include "Point.h"
#include "Vector2D.h"
#include <GL/glut.h>

class Triangle {
private:
    Point a; // этот примитив также зададим через другой примитив
    Point b;
    Point c;
public:
    Triangle (); // максимально стандартный конструктор
    Triangle(Point a, Point b, Point c); // конструктор через точки
                                         // здесь, как и с прямоугольником цвета и прозрачность задаются
                                         // через соответствующие функции для точек, образующи фигуру
    ~Triangle(); // деструктор

    void draw_triangle(); // нарисовать треугольник

    void move_up(double up); // переместить треугольник вверх, вниз, вправо и влево
    void move_down(double down);
    void move_left(double left);
    void move_right(double right);

    void change_triangle_size(double p); // изменить сторону треугольника (p > 1 - увеличение, р < 1 - уменьшение)
};


#endif //UNTITLED1_TRIANGLE_H
