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

     %1 = 0
     i = %1
  label while2 :
     %3 = 20
     %4 = 1
     %5 = %3 - %4
     %6 = i < %5
     ifFalse %6 goto endwhile2
     jmin = i
     %9 = 1
     %10 = i + %9
     j = %10
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
     %22 = 1
     %23 = j + %22
     j = %23
     goto while1
  label endwhile1 :
     %26 = jmin == i
     %25 = not %26
     ifFalse %25 goto endif2
     %28 = v
     %27 = %28[i]
     aux = %27
     %30 = v
     %32 = v
     %31 = %32[jmin]
     %30[i] = %31
     %33 = v
     %33[jmin] = aux
  label endif2 :
     %34 = 1
     %35 = i + %34
     i = %35
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

     %1 = 0
     i = %1
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
     %14 = 1
     %15 = i + %14
     i = %15
     goto while1
  label endwhile1 :
     %17 = &v
     pushparam %17
     call sort
     popparam 
     return
endfunction

function main
  vars
    af float 20
    i integer
  endvars

     %1 = 0
     i = %1
  label while1 :
     %3 = 20
     %4 = i < %3
     ifFalse %4 goto endwhile1
     readf %6
     af[i] = %6
     %7 = 1
     %8 = i + %7
     i = %8
     goto while1
  label endwhile1 :
     %10 = &af
     pushparam %10
     call evenPositivesAndSort
     popparam 
     %11 = 0
     i = %11
  label while2 :
     %13 = 20
     %14 = i < %13
     ifFalse %14 goto endwhile2
     %16 = af[i]
     pushparam 
     call one
     popparam %17
     %19 = %16 ==. %17
     %18 = not %19
     ifFalse %18 goto else1
     %20 = af[i]
     writef %20
     %21 = ' '
     writec %21
     %22 = 1
     %23 = i + %22
     i = %23
     goto endif1
  label else1 :
     %25 = '\n'
     writec %25
  label endif1 :
     goto while2
  label endwhile2 :
     %26 = '\n'
     writec %26
     return
endfunction


