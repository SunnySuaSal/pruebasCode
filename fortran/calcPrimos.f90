!Usa la criba de eratostenes para calcular los numeros primos <400
!Sea A un arreglo lineal con 400 elementos
integer A
dimension A(400)
!Almacene k en A(k)
do 100 k=1, 400
A(k) = k
100 continue

A(1) = 0

!criba
do 200 i=2, 20
if(A(i).eq.0) go to 200
j = 2*i
300 if(j.gt.400) go to 200
A(j) = 0
j = j + i
go to 300
200 continue

!ya solo imprime los numeros primos
do 400 i=2, 400
if(A(i).ne.0) write(*,*) A(i)
400 continue

stop
end
