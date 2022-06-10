#ifndef __POLYGON_H__
#define __POLYGON_H__
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

/**
 * @brief La seguente classe rappresenta la base per l'implementazione delle funzioni riguardanti il calcolo delle aree
 * dei poligoni sottostanti. ATTENZIONE: questa classe DEVE essere implementata in questo modo, altrimenti le funzioni di cui
 * si è appena parlato devono essere reimplementate.
 * 
 */
class Polygon {
    private:
    std::string polygon; //Name of the polygon
    int value, value1; //Parameters to be taken when calculating the area of the polygon
    
    public:
    /**
     * @brief Construct a new Polygon object
     * 
     * @param polygon 
     * @param value 
     * @param value1 
     */
    explicit Polygon(std::string polygon, int value, int value1) {
        this->polygon = polygon;
        this->value = value;
        this->value1 = value1;
    }
    
    double triangleArea(int base, int height);
    double polygonArea(Polygon polygon, int numLati);
    double circleArea(int radius);
    double sphereVolume(int radius);
};

#endif
