function x2
  params
    _result integer
    a integer array
  endparams

  vars
    i integer
    n integer
  endvars

     %2 = 0
     n = %2
     %5 = 0
     i = %5
  label while1 :
     %7 = 10
     %8 = i < %7
     ifFalse %8 goto endwhile1
     %11 = a
     %10 = %11[i]
     %12 = 80
     %13 = %10 < %12
     ifFalse %13 goto endif1
     %16 = 1
     %17 = n + %16
     n = %17
  label endif1 :
     %19 = a
     %21 = a
     %20 = %21[i]
     %22 = 2
     %23 = %20 * %22
     %19[i] = %23
     %25 = a
     %24 = %25[i]
     writei %24
     writes "\n"
     %27 = 1
     %28 = i + %27
     i = %28
     goto while1
  label endwhile1 :
     _result = n
     return
endfunction

function main
  vars
    x integer 10
    i integer
    z integer
    i integer
    z integer
  endvars

     %2 = 0
     i = %2
  label while1 :
     %4 = 10
     %5 = i < %4
     ifFalse %5 goto endwhile1
     %8 = 77
     %9 = %8 + i
     x[i] = %9
     %11 = 1
     %12 = i + %11
     i = %12
     goto while1
  label endwhile1 :
     %15 = 0
     i = %15
  label while2 :
     %17 = 10
     %18 = i < %17
     ifFalse %18 goto endwhile2
     %20 = x[i]
     writei %20
     writes "\n"
     %22 = 1
     %23 = i + %22
     i = %23
     goto while2
  label endwhile2 :
     %27 = &x
     pushparam 
     pushparam %27
     call x2
     popparam 
     popparam %26
     z = %26
     writes "z:"
     writei z
     writes "\n"
     %30 = 0
     i = %30
  label while3 :
     %32 = 10
     %33 = i < %32
     ifFalse %33 goto endwhile3
     writes "x["
     writei i
     writes "]="
     %35 = x[i]
     writei %35
     writes "\n"
     %37 = 1
     %38 = i + %37
     i = %38
     goto while3
  label endwhile3 :
     return
endfunction


