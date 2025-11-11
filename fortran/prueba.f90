! Vamos a ver si me acuerdo

read(*,*) n
if(n.le.0) go to 900

read(*,*) x
dlarg = x
i = 1

100 i = i + 1
if(i.gt.n) go to 950
read(*,*) x
if(x.gt.dlarg) dlarg = x
go to 100

900 write(*,*) 'No hay numeros para leer.'
go to 999

950 write(*,10) dlarg
10 format('El numero mas mas grande es', f10.3)

999 stop
end
