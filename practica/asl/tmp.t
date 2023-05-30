function one
  params
    _result float
  endparams

   %1 = 1
   _result = %1
   return
endfunction

function sort
  params
    v float array
  endparams

  vars
    i integer
    j integer
    jmin integer
    i integer
    j integer
    jmin integer
    i integer
    j integer
    jmin integer
    aux float
  endvars

     %2 = 0
     i = %2
  label while2 :
     %3 = 20
     %4 = 1
     %5 = %3 - %4
     %6 = i < %5
     ifFalse %6 goto endwhile2
     jmin = i
     %10 = 1
     %11 = i + %10
     j = %11
  label while1 :
     %12 = 20
     %13 = j < %12
     ifFalse %13 goto endwhile1
     %16 = v
     %15 = %16[j]
     %18 = v
     %17 = %18[jmin]
     %19 = %15 <. %17
     ifFalse %19 goto endif1
     jmin = j
  label endif1 :
     %23 = 1
     %24 = j + %23
     j = %24
     goto while1
  label endwhile1 :
     %26 = jmin == i
     %25 = not %26
     ifFalse %25 goto endif2
     %29 = v
     %28 = %29[i]
     aux = %28
     %30 = v
     %32 = v
     %31 = %32[jmin]
     %30[i] = %31
     %33 = v
     %33[jmin] = aux
  label endif2 :
     %35 = 1
     %36 = i + %35
     i = %36
     goto while2
  label endwhile2 :
     return
endfunction

function evenPositivesAndSort
  params
    v float array
  endparams

  vars
    i integer
  endvars

     %2 = 0
     i = %2
  label while1 :
     %3 = 20
     %4 = i < %3
     ifFalse %4 goto endwhile1
     %7 = v
     %6 = %7[i]
     %8 = 0
     %11 = float %8
     %10 = %6 <=. %11
     %9 = not %10
     ifFalse %9 goto endif1
     %12 = v
     pushparam 
     call one
     popparam %13
     %12[i] = %13
  label endif1 :
     %15 = 1
     %16 = i + %15
     i = %16
     goto while1
  label endwhile1 :
     pushparam v
     call sort
     popparam 
     return
endfunction

function main
  vars
    af float 20
    i integer
  endvars

     %2 = 0
     i = %2
  label while1 :
     %3 = 20
     %4 = i < %3
     ifFalse %4 goto endwhile1
     readf %7
     af[i] = %7
     %9 = 1
     %10 = i + %9
     i = %10
     goto while1
  label endwhile1 :
     %11 = &af
     pushparam %11
     call evenPositivesAndSort
     popparam 
     %13 = 0
     i = %13
  label while2 :
     %14 = 20
     %15 = i < %14
     ifFalse %15 goto endwhile2
     %17 = af[i]
     pushparam 
     call one
     popparam %18
     %20 = %17 ==. %18
     %19 = not %20
     ifFalse %19 goto else1
     %21 = af[i]
     writef %21
     %22 = ' '
     writec %22
     %24 = 1
     %25 = i + %24
     i = %25
     goto endif1
  label else1 :
     %26 = '\n'
     writec %26
  label endif1 :
     goto while2
  label endwhile2 :
     %27 = '\n'
     writec %27
     return
endfunction


