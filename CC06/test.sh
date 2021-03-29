#!/bin/sh
# Grading script developed by Matthew Morrison
# Spring 2021 - Data Structures - Coding Challenge 6 - Grading Script

# Variables for the script
SCRIPT_OUT="grade.out"
REDIRECT="redirect.out"

# Point Breakdown Variables
STUDENT_GRADE=0
TOTAL=375
DH_TEST=50
DH_TEST_1=30
DH_TEST_2=30
DH_TEST_3=30
DH_TEST_4=47
QP_TEST_SCORE=50
QP_TEST_1=30
QP_TEST_2=30
QP_TEST_3=30
QP_TEST_4=48


# Delete the script.out so student can test multiple times
# and we can still use >> to append while running a test
if test -f $SCRIPT_OUT; then
    rm $SCRIPT_OUT
fi

# Write initial messages to the output file
INTRO_MESSAGE="Grading script for Coding Challenge 6"
NAME_MESSAGE="Type in the student's name:"
ID_MESSAGE="Type in the student's Notre Dame netID name:"

echo "-----------------------------" >> $SCRIPT_OUT
echo $INTRO_MESSAGE >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT

# Get the student's name and ND netID
echo $NAME_MESSAGE
read STUDENT_NAME
echo $ID_MESSAGE
read STUDENT_ID

# Print the name and ID to the script.out
echo "Student's Name: $STUDENT_NAME" >> $SCRIPT_OUT
echo "Student's ID  : $STUDENT_ID" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT 
echo "If the outputs appear to match, but the test failed, please check for whitespace in your output."  >> $SCRIPT_OUT
echo "By making these cosmetic changes to your output, you can save the TAs hours of grading time."  >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT 
echo "-----------------------------" >> $SCRIPT_OUT



#######################
# Test the make DPTest command 
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT
echo "Testing make quick_test" >> $SCRIPT_OUT

make clean >> $SCRIPT_OUT

# make decode comparison variables
MAKE_DH_TEST="make DHTest"
MAKE_DH_TEST_EXPECTED_FIRST="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -c src/DHTest.cpp -o obj/DHTest.o"
MAKE_DH_TEST_EXPECTED_SECOND="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -o exe/DHTest obj/DHTest.o"
MAKE_DH_TEST_RESULT=$( $MAKE_DH_TEST )

# Delete redirect and send make result to redirect 

echo $MAKE_DH_TEST_RESULT >> $REDIRECT

# Send results to the script
echo "Expected $MAKE_DH_TEST output: " >> $SCRIPT_OUT
echo $MAKE_DH_TEST_EXPECTED_FIRST >> $SCRIPT_OUT
echo $MAKE_DH_TEST_EXPECTED_SECOND >> $SCRIPT_OUT
echo "Actual $MAKE_DH_TEST output  : " >> $SCRIPT_OUT
echo $MAKE_DH_TEST_RESULT >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT

# Add points to overall score or mark as 0 if not for make lucky

if grep -q "$MAKE_DH_TEST_EXPECTED_FIRST" $REDIRECT && grep -q "$MAKE_DH_TEST_EXPECTED_SECOND" $REDIRECT

then 
	echo "$MAKE_DH_TEST test passed" >> $SCRIPT_OUT
	echo "$DH_TEST / $DH_TEST" >> $SCRIPT_OUT
	((STUDENT_GRADE += $DH_TEST))
	
else
	echo "$MAKE_DH_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $DH_TEST" >> $SCRIPT_OUT
	
fi

############################################################
# Running exe/./quick_test tests
############################################################

# lucky tests 
DH_TEST_1_TEST="./exe/DHTest 7 1 14"
DH_TEST_1_EXPECTED="Linear Probe Hash:
Hash Table Size: 7
Hashed Elements: 3
{0: ACTIVE, 7, 63}
{1: ACTIVE, 1, 3}
{2: ACTIVE, 14, 133}
{3: EMPTY, 0, 0}
{4: EMPTY, 0, 0}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}

Double Hash:
Hash Table Size: 7
Hashed Elements: 3
{0: ACTIVE, 7, 63}
{1: ACTIVE, 1, 3}
{2: EMPTY, 0, 0}
{3: EMPTY, 0, 0}
{4: ACTIVE, 14, 133}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}"

