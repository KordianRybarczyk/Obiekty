#include <iostream>
#include <math.h>
#include "Classes.h"




int main()
{

    Square Squares[7] = {
            Square("K1", 5),
            Square("K2", 7),
            Square("K3", 8),
    };

    Rectangle Rectangles[7] = {
            Rectangle("R1", 9 , 11),
            Rectangle("R2", 13 , 15),
            Rectangle("R3", 17, 19),
    };

    Circle Circles[7] = {
            Circle("C1", 1),
            Circle("C2", 3),
            Circle("C3", 5),
    };

    for(int i =0; i<5; i++)
    {
        Squares[i].show();
    }

    for(int i =0; i<5; i++)
    {
        Rectangles[i].show();
    }

    for(int i =0; i<5; i++)
    {
        Circles[i].show();
    }

    std::cout << "Istnieje " << Square::numberOfSquares() << " kwadratow." << std::endl;
    std::cout << "Istnieje " << Rectangle::numberOfRectangles() << " prostokotow." << std::endl;
    std::cout << "Istnieje " << Circle::numberOfCircles() << " kol." << std::endl;
}