! Programa: menor de n numeros
! usando solo if logico y go to

read(*,*) n
if(n.le.0) go to 900

read(*,*) x
dmin = x
i = 1

100 i = i + 1
if(i.gt.n) go to 200
read(*,*) x
if(x.lt.dmin) dmin = x
go to 100

200 write(*,10) dmin
10 format('El menor es: ', f10.3)
go to 999

900 write(*,*) 'No hay numeros que leer.'

999 stop
end
