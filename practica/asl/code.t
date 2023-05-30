function f
  params
    a float array
  endparams

   %1 = 5
   %2 = a
   %4 = 5
   %5 = a
   %3 = %5[%4]
   %6 = 10
   %8 = float %6
   %7 = %3 *. %8
   %2[%1] = %7
   return
endfunction

function main
  vars
    b float 10
    c float 10
    b float 10
    c float 10
  endvars

   %1 = 5
   readf %3
   b[%1] = %3
   %4 = 7
   %7 = 5
   %6 = b[%7]
   c[%4] = %6
   %9 = 5
   %8 = b[%9]
   writef %8
   writes "\n"
   %11 = 7
   %10 = c[%11]
   writef %10
   writes "\n"
   %12 = &b
   pushparam %12
   call f
   popparam 
   %14 = 5
   %13 = b[%14]
   writef %13
   writes "\n"
   %16 = 7
   %15 = c[%16]
   writef %15
   writes "\n"
   return
endfunction


