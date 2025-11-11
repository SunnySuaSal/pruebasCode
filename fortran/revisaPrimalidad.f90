!Programa que lee un entero k > 2 y determina si k es primo
!si no lo es, imprime un divisor no trvial de k

read(*,*)k
kk = k/2
do 100 i=2, kk
  if(k.eq.(k/i)*i) go to 50
100 continue
write(*,10) k
10 format(10x,i5,1x,'es primo')
stop
50 write(*,20) k, i
20 format(10x,i5,1x,'no es primo',10x,i5,1x,'es un divisor')
stop
end
