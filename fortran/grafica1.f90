!Antes Fortran no tenia tipo caracter, ahora si, asi que 
!dividi la siguiente linea original en dos
!integer blank, dot, cross, line(101), liney(101)
character blank, dot, cross, line(101), liney(101)
data blank, dot, cross, line, liney/' ', '.', 'X', 101*' ', 101*'.'/

!Empiece una nueva pagina y salte lineas
write(*,10)
10 format('1', 10x, 'Grafica de una funcion'//3x,'X',6x,'Y'//)

!Calculamos los valores de x
x = -4.0
50 y = ((2.0*x - 1.0)*x - 22.0)*x + 21
j = int(y + 51.5)

!Pruebe si es el eje x
if(abs(x).lt.0.001) goto 100
line(51) = dot
line(j) = cross
write(*,20) x, y, line
20 format(1x,2(f6.2, 1x), 101a1)
line(j) = blank
goto 200
100 liney(j) = cross
write(*,20) x, y, liney
200 x = x + 0.1
if(x.le.4.0) goto 50
stop
end
