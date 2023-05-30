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
     %4 = 20
     %5 = 1
     %6 = %4 - %5
     %7 = i < %6
     ifFalse %7 goto endwhile2
     jmin = i
     %12 = 1
     %13 = i + %12
     j = %13
  label while1 :
     %15 = 20
     %16 = j < %15
     ifFalse %16 goto endwhile1
     %19 = v
     %18 = %19[j]
     %21 = v
     %20 = %21[jmin]
     %22 = %18 <. %20
     ifFalse %22 goto endif1
     jmin = j
  label endif1 :
     %27 = 1
     %28 = j + %27
     j = %28
     goto while1
  label endwhile1 :
     %31 = jmin == i
     %30 = not %31
     ifFalse %30 goto endif2
     %34 = v
     %33 = %34[i]
     aux = %33
     %36 = v
     %38 = v
     %37 = %38[jmin]
     %36[i] = %37
     %39 = v
     %39[jmin] = aux
  label endif2 :
     %41 = 1
     %42 = i + %41
     i = %42
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
     %4 = 20
     %5 = i < %4
     ifFalse %5 goto endwhile1
     %8 = v
     %7 = %8[i]
     %9 = 0
     %12 = float %9
     %11 = %7 <=. %12
     %10 = not %11
     ifFalse %10 goto endif1
     %13 = v
     pushparam 
     call one
     popparam %14
     %13[i] = %14
  label endif1 :
     %16 = 1
     %17 = i + %16
     i = %17
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
     %4 = 20
     %5 = i < %4
     ifFalse %5 goto endwhile1
     readf %8
     af[i] = %8
     %10 = 1
     %11 = i + %10
     i = %11
     goto while1
  label endwhile1 :
     %13 = &af
     pushparam %13
     call evenPositivesAndSort
     popparam 
     %15 = 0
     i = %15
  label while2 :
     %17 = 20
     %18 = i < %17
     ifFalse %18 goto endwhile2
     %20 = af[i]
     pushparam 
     call one
     popparam %21
     %23 = %20 ==. %21
     %22 = not %23
     ifFalse %22 goto else1
     %24 = af[i]
     writef %24
     %25 = ' '
     writec %25
     %27 = 1
     %28 = i + %27
     i = %28
     goto endif1
  label else1 :
     %30 = '\n'
     writec %30
  label endif1 :
     goto while2
  label endwhile2 :
     %31 = '\n'
     writec %31
     return
endfunction


