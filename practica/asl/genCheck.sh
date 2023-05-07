#!/bin/bash

export LD_LIBRARY_PATH=$HOME/assig/cl/runtime/lib

#--------------------------------------------
function check_genc_example() {	
    expected=$1
    produced=$2
    
    diff $expected $produced >tmp.diff
    if (test $? == 0); then
   	echo "OK"
    else
	echo "Wrong output"
	cat tmp.diff
 	echo ""
    fi
    rm -f tmp.diff
}

read num

########### check all 'jp_genc' examples
echo ""
echo "======================================================="
echo "=== BEGIN examples/jp_genc_* codegen =================="

for f in ../examples/jp_genc_*.asl; do
    echo -n "****" $(basename "$f") "...." 
    ./asl "$f" >tmp.t 2>&1 
    if (test $? != 0); then
       echo "Compilation errors"
    else
       ../tvm/tvm tmp.t < "${f/asl/in}" >tmp.out
       check_genc_example "${f/asl/out}" tmp.out
    fi
    rm -f tmp.t tmp.out tmp.diff
done



echo "=== END examples/jp_genc_* codegen ===================="
echo "======================================================="