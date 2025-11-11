! Este es un comentario
! Este programa calcula los impuestos
! correspondiente al probema 3.35 del libro de Fortran

ftax = 0.15
stax = 0.025
read(*,*) id, rate, hours

wage = hours * rate

tpay = wage - (wage*ftax + wage*stax)

write(*,*) tpay

stop
end
