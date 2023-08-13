import math

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2

    def perimeter(self):
        return 2 * math.pi * self.radius

radius = float(input("Enter the radius of the circle: "))

c = Circle(radius)
print("The area of the circle is:", c.area())
print("The perimeter of the circle is:", c.perimeter())
