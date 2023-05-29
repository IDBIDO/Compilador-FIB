function f
  params
    _result boolean
    a integer
    f float
  endparams

  vars
    x integer
    b boolean
    z integer 10
  endvars

     %1 = 5
     readi %3
     z[%1] = %3
     %4 = 5
     %5 = z[%4]
     %6 = 88
     %8 = float %6
     %7 = %8 *. f
     %10 = float %5
     %9 = %10 -. %7
     writef %9
     readi %12
     b = %12
     readf %14
     f = %14
     ifFalse b goto endif1
     writes "h\n\tl\\a"
     %15 = -. f
     %16 = -. %15
     %17 = -. %16
     writef %17
     writes "\n"
  label endif1 :
     %18 = 1
     _result = %18
     return
endfunction

function fz
  params
    _result float
    r integer
    u float
  endparams

  label while1 :
     %1 = 0.01
     %4 = float r
     %3 = %4 <=. %1
     %2 = not %3
     ifFalse %2 goto endwhile1
     %6 = 1
     %7 = r - %6
     r = %7
     goto while1
  label endwhile1 :
     %9 = 0
     %10 = r == %9
     ifFalse %10 goto endif1
     pushparam 
     %12 = 55555
     pushparam %12
     %13 = 5
     %14 = - %13
     %15 = 4
     %16 = %14 / %15
     %17 = float %16
     pushparam %17
     call f
     popparam 
     popparam 
     popparam 
  label endif1 :
     %18 = 3
     %19 = r + %18
     %21 = float %19
     %20 = %21 *. u
     _result = %20
     return
endfunction

function main
  vars
    a integer
    q float
  endvars

   %2 = 1
   %3 = - %2
   %4 = float %3
   q = %4
   %6 = 3
   %7 = 4
   %8 = %6 + %7
   %9 = 4444
   %10 = 3
   %12 = float %10
   %11 = q +. %12
   pushparam 
   pushparam %9
   pushparam %11
   call fz
   popparam 
   popparam 
   popparam %13
   pushparam 
   pushparam %8
   pushparam %13
   call fz
   popparam 
   popparam 
   popparam %14
   q = %14
   %16 = 3.7
   %17 = q +. %16
   %18 = 4
   %20 = float %18
   %19 = %17 +. %20
   writef %19
   writes "\n"
   return
endfunction


