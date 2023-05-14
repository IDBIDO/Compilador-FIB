function main
  vars
    n integer
    f integer
    aux integer
    end boolean
  endvars

     readi n
     aux = n
     %1 = 0
     %2 = n < %1
     ifFalse %2 goto endif1
     writes "n >= 0!\n"
     %4 = 1
     end = %4
  label endif1 :
     %5 = 1
     f = %5
  label while1 :
     %6 = not end
     %7 = 1
     %9 = n <= %7
     %8 = not %9
     %10 = %6 and %8
     ifFalse %10 goto endwhile1
     %11 = f * n
     f = %11
     %12 = 1
     %13 = n - %12
     n = %13
     goto while1
  label endwhile1 :
     %14 = 0
     %15 = end == %14
     ifFalse %15 goto endif2
     writei aux
     writes "!="
     writei f
     writes "\n"
  label endif2 :
     return
endfunction


