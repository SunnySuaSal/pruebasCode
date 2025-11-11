! utilza la forma general del clclo do
! para imprimir numeros impares

do 200 ipar = 2, 100, 2
  write(*,10) ipar
  10 format(6x, i3)
200 continue
stop
end