DH_TEST_2_TEST="./exe/DHTest 44 66 33 99"
DH_TEST_2_EXPECTED="Linear Probe Hash:
Hash Table Size: 11
Hashed Elements: 4
{0: ACTIVE, 44, 433}
{1: ACTIVE, 66, 653}
{2: ACTIVE, 33, 323}
{3: ACTIVE, 99, 983}
{4: EMPTY, 0, 0}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}
{7: EMPTY, 0, 0}
{8: EMPTY, 0, 0}
{9: EMPTY, 0, 0}
{10: EMPTY, 0, 0}

Double Hash:
Hash Table Size: 11
Hashed Elements: 4
{0: ACTIVE, 44, 433}
{1: ACTIVE, 33, 323}
{2: EMPTY, 0, 0}
{3: ACTIVE, 66, 653}
{4: EMPTY, 0, 0}
{5: ACTIVE, 99, 983}
{6: EMPTY, 0, 0}
{7: EMPTY, 0, 0}
{8: EMPTY, 0, 0}
{9: EMPTY, 0, 0}
{10: EMPTY, 0, 0}"

DH_TEST_3_TEST="./exe/DHTest 22 7 44 95 18 -101 44 33 32 31"
DH_TEST_3_EXPECTED="Linear Probe Hash:
Hash Table Size: 19
Hashed Elements: 9
{0: ACTIVE, 95, 943}
{1: EMPTY, 0, 0}
{2: EMPTY, 0, 0}
{3: ACTIVE, 22, 213}
{4: EMPTY, 0, 0}
{5: EMPTY, 0, 0}
{6: ACTIVE, 44, 433}
{7: ACTIVE, 7, 63}
{8: ACTIVE, -101, -1017}
{9: EMPTY, 0, 0}
{10: EMPTY, 0, 0}
{11: EMPTY, 0, 0}
{12: ACTIVE, 31, 303}
{13: ACTIVE, 32, 313}
{14: ACTIVE, 33, 323}
{15: EMPTY, 0, 0}
{16: EMPTY, 0, 0}
{17: EMPTY, 0, 0}
{18: ACTIVE, 18, 173}

Double Hash:
Hash Table Size: 19
Hashed Elements: 9
{0: ACTIVE, 95, 943}
{1: EMPTY, 0, 0}
{2: EMPTY, 0, 0}
{3: ACTIVE, 22, 213}
{4: EMPTY, 0, 0}
{5: EMPTY, 0, 0}
{6: ACTIVE, 44, 433}
{7: ACTIVE, 7, 63}
{8: EMPTY, 0, 0}
{9: EMPTY, 0, 0}
{10: ACTIVE, -101, -1017}
{11: EMPTY, 0, 0}
{12: ACTIVE, 31, 303}
{13: ACTIVE, 32, 313}
{14: ACTIVE, 33, 323}
{15: EMPTY, 0, 0}
{16: EMPTY, 0, 0}
{17: EMPTY, 0, 0}
{18: ACTIVE, 18, 173}"

DH_TEST_4_TEST="./exe/DHTest 46 92 161 23 115 184 69 0 138 207"
DH_TEST_4_EXPECTED="Linear Probe Hash:
Hash Table Size: 23
Hashed Elements: 10
{0: ACTIVE, 0, -7}
{1: ACTIVE, 115, 1143}
{2: ACTIVE, 23, 223}
{3: ACTIVE, 138, 1373}
{4: ACTIVE, 46, 453}
{5: ACTIVE, 161, 1603}
{6: ACTIVE, 69, 683}
{7: ACTIVE, 184, 1833}
{8: ACTIVE, 92, 913}
{9: ACTIVE, 207, 2063}
{10: EMPTY, 0, 0}
{11: EMPTY, 0, 0}
{12: EMPTY, 0, 0}
{13: EMPTY, 0, 0}
{14: EMPTY, 0, 0}
{15: EMPTY, 0, 0}
{16: EMPTY, 0, 0}
{17: EMPTY, 0, 0}
{18: EMPTY, 0, 0}
{19: EMPTY, 0, 0}
{20: EMPTY, 0, 0}
{21: EMPTY, 0, 0}
{22: EMPTY, 0, 0}

Double Hash:
Hash Table Size: 23
Hashed Elements: 10
{0: ACTIVE, 0, -7}
{1: ACTIVE, 23, 223}
{2: ACTIVE, 115, 1143}
{3: ACTIVE, 138, 1373}
{4: ACTIVE, 161, 1603}
{5: EMPTY, 0, 0}
{6: ACTIVE, 207, 2063}
{7: EMPTY, 0, 0}
{8: ACTIVE, 46, 453}
{9: ACTIVE, 92, 913}
{10: EMPTY, 0, 0}
{11: EMPTY, 0, 0}
{12: ACTIVE, 69, 683}
{13: EMPTY, 0, 0}
{14: EMPTY, 0, 0}
{15: EMPTY, 0, 0}
{16: EMPTY, 0, 0}
{17: EMPTY, 0, 0}
{18: ACTIVE, 184, 1833}
{19: EMPTY, 0, 0}
{20: EMPTY, 0, 0}
{21: EMPTY, 0, 0}
{22: EMPTY, 0, 0}"


echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT
echo "Testing QPTest program" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# DH_TEST_1 Test
#######################

# Need to re-compile on first test since $( $MAKE_DH_TEST ) automatically deletes executable
$MAKE_DH_TEST > $REDIRECT
DH_TEST_1_RESULT=$( $DH_TEST_1_TEST )

echo "Expected '$DH_TEST_1_TEST' output: $DH_TEST_1_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$DH_TEST_1_TEST' output: $DH_TEST_1_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$DH_TEST_1_EXPECTED" = "$DH_TEST_1_RESULT" ]; 

then 
	echo "$DH_TEST_1_TEST test passed" >> $SCRIPT_OUT
	echo "$DH_TEST_1 / $DH_TEST_1" >> $SCRIPT_OUT
	((STUDENT_GRADE += $DH_TEST_1))
	
else
	echo "DH_TEST_1_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $DH_TEST_1" >> $SCRIPT_OUT
	
fi

#######################
# DH_TEST_2 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

DH_TEST_2_RESULT=$( $DH_TEST_2_TEST )

echo "Expected '$DH_TEST_2_TEST' output: $DH_TEST_2_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$DH_TEST_2_TEST' output: $DH_TEST_2_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$DH_TEST_2_EXPECTED" = "$DH_TEST_2_RESULT" ]; 

then 
	echo "$DH_TEST_2_TEST test passed" >> $SCRIPT_OUT
	echo "$DH_TEST_2 / $DH_TEST_2" >> $SCRIPT_OUT
	((STUDENT_GRADE += $DH_TEST_2))
	
else
	echo "DH_TEST_2_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $DH_TEST_2" >> $SCRIPT_OUT
	
fi


#######################
# DH_TEST_3 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

DH_TEST_3_RESULT=$( $DH_TEST_3_TEST )

echo "Expected '$DH_TEST_3_TEST' output: $DH_TEST_3_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$DH_TEST_3_TEST' output: $DH_TEST_3_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$DH_TEST_3_EXPECTED" = "$DH_TEST_3_RESULT" ]; 

then 
	echo "$DH_TEST_3_TEST test passed" >> $SCRIPT_OUT
	echo "$DH_TEST_3 / $DH_TEST_3" >> $SCRIPT_OUT
	((STUDENT_GRADE += $DH_TEST_3))
	
else
	echo "DH_TEST_3_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $DH_TEST_3" >> $SCRIPT_OUT
	
fi


#######################
# DH_TEST_4 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

DH_TEST_4_RESULT=$( $DH_TEST_4_TEST )

echo "Expected '$DH_TEST_4_TEST' output: $DH_TEST_4_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$DH_TEST_4_TEST' output: $DH_TEST_4_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$DH_TEST_4_EXPECTED" = "$DH_TEST_4_RESULT" ]; 

then 
	echo "$DH_TEST_4_TEST test passed" >> $SCRIPT_OUT
	echo "$DH_TEST_4 / $DH_TEST_4" >> $SCRIPT_OUT
	((STUDENT_GRADE += $DH_TEST_4))
	
else
	echo "DH_TEST_4_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $DH_TEST_4" >> $SCRIPT_OUT
	
fi




############################################################
# Running ./QP_Test tests
############################################################

# streams tests 
QP_TEST_1_TEST="./exe/QPTest 28 7 56"
QP_TEST_1_EXPECTED="Linear Probe Hash:
Hash Table Size: 7
Hashed Elements: 3
{0: ACTIVE, 7, 63}
{1: ACTIVE, 28, 273}
{2: ACTIVE, 56, 553}
{3: EMPTY, 0, 0}
{4: EMPTY, 0, 0}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}

Quadratic Probe:
Hash Table Size: 7
Hashed Elements: 3
{0: ACTIVE, 7, 63}
{1: ACTIVE, 28, 273}
{2: EMPTY, 0, 0}
{3: EMPTY, 0, 0}
{4: ACTIVE, 56, 553}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}"

