function one
  params
    _result float
  endparams

   %1 = 1
   %3 = float %1
   _result = %3
   return
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
     %3 = '\n'
     writec %3
     %4 = 0
     %6 = v
     %5 = %6[%4]
     writef %5
     %7 = ' '
     writec %7
     %8 = 2
     %10 = v
     %9 = %10[%8]
     writef %9
     %11 = ' '
     writec %11
  label while2 :
     %12 = 20
     %13 = 1
     %14 = %12 - %13
     %15 = i < %14
     ifFalse %15 goto endwhile2
     jmin = i
     %18 = 1
     %19 = i + %18
     j = %19
  label while1 :
     %21 = 20
     %22 = j < %21
     ifFalse %22 goto endwhile1
     %25 = v
     %24 = %25[j]
     %27 = v
     %26 = %27[jmin]
     %28 = %24 <. %26
     ifFalse %28 goto endif1
     jmin = j
  label endif1 :
     %31 = 1
     %32 = j + %31
     j = %32
     goto while1
  label endwhile1 :
     %35 = jmin == i
     %34 = not %35
     ifFalse %34 goto endif2
     %37 = v
     %36 = %37[i]
     aux = %36
     %39 = v
     %41 = v
     %40 = %41[jmin]
     %39[i] = %40
     %42 = v
     %42[jmin] = aux
  label endif2 :
     %43 = 1
     %44 = i + %43
     i = %44
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
     %3 = 0
     %5 = v
     %4 = %5[%3]
     writef %4
     %6 = ' '
     writec %6
  label while1 :
     %7 = 20
     %8 = i < %7
     ifFalse %8 goto endwhile1
     %11 = v
     %10 = %11[i]
     %12 = 0
     %15 = float %12
     %14 = %10 <=. %15
     %13 = not %14
     ifFalse %13 goto endif1
     %16 = v
     pushparam 
     call one
     popparam %17
     %16[i] = %17
  label endif1 :
     %18 = 1
     %19 = i + %18
     i = %19
     goto while1
  label endwhile1 :
     %21 = 0
     %23 = v
     %22 = %23[%21]
     writef %22
     %24 = ' '
     writec %24
     %25 = 2
     %27 = v
     %26 = %27[%25]
     writef %26
     %28 = ' '
     writec %28
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
     %10 = 0
     %11 = af[%10]
     writef %11
     %12 = ' '
     writec %12
     %13 = &af
     pushparam %13
     call evenPositivesAndSort
     popparam 
     %14 = 0
     i = %14
  label while2 :
     %16 = 20
     %17 = i < %16
     ifFalse %17 goto endwhile2
     %19 = af[i]
     pushparam 
     call one
     popparam %20
     %22 = %19 ==. %20
     %21 = not %22
     ifFalse %21 goto else1
     %23 = af[i]
     writef %23
     %24 = ' '
     writec %24
     %25 = 1
     %26 = i + %25
     i = %26
     goto endif1
  label else1 :
     %28 = '\n'
     writec %28
     return
  label endif1 :
     goto while2
  label endwhile2 :
     %29 = '\n'
     writec %29
     return
endfunction


