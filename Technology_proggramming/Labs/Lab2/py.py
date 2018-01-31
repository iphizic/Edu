import sys
from math import log1p
from math import fabs
from math import sin
from math import atan


x=-15.246
y=4.642E-2
z=20.001E2

a=log1p(pow(y,-pow(fabs(x),0.5)))*(x-y/2)+pow(sin(atan(z)),2)
print(a)