QP_TEST_2_TEST="./exe/QPTest 44 66 33 99"
QP_TEST_2_EXPECTED="Linear Probe Hash:
Hash Table Size: 11
Hashed Elements: 4
{0: ACTIVE, 44, 433}
{1: ACTIVE, 66, 653}
{2: ACTIVE, 33, 323}
{3: ACTIVE, 99, 983}
{4: EMPTY, 0, 0}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}
{7: EMPTY, 0, 0}
{8: EMPTY, 0, 0}
{9: EMPTY, 0, 0}
{10: EMPTY, 0, 0}

Quadratic Probe:
Hash Table Size: 11
Hashed Elements: 4
{0: ACTIVE, 44, 433}
{1: ACTIVE, 66, 653}
{2: EMPTY, 0, 0}
{3: EMPTY, 0, 0}
{4: ACTIVE, 33, 323}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}
{7: EMPTY, 0, 0}
{8: EMPTY, 0, 0}
{9: EMPTY, 0, 0}
{10: ACTIVE, 99, 983}"

QP_TEST_3_TEST="./exe/QPTest 13 65 52 78 39 26"
QP_TEST_3_EXPECTED="Linear Probe Hash:
Hash Table Size: 13
Hashed Elements: 6
{0: ACTIVE, 78, 773}
{1: ACTIVE, 13, 123}
{2: ACTIVE, 39, 383}
{3: ACTIVE, 52, 513}
{4: ACTIVE, 65, 643}
{5: ACTIVE, 26, 253}
{6: EMPTY, 0, 0}
{7: EMPTY, 0, 0}
{8: EMPTY, 0, 0}
{9: EMPTY, 0, 0}
{10: EMPTY, 0, 0}
{11: EMPTY, 0, 0}
{12: EMPTY, 0, 0}

Quadratic Probe:
Hash Table Size: 13
Hashed Elements: 6
{0: ACTIVE, 78, 773}
{1: ACTIVE, 13, 123}
{2: EMPTY, 0, 0}
{3: EMPTY, 0, 0}
{4: ACTIVE, 39, 383}
{5: EMPTY, 0, 0}
{6: EMPTY, 0, 0}
{7: ACTIVE, 65, 643}
{8: EMPTY, 0, 0}
{9: ACTIVE, 26, 253}
{10: ACTIVE, 52, 513}
{11: EMPTY, 0, 0}
{12: EMPTY, 0, 0}"

QP_TEST_4_TEST="./exe/QPTest 46 92 161 23 115 184 69 0 138 207"
QP_TEST_4_EXPECTED="Linear Probe Hash:
Hash Table Size: 23
Hashed Elements: 10
{0: ACTIVE, 0, -7}
{1: ACTIVE, 115, 1143}
{2: ACTIVE, 23, 223}
{3: ACTIVE, 138, 1373}
{4: ACTIVE, 46, 453}
{5: ACTIVE, 161, 1603}
{6: ACTIVE, 69, 683}
{7: ACTIVE, 184, 1833}
{8: ACTIVE, 92, 913}
{9: ACTIVE, 207, 2063}
{10: EMPTY, 0, 0}
{11: EMPTY, 0, 0}
{12: EMPTY, 0, 0}
{13: EMPTY, 0, 0}
{14: EMPTY, 0, 0}
{15: EMPTY, 0, 0}
{16: EMPTY, 0, 0}
{17: EMPTY, 0, 0}
{18: EMPTY, 0, 0}
{19: EMPTY, 0, 0}
{20: EMPTY, 0, 0}
{21: EMPTY, 0, 0}
{22: EMPTY, 0, 0}

Quadratic Probe:
Hash Table Size: 23
Hashed Elements: 10
{0: ACTIVE, 0, -7}
{1: ACTIVE, 115, 1143}
{2: EMPTY, 0, 0}
{3: EMPTY, 0, 0}
{4: ACTIVE, 23, 223}
{5: ACTIVE, 184, 1833}
{6: EMPTY, 0, 0}
{7: EMPTY, 0, 0}
{8: EMPTY, 0, 0}
{9: EMPTY, 0, 0}
{10: ACTIVE, 138, 1373}
{11: EMPTY, 0, 0}
{12: ACTIVE, 161, 1603}
{13: ACTIVE, 92, 913}
{14: EMPTY, 0, 0}
{15: ACTIVE, 69, 683}
{16: EMPTY, 0, 0}
{17: EMPTY, 0, 0}
{18: EMPTY, 0, 0}
{19: ACTIVE, 207, 2063}
{20: ACTIVE, 46, 453}
{21: EMPTY, 0, 0}
{22: EMPTY, 0, 0}"


#######################
# Test the make QPTest command 
#######################

QP_TEST="make QPTest"

