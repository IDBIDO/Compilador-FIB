function f
  params
    v integer array
  endparams

  vars
    c integer 10
    i integer
  endvars

     %2 = v
     %3 = 0
     %4 = 10
     %5 = 1
  label cpArray1 :
     %6 = %3 < %4
     ifFalse %6 goto endCpArray1
     %7 = %2[%3]
     c[%3] = %7
     %3 = %3 + %5
     goto cpArray1
  label endCpArray1 :
     writes "en f. c: "
     %9 = 0
     i = %9
  label while2 :
     %11 = 10
     %12 = i < %11
     ifFalse %12 goto endwhile2
     %14 = c[i]
     writei %14
     %15 = ' '
     writec %15
     %17 = 1
     %18 = i + %17
     i = %18
     goto while2
  label endwhile2 :
     %20 = '\n'
     writec %20
     return
endfunction

function g
  params
    v integer array
  endparams

  vars
    d integer 10
    i integer
  endvars

     %2 = 0
     i = %2
  label while1 :
     %4 = 10
     %5 = i < %4
     ifFalse %5 goto endwhile1
     %8 = 1
     %9 = - %8
     d[i] = %9
     %11 = 1
     %12 = i + %11
     i = %12
     goto while1
  label endwhile1 :
     %14 = v
     %15 = %14
     %16 = 0
     %17 = 10
     %18 = 1
  label cpArray2 :
     %19 = %16 < %17
     ifFalse %19 goto endCpArray2
     %20 = d[%16]
     %15[%16] = %20
     %16 = %16 + %18
     goto cpArray2
  label endCpArray2 :
     return
endfunction

function main
  vars
    a integer 10
    b integer 10
    a integer 10
    b integer 10
    i integer
    j integer
    i integer
    j integer
  endvars

     %2 = 0
     i = %2
  label while1 :
     %4 = 10
     %5 = i < %4
     ifFalse %5 goto endwhile1
     a[i] = i
     %9 = 0
     b[i] = %9
     %11 = 1
     %12 = i + %11
     i = %12
     goto while1
  label endwhile1 :
     %15 = 0
     %16 = 10
     %17 = 1
  label cpArray2 :
     %18 = %15 < %16
     ifFalse %18 goto endCpArray2
     %19 = a[%15]
     b[%15] = %19
     %15 = %15 + %17
     goto cpArray2
  label endCpArray2 :
     writes "despres de b=a. b: "
     %21 = 0
     i = %21
  label while3 :
     %23 = 10
     %24 = i < %23
     ifFalse %24 goto endwhile3
     %26 = b[i]
     writei %26
     %27 = ' '
     writec %27
     %29 = 1
     %30 = i + %29
     i = %30
     goto while3
  label endwhile3 :
     %32 = '\n'
     writec %32
     writes "despres de b=a. a: "
     %34 = 0
     i = %34
  label while4 :
     %36 = 10
     %37 = i < %36
     ifFalse %37 goto endwhile4
     %39 = a[i]
     writei %39
     %40 = ' '
     writec %40
     %42 = 1
     %43 = i + %42
     i = %43
     goto while4
  label endwhile4 :
     %45 = '\n'
     writec %45
     %46 = &a
     pushparam %46
     call f
     popparam 
     writes "despres de f(a). a: "
     %48 = 0
     i = %48
  label while5 :
     %50 = 10
     %51 = i < %50
     ifFalse %51 goto endwhile5
     %53 = a[i]
     writei %53
     %54 = ' '
     writec %54
     %56 = 1
     %57 = i + %56
     i = %57
     goto while5
  label endwhile5 :
     %59 = '\n'
     writec %59
     %60 = &a
     pushparam %60
     call g
     popparam 
     writes "despres de g(a). a: "
     %62 = 0
     i = %62
  label while6 :
     %64 = 10
     %65 = i < %64
     ifFalse %65 goto endwhile6
     %67 = a[i]
     writei %67
     %68 = ' '
     writec %68
     %70 = 1
     %71 = i + %70
     i = %71
     goto while6
  label endwhile6 :
     %73 = '\n'
     writec %73
     return
endfunction


