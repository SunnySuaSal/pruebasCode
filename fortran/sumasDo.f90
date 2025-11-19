! Calcula las siguientes progresiones aritmeticas
! sum = sumatoria de i = 1 a n de x_i
! sumcua = sumatoria de i = 1 a n de x_i^2

sum = 0.0
sumcua = 0.0

read(*,*) n

do 100 i = 1, n
  read(*,*) x
  sum = sum + x
  sumcua = sumcua + x**2
100 continue

write(*,10) sum, sumcua
10 format(1x,'Sum = ',f5.2,1x,'Sumcua = ',f5.2)

stop
end
