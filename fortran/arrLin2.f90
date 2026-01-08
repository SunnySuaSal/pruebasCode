! Now lets see if we can prescinde from 
! the dimension proposition by only using
! the type proposition
! Is posibble, the following code works:
real::prueba(50)
prueba(1) = 10.0
prueba(2) = 20.0
prueba(3) = prueba(1) + prueba(2)
write(*,10) prueba(3)
10 format(1x, f10.3)
stop
end
