function main
  vars
    a integer
    b integer
    end boolean
    pi float
  endvars

   %1 = 12
   a = %1
   %2 = 5
   %3 = a * %2
   %4 = 1
   %5 = a + %4
   %6 = a * %5
   %7 = %3 + %6
   b = %7
   %9 = b < a
   %8 = not %9
   %10 = 0
   %11 = a == %10
   %13 = not %11
   %14 = %8 and %13
   end = %14
   %15 = 3.3
   %16 = 1
   %17 = %16 / a
   %19 = float %17
   %18 = %15 +. %19
   %20 = 2.0
   %21 = - %20
   %23 = float a
   %22 = %21 /. %23
   %24 = %18 -. %22
   pi = %24
   %25 = a == b
   %27 = %25 or end
   writei %27
   writes "\n"
   %28 = a * b
   writei %28
   writes "\n"
   %29 = 2
   %31 = float %29
   %30 = %31 *. pi
   writef %30
   writes "\n"
   return
endfunction


