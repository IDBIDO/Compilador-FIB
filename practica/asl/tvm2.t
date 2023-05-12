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
     %4 = true
     end = %4
  label endif1 :
     %5 = 1
     f = %5
     %6 = not end
     %7 = 1
     %9 = n <= %7
     %8 = not %9
     %10 = %6 and %8
     %14 = not end
     %15 = 1
     %17 = n <= %15
     %16 = not %17
     %18 = %14 and %16
     %10 = %18
     %19 = false
     %20 = end == %19
     ifFalse %20 goto endif2
     writei aux
     writes "!="
     writei f
     writes "\n"
  label endif2 :
     return
endfunction


