sum = 0.0
do 100 i=1, 25
read(*,*) a
sum = sum + a
100 continue
prom = sum/25.0
write(*, 20) prom
20 format (1x, 'The average is ', 1x, f5.1)
stop
end
