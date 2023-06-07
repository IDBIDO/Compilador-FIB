function f1
  params
    a integer
    b integer
  endparams

  vars
    c float
    d integer
    found boolean
  endvars

     %1 = 0
     found = %1
     %2 = 0.7
     %4 = float a
     %3 = %4 +. %2
     c = %3
     %5 = 0
     d = %5
     %6 = a + d
     %9 = float %6
     %8 = %9 <=. c
     %7 = not %8
     %10 = not found
     %11 = %7 or %10
     ifFalse %11 goto endif1
  label while1 :
     %12 = 0
     %14 = b <= %12
     %13 = not %14
     ifFalse %13 goto endwhile1
     %15 = 1
     %16 = b - %15
     b = %16
     %17 = 1
     found = %17
     goto while1
  label endwhile1 :
  label endif1 :
     %18 = 11
     %19 = b <= %18
     ifFalse %19 goto endif2
     %21 = 2
     %23 = float %21
     %22 = %23 *. c
     %24 = 1
     %26 = float %24
     %25 = %22 +. %26
     c = %25
  label endif2 :
     writef c
     writes "\n"
     return
endfunction

function main
  vars
    a integer
    b integer
  endvars

   %1 = 4
   a = %1
   %2 = 2
   %3 = %2 * a
   %4 = 1
   %5 = %3 + %4
   b = %5
   %6 = 3
   %7 = %6 + b
   pushparam 
   pushparam b
   pushparam %7
   call f1
   return
endfunction


