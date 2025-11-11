! Encuentra el promedio de n numeros

sum = 0.0
read(*,*) n
do 200 i=1, n
  read(*,*) a
  sum = sum + a
200 continue
prom = sum/float(n)
write(*,10) prom
10 format(1x, f10.2)
stop
end

