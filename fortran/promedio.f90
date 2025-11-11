! Comentario, ignorado por el compilador
! Programa: Promedio de tres numeros
! Estilo moderno (algo tenias que ceder bro)

read(*,*) a,b,c
suma = a + b + c
prom = suma / 3.0

write(*,20) a,b,c,suma,prom

10 format(3f10.3)
20 format('A=',f10.3,' B=',f10.3,' C=',f10.3, 'SUMA=',f10.3,' PROMEDIO=',f10.3)

stop
end
