[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/q1pVnkq5)
# Quiz 2 - Cylinder Volume Calculation

## Background

The volume of a cylinder is found by multiplying the area of one end of the cylinder (base) by its height.
Since the end (base) of a cylinder is a circle, the area of that circle is given by the formula: 

$\huge area = \pi r^{2}$

Multiplying by the height h we get:

$\huge volume = \pi r^{2}h$

where
<pre><b>π</b> = M_PI global constant
<b>r</b> = radius of the circular end of the cylinder
<b>h</b> = height of the cylinder</pre>

### Example

<img src="Quiz3_Cylinder_Class.PNG" alt="Cylinder" width="550">

## Directions

Complete the given template in (**main.cpp**) by defining the following:
<ul>
<li>A class definition for a Circle object with:</li>
<ul>
<li>Private variable <b>m_radius</b></li>

<li>Protected variable <b>m_area</b></li>

<li>Protected method:</li>
<ul>
<li>calcArea(double radius) // to calculate the area of a Circle object with a given radius</li>
</ul>

<li>Public methods: </li>
<ul>
<li>a default constructor that initializes the <b>Circle</b> object radius variable to 1 and area variable to 3.14</li>
<li>a parameter constructor that receives a double variable as the radius and calculates and assigns the area using the calcArea method</li>
<li>display() // display the area of the Circle object</li>
</ul>
</ul>


<li>
Create a class definition for a <b>Cylinder</b> object which will inherit from the Circle class with the additional members:
</li>
<ul>
<li>Private variables:</li>
<ul>
<li><b>m_height</b> </li>
<li><b>m_volume</b> </li>
</ul>

<li>Private method:</li>
<ul>
<li>calcVolume(double r, double h) // to calculate the volume of a Cylinder object with a radius r and height h</li>
</ul>
<li>Public methods:</li>
<ul>
<li>a parameter constructor that receives a double variable as the radius and a double variable as height</li>
<li>the constructor should forward the radius value received to the Circle class parameter constructor</li>
<li>the constructor initializes the Cylinder object's m_volume using the private calcVolume method</li>
<li>display() // display area of circular end and volume of the Cylinder object using an override display function (polymorphism)</li>
</ul></ul></ul>

## UML Diagram
<img src="UML_Class_Diagram.PNG" alt="UML Diagram" width="650">

## Interface Prototype Example

### Output
<pre><b>The area of a circle with ...
a radius of 1.00 inches
has an area of 3.14 square inches.

The area of a circle with ...
a radius of 5.25 inches
has an area of 86.59 square inches.

The area of a circle with ...
a radius of 3.50 inches
has an area of 38.48 square inches.
And the volume of a Cylinder with...
a circular end area of 38.48 square inches
and a height of 8.65 inches
has a volume of 332.89 cubic inches.</b></pre>
