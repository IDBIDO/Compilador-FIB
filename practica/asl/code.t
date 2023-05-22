function f
  params
    _result boolean
    a integer
    b float
  endparams

  vars
    x integer
    y boolean
    z integer 10
  endvars

     %1 = 9
     %3 = 67
     %4 = a + %3
     z[%1] = %4
     %6 = 34
     x = %6
     %7 = 3
     %9 = 56
     %10 = 9
     %11 = z[%10]
     %12 = %9 + %11
     z[%7] = %12
     writef b
     writes "\n"
     %13 = 3
     %14 = z[%13]
     %17 = float %14
     %16 = %17 <=. b
     %15 = not %16
     ifFalse %15 goto else1
     %19 = 78
     x = %19
     writef b
     writes "\n"
     goto endif1
  label else1 :
     %21 = 99
     x = %21
  label endif1 :
     %22 = 3
     %23 = z[%22]
     writei %23
     writes "\n"
     %24 = 1
     _result = %24
     return
endfunction

function fz
  params
    r integer
  endparams

  label while1 :
     %1 = 0
     %3 = r <= %1
     %2 = not %3
     ifFalse %2 goto endwhile1
     %5 = 1
     %6 = r - %5
     r = %6
     goto while1
  label endwhile1 :
     return
endfunction

function main
  vars
    a integer
  endvars

     %1 = 3
     %2 = 2
     %3 = float %2
     pushparam 
     pushparam %1
     pushparam %3
     call f
     popparam 
     popparam %4
     ifFalse %4 goto endif1
     %5 = 3.7
     %7 = float a
     %6 = %7 +. %5
     %8 = 4
     %10 = float %8
     %9 = %6 +. %10
     writef %9
     writes "\n"
  label endif1 :
     return
endfunction


