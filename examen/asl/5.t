function f
  params
    _result character
    r float
    b boolean
  endparams

     %1 = 10
     %4 = float %1
     %3 = r <=. %4
     %2 = not %3
     %5 = %2 and b
     ifFalse %5 goto else1
     %6 = 'R'
     _result = %6
     return
     goto endif1
  label else1 :
     %8 = 5
     %11 = float %8
     %9 = r <. %11
     ifFalse %9 goto else2
     %12 = '$'
     _result = %12
     return
     goto endif2
  label else2 :
     %14 = 'k'
     _result = %14
     return
  label endif2 :
  label endif1 :
     return
endfunction

function main
  vars
    a integer
    b integer
    a integer
    b integer
    x float
    y float
    x float
    y float
  endvars

     %1 = 3
     %2 = float %1
     x = %2
     %3 = 2
     a = %3
     %5 = 6
     b = %5
     %7 = a
     %8 = a
     %9 = 1
     %11 = %7
  label Pow1 :
     %10 = %8 <= %9
     %10 = not %10
     ifFalse %10 goto endPow1
     %11 = %11 * %7
     %8 = %8 - %9
     goto Pow1
  label endPow1 :
     y = %11
     %13 = 2
     %15 = float %13
     %14 = y *. %15
     writef %14
     writes "\n"
  label while4 :
     %16 = a
     %17 = b
     %18 = 1
     %20 = %16
  label Pow2 :
     %19 = %17 <= %18
     %19 = not %19
     ifFalse %19 goto endPow2
     %20 = %20 * %16
     %17 = %17 - %18
     goto Pow2
  label endPow2 :
     %21 = 3
     %24 = float %21
     %23 = %20 <=. %24
     %22 = not %23
     ifFalse %22 goto endwhile4
     writei a
     writes "**"
     writei b
     writes "="
     %25 = a
     %26 = b
     %27 = 1
     %29 = %25
  label Pow3 :
     %28 = %26 <= %27
     %28 = not %28
     ifFalse %28 goto endPow3
     %29 = %29 * %25
     %26 = %26 - %27
     goto Pow3
  label endPow3 :
     writef %29
     writes "\n"
     %30 = 1
     %31 = b - %30
     b = %31
     goto while4
  label endwhile4 :
     %34 = 3
     %35 = 2
     %36 = 4
     %37 = b + %36
     %38 = %35
     %39 = %37
     %40 = 1
     %42 = %38
  label Pow5 :
     %41 = %39 <= %40
     %41 = not %41
     ifFalse %41 goto endPow5
     %42 = %42 * %38
     %39 = %39 - %40
     goto Pow5
  label endPow5 :
     %44 = float %34
     %43 = %44 +. %42
     %45 = 1
     %46 = b - %45
     %47 = x
     %48 = %46
     %49 = 1
     %51 = %47
  label Pow6 :
     %50 = %48 <= %49
     %50 = not %50
     ifFalse %50 goto endPow6
     %51 = %51 *. %47
     %48 = %48 - %49
     goto Pow6
  label endPow6 :
     %52 = %43 -. %51
     %53 = 0
     pushparam 
     pushparam %52
     pushparam %53
     call f
     popparam 
     popparam 
     popparam %33
     writec %33
     writes "\n"
     return
endfunction


