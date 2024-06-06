#include <iostream>
#include <math.h>
#include "Classes.h"

int Square::m_numberOfSquares = 0;
int Circle::m_numberOfCircles = 0;
int Rectangle::m_numberOfRectangles = 0;

Square::Square() {
    s_name = "kwadrat bez nazwy";
    s_a=4;
    Square::m_numberOfSquares++;
}



Circle::Circle() {
    c_name = "kolo bez nazwy";
    c_r = 2;
    Circle::m_numberOfCircles++;
}



Rectangle::Rectangle() {
    r_name = "prostokat bez nazwy";
    r_a = 9;
    r_b = 5;
    Rectangle::m_numberOfRectangles++;
}



Square::Square(const std::string& name, double a) {
    s_name = name;
    s_a = a;
    Square::m_numberOfSquares++;
}



Circle::Circle(const std::string& name, double r) {
    c_name = name;
    c_r = r;
    Circle::m_numberOfCircles++;
}



Rectangle::Rectangle(const std::string& name, double a, double b) {
    r_name = name;
    r_a = a;
    r_b = b;
    Rectangle::m_numberOfRectangles++;
}


Square::~Square()
{
    Square::m_numberOfSquares--;
}



Circle::~Circle()
{
    Circle::m_numberOfCircles--;
}



Rectangle::~Rectangle()
{
    Rectangle::m_numberOfRectangles--;
}



void Square::setName(const std::string& name) {
    s_name = name;
}



void Circle::setName(const std::string& name) {
    c_name = name;
}


void Rectangle::setName(const std::string& name) {
    r_name = name;
}

void Square::setSa(double a) {
    s_a = a;
}



void Circle::setCr(double r) {
    c_r = r;
}



void Rectangle::setRab(double a, double b) {
    r_a = a;
    r_b = b;
}

double Square::getSa() const {
    return s_a;
}



double Circle::getCr() const{
    return c_r;
}



double Rectangle::getRa() const{
    return r_a;
}


double Rectangle::getRb() const{
    return r_b;
}



void Square::show() const {
    std::cout << "Kwadrat: " << s_name << " o boku " << s_a << std::endl;
}


void Circle::show() const {
    std::cout << "Kolo: " << c_name << " o promieniu " << c_r << std::endl;
}



void Rectangle::show() const {
    std::cout << "Prostokot: " << r_name << " o bokach " << r_a << " i " << r_b << std::endl;
}



int Square::numberOfSquares() {
    return Square::m_numberOfSquares;
};



int Circle::numberOfCircles() {
    return Circle::m_numberOfCircles;
};



int Rectangle::numberOfRectangles() {
    return Rectangle::m_numberOfRectangles;
};
