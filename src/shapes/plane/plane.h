#ifndef ASSESSMENT_2_PLANE_H
#define ASSESSMENT_2_PLANE_H

#include <vector>
#include "../shape/shape.h"

/// Represents a container for 2D objects.
class Plane {
public:
    /// Performs memory management on shape objects in private member field _shapes.
    virtual ~Plane();
    /// Inserts a shape to the plane.
    void addShape(Shape* shape);
    /// Removes a shape from the plane.
    void removeShape(int index);
    /// Moves the nth shape to a new location on the plane.
    void moveShape(int index, Point* newPos);
    /// Scales the nth shape on the plane by a given multiplier.
    void scaleShape(int index, float multiplier);
    /// Gets detailed information on the nth shape on the plane.
    string getInfo(int index);
private:
    vector<Shape*> _shapes;
};


#endif //ASSESSMENT_2_PLANE_H
