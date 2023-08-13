import math

class Parallelogram:
    def __init__(self, side1, side2, angle):
        self.side1 = side1
        self.side2 = side2
        self.angle = angle

    def area(self):
        return self.side1 * self.side2 * math.sin(math.radians(self.angle))

side1 = float(input("Enter the length of side 1: "))
side2 = float(input("Enter the length of side 2: "))
angle = float(input("Enter the angle between the sides in degrees: "))

p = Parallelogram(side1, side2, angle)
print("The area of the parallelogram is:", p.area())
