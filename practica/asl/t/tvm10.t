function prod_escalar
  params
    _result integer
    a1 integer array
    a2 integer array
  endparams

  vars
    i integer
    s integer
  endvars

     %2 = 0
     s = %2
  label while1 :
     %4 = 10
     %5 = i < %4
     ifFalse %5 goto endwhile1
     %9 = a1
     %8 = %9[i]
     %11 = a2
     %10 = %11[i]
     %12 = %8 * %10
     %13 = s + %12
     s = %13
     %16 = 1
     %17 = i + %16
     i = %17
     goto while1
  label endwhile1 :
     _result = s
     return
endfunction

function main
  vars
    i integer
    v1 integer 10
    v2 integer 10
    v1 integer 10
    v2 integer 10
  endvars

     %2 = 0
     i = %2
  label while1 :
     %4 = 10
     %5 = i < %4
     ifFalse %5 goto endwhile1
     %8 = - i
     v1[i] = %8
     %10 = i * i
     v2[i] = %10
     %12 = 1
     %13 = i + %12
     i = %13
     goto while1
  label endwhile1 :
     %16 = &v1
     %17 = &v2
     pushparam 
     pushparam %16
     pushparam %17
     call prod_escalar
     popparam 
     popparam 
     popparam %15
     writei %15
     writes "\n"
     return
endfunction


