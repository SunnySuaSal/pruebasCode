! Asi es, este programa calcula la media,
! varianza y desviacion estandar de un
! conjunto de n datos

real :: media !asi se declaran tipos de datos ahorita
sum = 0.0
sumcua = 0.0
read(*,*) n

do 100 i=1, n
  read(*,*) x
  sum = sum + x
  sumcua = sumcua + x**2
100 continue

xn = float(n)
media = sum/xn
var = sumcua/xn-media**2
stdDev = sqrt(var)

write(*,10) media, var, stdDev
10 format(1x, 3(f10.2,2x))

stop
end
