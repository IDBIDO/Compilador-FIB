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
     %8 = 3
     %10 = 56
     %12 = 9
     %11 = z[%12]
     %13 = %10 + %11
     z[%8] = %13
     %15 = 3
     %14 = z[%15]
     %18 = float %14
     %17 = %18 <=. b
     %16 = not %17
     ifFalse %16 goto else1
     %20 = 78
     x = %20
     writef b
     writes "\n"
     goto endif1
  label else1 :
     %23 = 99
     x = %23
  label endif1 :
     %26 = 3
     %25 = z[%26]
     writei %25
     writes "\n"
     %27 = 1
     _result = %27
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

     %2 = 3
     %3 = 2
     %4 = float %3
     pushparam 
     pushparam %2
     pushparam %4
     call f
     popparam 
     popparam 
     popparam %1
     ifFalse %1 goto endif1
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


