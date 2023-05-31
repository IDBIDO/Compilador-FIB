function read_chars
  params
    _result integer
    a character array
  endparams

  vars
    i integer
  endvars

     %1 = 0
     i = %1
  label while1 :
     %3 = 10
     %4 = i < %3
     ifFalse %4 goto endwhile1
     %6 = a
     readi %7
     %6[i] = %7
     %9 = a
     %8 = %9[i]
     %10 = '.'
     %12 = %8 == %10
     %11 = not %12
     ifFalse %11 goto else1
     %13 = 1
     %14 = i + %13
     i = %14
     goto endif1
  label else1 :
     _result = i
  label endif1 :
     goto while1
  label endwhile1 :
     %16 = 10
     _result = %16
     return
endfunction

function find_vowels
  params
    n integer
    vc character array
    vb boolean array
  endparams

  vars
    c character
  endvars

  label while1 :
     %1 = 0
     %3 = n <= %1
     %2 = not %3
     ifFalse %2 goto endwhile1
     %4 = 1
     %5 = n - %4
     %7 = vc
     %6 = %7[%5]
     c = %6
     %9 = 1
     %10 = n - %9
     %11 = vb
     %12 = 'a'
     %13 = c == %12
     %15 = 'e'
     %16 = c == %15
     %18 = %13 or %16
     %19 = 'i'
     %20 = c == %19
     %22 = %18 or %20
     %23 = 'o'
     %24 = c == %23
     %26 = %22 or %24
     %27 = 'u'
     %28 = c == %27
     %30 = %26 or %28
     %11[%10] = %30
     %31 = 1
     %32 = n - %31
     n = %32
     goto while1
  label endwhile1 :
     return
endfunction

function write_consonants
  params
    _result float
    n integer
    vc character array
    vb boolean array
  endparams

  vars
    k float
    i integer
  endvars

     %1 = 0
     i = %1
     %3 = 0
     %4 = float %3
     k = %4
  label while1 :
     %6 = i == n
     %5 = not %6
     ifFalse %5 goto endwhile1
     %8 = vb
     %7 = %8[i]
     ifFalse %7 goto else1
     %9 = 1
     %11 = float %9
     %10 = k +. %11
     k = %10
     goto endif1
  label else1 :
     %14 = vc
     %13 = %14[i]
     writec %13
  label endif1 :
     %15 = 1
     %16 = i + %15
     i = %16
     goto while1
  label endwhile1 :
     %18 = '\n'
     writec %18
     %19 = 100
     %21 = float %19
     %20 = %21 *. k
     %23 = float n
     %22 = %20 /. %23
     _result = %22
     return
endfunction

function main
  vars
    a character 10
    b boolean 10
    n integer
    p float
  endvars

   %2 = &a
   pushparam 
   pushparam %2
   call read_chars
   popparam 
   popparam %1
   n = %1
   pushparam n
   %4 = &a
   pushparam %4
   %5 = &b
   pushparam %5
   call find_vowels
   popparam 
   popparam 
   popparam 
   %7 = &a
   %8 = &b
   pushparam 
   pushparam n
   pushparam %7
   pushparam %8
   call write_consonants
   popparam 
   popparam 
   popparam 
   popparam %6
   p = %6
   writef p
   writes "\n"
   return
endfunction


