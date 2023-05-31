function main
  vars
    a integer
    b integer
    c integer
    a integer
    b integer
    c integer
    a integer
    b integer
    c integer
  endvars

   %2 = 13
   a = %2
   %5 = 4
   b = %5
   %8 = a / b
   %8 = %8 * b
   %8 = a - %8
   c = %8
   writei c
   %10 = '.'
   writec %10
   %11 = '\n'
   writec %11
   %13 = - a
   %14 = %13 / b
   %14 = %14 * b
   %14 = %13 - %14
   c = %14
   writei c
   %16 = '.'
   writec %16
   %17 = '\n'
   writec %17
   %19 = - b
   %20 = a / %19
   %20 = %20 * %19
   %20 = a - %20
   c = %20
   writei c
   %22 = '.'
   writec %22
   %23 = '\n'
   writec %23
   %25 = 3
   %26 = a + %25
   %27 = %26 / b
   %27 = %27 * b
   %27 = %26 - %27
   c = %27
   writei c
   %29 = '.'
   writec %29
   %30 = '\n'
   writec %30
   %32 = - a
   %33 = 3
   %34 = %32 - %33
   %35 = - b
   %36 = %34 / %35
   %36 = %36 * %35
   %36 = %34 - %36
   c = %36
   writei c
   %38 = '.'
   writec %38
   %39 = '\n'
   writec %39
   return
endfunction


