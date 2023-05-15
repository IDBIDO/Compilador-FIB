function f
  params
    _result boolean
    a integer
    b float
  endparams

  vars
    x integer
    y boolean
    z array<10,integer> 10
  endvars

     %1 = 67
     %2 = a + %1
     z = %2
     %3 = 34
     x = %3
     %4 = 56
     %5 = 9
     %6 = z[%5]
     %7 = %4 + %6
     z = %7
     %8 = 3
     %9 = z[%8]
     %12 = float %9
     %11 = %12 <=. b
     %10 = not %11
     ifFalse %10 goto else1
     %13 = 78
     x = %13
     writef b
     writes "\n"
     goto endif1
  label else1 :
     %14 = 99
     x = %14
  label endif1 :
     %15 = 3
     %16 = z[%15]
     writei %16
     writes "\n"
     %17 = 1
     _result = %17
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
     %4 = 1
     %5 = r - %4
     r = %5
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
     pushparam 
     pushparam %1
     pushparam %2
     call f
     popparam 
     popparam 
     popparam %3
     ifFalse %3 goto endif1
     %4 = 3.7
     %6 = float a
     %5 = %6 +. %4
     %7 = 4
     %9 = float %7
     %8 = %5 +. %9
     writef %8
     writes "\n"
  label endif1 :
     return
endfunction


