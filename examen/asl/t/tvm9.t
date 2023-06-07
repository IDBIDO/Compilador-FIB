function fact
  params
    _result integer
    n integer
  endparams

  vars
    f integer
  endvars

     %2 = 1
     f = %2
  label while1 :
     %4 = 1
     %6 = n <= %4
     %5 = not %6
     ifFalse %5 goto endwhile1
     %8 = f * n
     f = %8
     %11 = 1
     %12 = n - %11
     n = %12
     goto while1
  label endwhile1 :
     _result = f
     return
endfunction

function main
  vars
    max integer
    i integer
    f integer
    max integer
    i integer
    f integer
    max integer
    i integer
    f integer
    end boolean
  endvars

     %2 = 0
     i = %2
     %5 = 1
     end = %5
     readi %8
     max = %8
     %9 = i <= max
     ifFalse %9 goto else1
     %12 = 0
     end = %12
     goto endif1
  label else1 :
     %15 = 0
     i = %15
  label endif1 :
  label while1 :
     %17 = not end
     ifFalse %17 goto endwhile1
     writei i
     writes "!="
     pushparam 
     pushparam i
     call fact
     popparam 
     popparam %18
     writei %18
     writes "\n"
     %19 = i == max
     ifFalse %19 goto else2
     %22 = 1
     end = %22
     goto endif2
  label else2 :
     %25 = 1
     %26 = i + %25
     i = %26
  label endif2 :
     goto while1
  label endwhile1 :
     return
endfunction


