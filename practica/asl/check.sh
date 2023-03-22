#!/bin/bash

# Set the initial value of xx
xx=10

# Initialize counters for passing and failing tests
pass=0
fail=0
  # Compile the program
  echo "Compilation: "
  make antlr
  make
  echo "---------------------End of Compilation-------------------"

# Loop over all the values of xx
while [ $xx -ge 1 ]
do
  num=$(printf "%02d" $xx)
  # Execute the program and save the output to a temporary file
  ./asl ../examples/jp_chkt_$num.asl > tmp.out

  # Compare the output with the expected result
  if diff tmp.out ../examples/jp_chkt_$num.err >/dev/null
  then
    echo "Test jp_chkt_$xx passed"
    ((pass++))
  else
    echo "Test jp_chkt_$xx failed"
    ((fail++))
    echo "Differences:"
    diff tmp.out ../examples/jp_chkt_$num.err
  fi

  # Decrement xx and repeat the loop
  ((xx--))
done

# Print the summary of test results
echo "Total tests: $((pass+fail))"
echo "Passing tests: $pass"
echo "Failing tests: $fail"
