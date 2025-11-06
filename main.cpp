#include <iostream>
#include <iomanip>
#include <cmath>        

// ---------------------- Circle ----------------------
class Circle {
private:
    double m_radius;

protected:
    double m_area;

    double calcArea(double radius) {
        return M_PI * radius * radius;
    }

public:
    // Default: radius=1, area=3.14 EXACT per spec
    Circle() : m_radius(1), m_area(3.14) {}

    explicit Circle(double radius) : m_radius(radius) {
        m_area = calcArea(radius);
    }

    virtual void display() const {
        std::cout << "The area of a circle with ...\n"
                  << "a radius of " << std::fixed << std::setprecision(2) << m_radius << " inches\n"
                  << "has an area of " << std::fixed << std::setprecision(2) << m_area << " square inches.\n\n";
    }
};

// ---------------------- Cylinder ----------------------
class Cylinder : public Circle {
private:
    double m_height;
    double m_volume;

    double calcVolume(double r, double h) {
        return M_PI * r * r * h; 
    }

public:
    Cylinder(double radius, double height) : Circle(radius), m_height(height) {
        m_volume = calcVolume(radius, height);
    }

    // Print the circle area (for the same radius) WITHOUT an extra blank line,
    // then the cylinder details — to match the sample exactly.
    void display() const override {
        // Reconstruct radius from area so we don't need Circle's private m_radius
        double radius_from_area = std::sqrt(m_area / M_PI);

        std::cout << "The area of a circle with ...\n"
                  << "a radius of " << std::fixed << std::setprecision(2) << radius_from_area << " inches\n"
                  << "has an area of " << std::fixed << std::setprecision(2) << m_area << " square inches.\n";
        std::cout << "And the volume of a Cylinder with...\n"
                  << "a circular end area of " << std::fixed << std::setprecision(2) << m_area << " square inches\n"
                  << "and a height of " << std::fixed << std::setprecision(2) << m_height << " inches\n"
                  << "has a volume of " << std::fixed << std::setprecision(2) << m_volume << " cubic inches.\n";
    }
};

int main() {
    Circle cDefault;           
    cDefault.display();

    Circle cParam(5.25);       
    cParam.display();

    // This prints BOTH the 3.50 circle-area block (no extra blank line)
    // and the cylinder block, exactly like the sample.
    Cylinder cy(3.50, 8.65);    
    cy.display();

    return 0;
}