QP_TEST_EXPECTED_FIRST="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -c src/QPTest.cpp -o obj/QPTest.o"
QP_TEST_EXPECTED_SECOND="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -o exe/QPTest obj/QPTest.o"

# Clean the object files and then run the test 
make clean >> $REDIRECT

# Run the make command and get the result 
QP_TEST_RESULT=$( $QP_TEST )

# Send results to the script
echo "Expected $QP_TEST output: " >> $SCRIPT_OUT 
echo $QP_TEST_EXPECTED_FIRST >> $SCRIPT_OUT 
echo $QP_TEST_EXPECTED_SECOND >> $SCRIPT_OUT 
echo "Actual $QP_TEST output  : " >> $SCRIPT_OUT 
echo $QP_TEST_RESULT >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT

echo $QP_TEST_RESULT >> $REDIRECT

# Add points to overall score or mark as 0 if not for make lucky
if grep -q "$QP_TEST_EXPECTED_FIRST" $REDIRECT && grep -q "$QP_TEST_EXPECTED_SECOND" $REDIRECT 

then 
	echo "$QP_TEST test passed" >> $SCRIPT_OUT
	echo "$QP_TEST_SCORE / $QP_TEST_SCORE" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QP_TEST_SCORE))
	
else
	echo "$QP_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QP_TEST_SCORE" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# QP_TEST_1 Test
#######################

# Need to re-compile on first test since $( $QP_TEST ) automatically deletes executable
$QP_TEST > $REDIRECT

# Run the test and save the output 
QP_TEST_1_RESULT=$( $QP_TEST_1_TEST )

echo "Expected '$QP_TEST_1_TEST' output: $QP_TEST_1_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QP_TEST_1_TEST' output: $QP_TEST_1_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QP_TEST_1_EXPECTED" = "$QP_TEST_1_RESULT" ]; 

then 
	echo "$QP_TEST_1_TEST test passed" >> $SCRIPT_OUT
	echo "$QP_TEST_1 / $QP_TEST_1" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QP_TEST_1))
	
else
	echo "QP_TEST_1_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QP_TEST_1" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

#######################
# QP_TEST_2 Test
#######################


QP_TEST_2_RESULT=$( $QP_TEST_2_TEST )

echo "Expected '$QP_TEST_2_TEST' output: $QP_TEST_2_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QP_TEST_2_TEST' output: $QP_TEST_2_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QP_TEST_2_EXPECTED" = "$QP_TEST_2_RESULT" ]; 

then 
	echo "$QP_TEST_2_TEST test passed" >> $SCRIPT_OUT
	echo "$QP_TEST_2 / $QP_TEST_2" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QP_TEST_2))
	
else
	echo "QP_TEST_2_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QP_TEST_2" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# QP_TEST_3 Test
#######################

QP_TEST_3_RESULT=$( $QP_TEST_3_TEST )

echo "Expected '$QP_TEST_3_TEST' output: $QP_TEST_3_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QP_TEST_3_TEST' output: $QP_TEST_3_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QP_TEST_3_EXPECTED" = "$QP_TEST_3_RESULT" ]; 

then 
	echo "$QP_TEST_3_TEST test passed" >> $SCRIPT_OUT
	echo "$QP_TEST_3 / $QP_TEST_3" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QP_TEST_3))
	
else
	echo "QP_TEST_3_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QP_TEST_3" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# QP_TEST_4 Test
#######################

QP_TEST_4_RESULT=$( $QP_TEST_4_TEST )

echo "Expected '$QP_TEST_4_TEST' output: $QP_TEST_4_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QP_TEST_4_TEST' output: $QP_TEST_4_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QP_TEST_4_EXPECTED" = "$QP_TEST_4_RESULT" ]; 

then 
	echo "$QP_TEST_4_TEST test passed" >> $SCRIPT_OUT
	echo "$QP_TEST_4 / $QP_TEST_4" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QP_TEST_4))
	
else
	echo "QP_TEST_4_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QP_TEST_4" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT




# Final Grade to both the screen and the script file.
echo "-----------------------------" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT
echo "CC06 Coding Portion Grade for $STUDENT_NAME ($STUDENT_ID): $STUDENT_GRADE / $TOTAL " >> $SCRIPT_OUT
echo "CC06 Coding Portion Grade for $STUDENT_NAME ($STUDENT_ID): $STUDENT_GRADE / $TOTAL "
echo "Run 'vim $SCRIPT_OUT' to see the result of the test script"


# Clean and delete re-directions
make clean > $REDIRECT

rm $REDIRECT