! Este programa lee un dato y calcula 3 funciones

implicit double precision (a-h, o-z)
parameter (pi = 3.141592653589793d0)

read(*,*) t

rad = t * pi / 180.0d0

x = t**3 - 8.0d0*t + 4.0d0
y = sin(rad)+cos(2.0d0*rad)
z = exp(3.0d0*t + 5.0d0)

write(*,10) x,y,z
10 format(3(1x,f17.9))

stop
end
