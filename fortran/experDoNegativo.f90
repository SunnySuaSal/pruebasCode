! vamos a ver si el fortran no estructurado actual
! soporta los saltos negativos de la variable iteradora
! en los ciclos do generales

do 500 i=100, 1, -1
  write(*,10) i
  10 format(1x, i3)
500 continue
stop
end

!resultado: si que lo acepta.
