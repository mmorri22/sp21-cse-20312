#!/bin/sh
# Grading script developed by Matthew Morrison
# Spring 2021 - Data Structures - Coding Challenge 5 - Grading Script

# Variables for the script
SCRIPT_OUT="grade.out"
REDIRECT="redirect.out"

# Point Breakdown Variables
STUDENT_GRADE=0
TOTAL=400
QUICK_TEST=30
QUICK_TEST_1=5
QUICK_TEST_2=17
QUICK_TEST_3=17
QUICK_TEST_4=17
QUICK_TEST_5=17
QUICK_TEST_6=18
QUICK_TEST_7=18
QUICK_TEST_8=18
QUICK_TEST_9=18
QUICK_TEST_10=25
BUCKET_TEST_SCORE=30
BUCKET_TEST_SCORE_1=5
BUCKET_TEST_SCORE_2=17
BUCKET_TEST_SCORE_3=17
BUCKET_TEST_SCORE_4=17
BUCKET_TEST_SCORE_5=17
BUCKET_TEST_SCORE_6=18
BUCKET_TEST_SCORE_7=18
BUCKET_TEST_SCORE_8=18
BUCKET_TEST_SCORE_9=18
BUCKET_TEST_SCORE_10=25


# Delete the script.out so student can test multiple times
# and we can still use >> to append while running a test
if test -f $SCRIPT_OUT; then
    rm $SCRIPT_OUT
fi

# Write initial messages to the output file
INTRO_MESSAGE="Grading script for Coding Challenge 5"
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
# Test the make quick_test command 
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT
echo "Testing make quick_test" >> $SCRIPT_OUT

make clean >> $SCRIPT_OUT

# make decode comparison variables
MAKE_QUICK_TEST="make quick_test"
MAKE_QUICK_TEST_EXPECTED_FIRST="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -c src/quick_test.cpp -o obj/quick_test.o"
MAKE_QUICK_TEST_EXPECTED_SECOND="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -o exe/quick_test obj/quick_test.o"
MAKE_QUICK_TEST_RESULT=$( $MAKE_QUICK_TEST )

# Delete redirect and send make result to redirect 

echo $MAKE_QUICK_TEST_RESULT >> $REDIRECT

# Send results to the script
echo "Expected $MAKE_QUICK_TEST output: " >> $SCRIPT_OUT
echo $MAKE_QUICK_TEST_EXPECTED_FIRST >> $SCRIPT_OUT
echo $MAKE_QUICK_TEST_EXPECTED_SECOND >> $SCRIPT_OUT
echo "Actual $MAKE_QUICK_TEST output  : " >> $SCRIPT_OUT
echo $MAKE_QUICK_TEST_RESULT >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT

# Add points to overall score or mark as 0 if not for make lucky

if grep -q "$MAKE_QUICK_TEST_EXPECTED_FIRST" $REDIRECT && grep -q "$MAKE_QUICK_TEST_EXPECTED_SECOND" $REDIRECT

then 
	echo "$MAKE_QUICK_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST / $QUICK_TEST" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST))
	
else
	echo "$MAKE_QUICK_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST" >> $SCRIPT_OUT
	
fi

############################################################
# Running exe/./quick_test tests
############################################################

# lucky tests 
QUICK_TEST_1_TEST="./exe/quick_test"
QUICK_TEST_1_EXPECTED="Incorrect number of inputs"

QUICK_TEST_2_TEST="./exe/quick_test 10"
QUICK_TEST_2_EXPECTED="10 
10 "

QUICK_TEST_3_TEST="./exe/quick_test 10 3"
QUICK_TEST_3_EXPECTED="10 3 
3 10 "

QUICK_TEST_4_TEST="./exe/quick_test 10 7 3"
QUICK_TEST_4_EXPECTED="10 7 3 
3 7 10 "

QUICK_TEST_5_TEST="./exe/quick_test 10 -4 3 7"
QUICK_TEST_5_EXPECTED="10 -4 3 7 
-4 3 7 10 "

QUICK_TEST_6_TEST="./exe/quick_test 10 3 7 -4 -100 22 18"
QUICK_TEST_6_EXPECTED="10 3 7 -4 -100 22 18 
-100 -4 3 7 10 18 22 "

QUICK_TEST_7_TEST="./exe/quick_test 1 2 3 4 5 6 7"
QUICK_TEST_7_EXPECTED="1 2 3 4 5 6 7 
1 2 3 4 5 6 7 "

QUICK_TEST_8_TEST="./exe/quick_test -1 2 -3 4 -5 6 -7 8"
QUICK_TEST_8_EXPECTED="-1 2 -3 4 -5 6 -7 8 
-7 -5 -3 -1 2 4 6 8 "

QUICK_TEST_9_TEST="./exe/quick_test 0 1 0 1"
QUICK_TEST_9_EXPECTED="0 1 0 1 
0 0 1 1 "

QUICK_TEST_10_TEST="./exe/quick_test 99 1 98 2 97 3 96 4 95 5 94 6 93 7 92 8 91 9 90 10 89 11 88 12 87 13 86 14 85 15 84 16 83 17 82 18 81 19 80 20 79 21 78 22 77 23 76 24 75 25 74 26 73 27 72 28 71 29 70 30 69 31 68 32 67 33 66 34 65 35 64 36 63 37 62 38 61 39 60 40 59 41 58 42 57 43 56 44 55 45 54 46 53 47 52 48 51 49 50"
QUICK_TEST_10_EXPECTED="99 1 98 2 97 3 96 4 95 5 94 6 93 7 92 8 91 9 90 10 89 11 88 12 87 13 86 14 85 15 84 16 83 17 82 18 81 19 80 20 79 21 78 22 77 23 76 24 75 25 74 26 73 27 72 28 71 29 70 30 69 31 68 32 67 33 66 34 65 35 64 36 63 37 62 38 61 39 60 40 59 41 58 42 57 43 56 44 55 45 54 46 53 47 52 48 51 49 50 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 "

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT
echo "Testing quick_test program" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# QUICK_TEST_1 Test
#######################

# Need to re-compile on first test since $( $MAKE_QUICK_TEST ) automatically deletes executable
$MAKE_QUICK_TEST > $REDIRECT
QUICK_TEST_1_RESULT=$( $QUICK_TEST_1_TEST )

echo "Expected '$QUICK_TEST_1_TEST' output: $QUICK_TEST_1_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_1_TEST' output: $QUICK_TEST_1_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_1_EXPECTED" = "$QUICK_TEST_1_RESULT" ]; 

then 
	echo "$QUICK_TEST_1_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_1 / $QUICK_TEST_1" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_1))
	
else
	echo "QUICK_TEST_1_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_1" >> $SCRIPT_OUT
	
fi

#######################
# QUICK_TEST_2 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_2_RESULT=$( $QUICK_TEST_2_TEST )

echo "Expected '$QUICK_TEST_2_TEST' output: $QUICK_TEST_2_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_2_TEST' output: $QUICK_TEST_2_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_2_EXPECTED" = "$QUICK_TEST_2_RESULT" ]; 

then 
	echo "$QUICK_TEST_2_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_2 / $QUICK_TEST_2" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_2))
	
else
	echo "QUICK_TEST_2_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_2" >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_3 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_3_RESULT=$( $QUICK_TEST_3_TEST )

echo "Expected '$QUICK_TEST_3_TEST' output: $QUICK_TEST_3_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_3_TEST' output: $QUICK_TEST_3_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_3_EXPECTED" = "$QUICK_TEST_3_RESULT" ]; 

then 
	echo "$QUICK_TEST_3_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_3 / $QUICK_TEST_3" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_3))
	
else
	echo "QUICK_TEST_3_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_3" >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_4 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_4_RESULT=$( $QUICK_TEST_4_TEST )

echo "Expected '$QUICK_TEST_4_TEST' output: $QUICK_TEST_4_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_4_TEST' output: $QUICK_TEST_4_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_4_EXPECTED" = "$QUICK_TEST_4_RESULT" ]; 

then 
	echo "$QUICK_TEST_4_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_4 / $QUICK_TEST_4" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_4))
	
else
	echo "QUICK_TEST_4_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_4" >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_5 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_5_RESULT=$( $QUICK_TEST_5_TEST )

echo "Expected '$QUICK_TEST_5_TEST' output: $QUICK_TEST_5_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_5_TEST' output: $QUICK_TEST_5_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_5_EXPECTED" = "$QUICK_TEST_5_RESULT" ]; 

then 
	echo "$QUICK_TEST_5_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_5 / $QUICK_TEST_5" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_5))
	
else
	echo "QUICK_TEST_5_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_5" >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_6 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_6_RESULT=$( $QUICK_TEST_6_TEST )

echo "Expected '$QUICK_TEST_6_TEST' output: $QUICK_TEST_6_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_6_TEST' output: $QUICK_TEST_6_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_6_EXPECTED" = "$QUICK_TEST_6_RESULT" ]; 

then 
	echo "$QUICK_TEST_6_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_6  / $QUICK_TEST_6 " >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_6 ))
	
else
	echo "QUICK_TEST_6_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_6 " >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_7 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_7_RESULT=$( $QUICK_TEST_7_TEST )

echo "Expected '$QUICK_TEST_7_TEST' output: $QUICK_TEST_7_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_7_TEST' output: $QUICK_TEST_7_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_7_EXPECTED" = "$QUICK_TEST_7_RESULT" ]; 

then 
	echo "$QUICK_TEST_7_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_7 / $QUICK_TEST_7" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_7))
	
else
	echo "QUICK_TEST_7_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_7" >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_8 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_8_RESULT=$( $QUICK_TEST_8_TEST )

echo "Expected '$QUICK_TEST_8_TEST' output: $QUICK_TEST_8_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_8_TEST' output: $QUICK_TEST_8_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_8_EXPECTED" = "$QUICK_TEST_8_RESULT" ]; 

then 
	echo "$QUICK_TEST_8_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_8 / $QUICK_TEST_8" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_8))
	
else
	echo "QUICK_TEST_8_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_8" >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_9 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_9_RESULT=$( $QUICK_TEST_9_TEST )

echo "Expected '$QUICK_TEST_9_TEST' output: $QUICK_TEST_9_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_9_TEST' output: $QUICK_TEST_9_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_9_EXPECTED" = "$QUICK_TEST_9_RESULT" ]; 

then 
	echo "$QUICK_TEST_9_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_9 / $QUICK_TEST_9" >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_9))
	
else
	echo "QUICK_TEST_9_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_9" >> $SCRIPT_OUT
	
fi


#######################
# QUICK_TEST_10 Test
#######################

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

QUICK_TEST_10_RESULT=$( $QUICK_TEST_10_TEST )

echo "Expected '$QUICK_TEST_10_TEST' output: $QUICK_TEST_10_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$QUICK_TEST_10_TEST' output: $QUICK_TEST_10_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$QUICK_TEST_10_EXPECTED" = "$QUICK_TEST_10_RESULT" ]; 

then 
	echo "$QUICK_TEST_10_TEST test passed" >> $SCRIPT_OUT
	echo "$QUICK_TEST_10  / $QUICK_TEST_10 " >> $SCRIPT_OUT
	((STUDENT_GRADE += $QUICK_TEST_10 ))
	
else
	echo "QUICK_TEST_10_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $QUICK_TEST_10 " >> $SCRIPT_OUT
	
fi


############################################################
# Running ./bucket_test tests
############################################################

# streams tests 
BUCKET_TEST_1_TEST="./exe/bucket_test"
BUCKET_TEST_1_EXPECTED="Incorrect number of inputs"

BUCKET_TEST_2_TEST="./exe/bucket_test 1"
BUCKET_TEST_2_EXPECTED="1 "

BUCKET_TEST_3_TEST="./exe/bucket_test 44 17 99 34 18 22 31"
BUCKET_TEST_3_EXPECTED="17 18 22 31 34 44 99 "

BUCKET_TEST_4_TEST="./exe/bucket_test 44 17 99 34 18 22 31 99 14 36 72"
BUCKET_TEST_4_EXPECTED="14 17 18 22 31 34 36 44 72 99 99 "

BUCKET_TEST_5_TEST="./exe/bucket_test 17 99 8 34 18 6 22 31 14 36 72"
BUCKET_TEST_5_EXPECTED="6 8 14 17 18 22 31 34 36 72 99 "

BUCKET_TEST_6_TEST="./exe/bucket_test 1 2 3 4 5 6 7"
BUCKET_TEST_6_EXPECTED="1 2 3 4 5 6 7 "

BUCKET_TEST_7_TEST="./exe/bucket_test 0 1 0 1"
BUCKET_TEST_7_EXPECTED="0 0 1 1 "

BUCKET_TEST_8_TEST="./exe/bucket_test 99 88 77 11 22 33 66 55 44"
BUCKET_TEST_8_EXPECTED="11 22 33 44 55 66 77 88 99 "

BUCKET_TEST_9_TEST="./exe/bucket_test 14 1 13 2 12 3 11 4 10 5 9 6 8 7"
BUCKET_TEST_9_EXPECTED="1 2 3 4 5 6 7 8 9 10 11 12 13 14 "

BUCKET_TEST_10_TEST="./exe/bucket_test 99 1 98 2 97 3 96 4 95 5 94 6 93 7 92 8 91 9 90 10 89 11 88 12 87 13 86 14 85 15 84 16 83 17 82 18 81 19 80 20 79 21 78 22 77 23 76 24 75 25 74 26 73 27 72 28 71 29 70 30 69 31 68 32 67 33 66 34 65 35 64 36 63 37 62 38 61 39 60 40 59 41 58 42 57 43 56 44 55 45 54 46 53 47 52 48 51 49 50"
BUCKET_TEST_10_EXPECTED="1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 "

#######################
# Test the make bucket_test command 
#######################

BUCKET_TEST="make bucket_test"

BUCKET_TEST_EXPECTED_FIRST="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -c src/bucket_test.cpp -o obj/bucket_test.o"
BUCKET_TEST_EXPECTED_SECOND="g++ -m64 -std=c++11 -Weffc++ -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -o exe/bucket_test obj/bucket_test.o"

# Clean the object files and then run the test 
make clean >> $REDIRECT

# Run the make command and get the result 
BUCKET_TEST_RESULT=$( $BUCKET_TEST )

# Send results to the script
echo "Expected $BUCKET_TEST output: " >> $SCRIPT_OUT 
echo $BUCKET_TEST_EXPECTED_FIRST >> $SCRIPT_OUT 
echo $BUCKET_TEST_EXPECTED_SECOND >> $SCRIPT_OUT 
echo "Actual $BUCKET_TEST output  : " >> $SCRIPT_OUT 
echo $BUCKET_TEST_RESULT >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT

echo $BUCKET_TEST_RESULT >> $REDIRECT

# Add points to overall score or mark as 0 if not for make lucky
if grep -q "$BUCKET_TEST_EXPECTED_FIRST" $REDIRECT && grep -q "$BUCKET_TEST_EXPECTED_SECOND" $REDIRECT 

then 
	echo "$BUCKET_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE / $BUCKET_TEST_SCORE" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE))
	
else
	echo "$BUCKET_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_1 Test
#######################

# Need to re-compile on first test since $( $BUCKET_TEST ) automatically deletes executable
$BUCKET_TEST > $REDIRECT

# Run the test and save the output 
BUCKET_TEST_1_RESULT=$( $BUCKET_TEST_1_TEST )

echo "Expected '$BUCKET_TEST_1_TEST' output: $BUCKET_TEST_1_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_1_TEST' output: $BUCKET_TEST_1_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_1_EXPECTED" = "$BUCKET_TEST_1_RESULT" ]; 

then 
	echo "$BUCKET_TEST_1_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_1 / $BUCKET_TEST_SCORE_1" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_1))
	
else
	echo "BUCKET_TEST_1_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_1" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT

#######################
# BUCKET_TEST_2 Test
#######################


BUCKET_TEST_2_RESULT=$( $BUCKET_TEST_2_TEST )

echo "Expected '$BUCKET_TEST_2_TEST' output: $BUCKET_TEST_2_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_2_TEST' output: $BUCKET_TEST_2_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_2_EXPECTED" = "$BUCKET_TEST_2_RESULT" ]; 

then 
	echo "$BUCKET_TEST_2_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_2 / $BUCKET_TEST_SCORE_2" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_2))
	
else
	echo "BUCKET_TEST_2_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_2" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_3 Test
#######################

BUCKET_TEST_3_RESULT=$( $BUCKET_TEST_3_TEST )

echo "Expected '$BUCKET_TEST_3_TEST' output: $BUCKET_TEST_3_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_3_TEST' output: $BUCKET_TEST_3_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_3_EXPECTED" = "$BUCKET_TEST_3_RESULT" ]; 

then 
	echo "$BUCKET_TEST_3_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_3 / $BUCKET_TEST_SCORE_3" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_3))
	
else
	echo "BUCKET_TEST_3_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_3" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_4 Test
#######################

BUCKET_TEST_4_RESULT=$( $BUCKET_TEST_4_TEST )

echo "Expected '$BUCKET_TEST_4_TEST' output: $BUCKET_TEST_4_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_4_TEST' output: $BUCKET_TEST_4_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_4_EXPECTED" = "$BUCKET_TEST_4_RESULT" ]; 

then 
	echo "$BUCKET_TEST_4_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_4 / $BUCKET_TEST_SCORE_4" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_4))
	
else
	echo "BUCKET_TEST_4_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_4" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_5 Test
#######################

BUCKET_TEST_5_RESULT=$( $BUCKET_TEST_5_TEST )

echo "Expected '$BUCKET_TEST_5_TEST' output: $BUCKET_TEST_5_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_5_TEST' output: $BUCKET_TEST_5_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_5_EXPECTED" = "$BUCKET_TEST_5_RESULT" ]; 

then 
	echo "$BUCKET_TEST_5_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_5 / $BUCKET_TEST_SCORE_5" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_5))
	
else
	echo "BUCKET_TEST_5_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_5" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_6 Test
#######################

BUCKET_TEST_6_RESULT=$( $BUCKET_TEST_6_TEST )

echo "Expected '$BUCKET_TEST_6_TEST' output: $BUCKET_TEST_6_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_6_TEST' output: $BUCKET_TEST_6_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_6_EXPECTED" = "$BUCKET_TEST_6_RESULT" ]; 

then 
	echo "$BUCKET_TEST_6_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_6 / $BUCKET_TEST_SCORE_6" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_6))
	
else
	echo "BUCKET_TEST_6_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_6" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_7 Test
#######################

BUCKET_TEST_7_RESULT=$( $BUCKET_TEST_7_TEST )

echo "Expected '$BUCKET_TEST_7_TEST' output: $BUCKET_TEST_7_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_7_TEST' output: $BUCKET_TEST_7_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_7_EXPECTED" = "$BUCKET_TEST_7_RESULT" ]; 

then 
	echo "$BUCKET_TEST_7_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_7 / $BUCKET_TEST_SCORE_7" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_7))
	
else
	echo "BUCKET_TEST_7_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_7" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_8 Test
#######################

BUCKET_TEST_8_RESULT=$( $BUCKET_TEST_8_TEST )

echo "Expected '$BUCKET_TEST_8_TEST' output: $BUCKET_TEST_8_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_8_TEST' output: $BUCKET_TEST_8_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_8_EXPECTED" = "$BUCKET_TEST_8_RESULT" ]; 

then 
	echo "$BUCKET_TEST_8_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_8 / $BUCKET_TEST_SCORE_8" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_8))
	
else
	echo "BUCKET_TEST_8_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_8" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_9 Test
#######################

BUCKET_TEST_9_RESULT=$( $BUCKET_TEST_9_TEST )

echo "Expected '$BUCKET_TEST_9_TEST' output: $BUCKET_TEST_9_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_9_TEST' output: $BUCKET_TEST_9_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_9_EXPECTED" = "$BUCKET_TEST_9_RESULT" ]; 

then 
	echo "$BUCKET_TEST_9_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_9 / $BUCKET_TEST_SCORE_9" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_9))
	
else
	echo "BUCKET_TEST_9_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_9" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT


#######################
# BUCKET_TEST_10 Test
#######################

BUCKET_TEST_10_RESULT=$( $BUCKET_TEST_10_TEST )

echo "Expected '$BUCKET_TEST_10_TEST' output: $BUCKET_TEST_10_EXPECTED" >> $SCRIPT_OUT
echo "  Actual '$BUCKET_TEST_10_TEST' output: $BUCKET_TEST_10_RESULT" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT


if [ "$BUCKET_TEST_10_EXPECTED" = "$BUCKET_TEST_10_RESULT" ]; 

then 
	echo "$BUCKET_TEST_10_TEST test passed" >> $SCRIPT_OUT
	echo "$BUCKET_TEST_SCORE_10 / $BUCKET_TEST_SCORE_10" >> $SCRIPT_OUT
	((STUDENT_GRADE += $BUCKET_TEST_SCORE_10))
	
else
	echo "BUCKET_TEST_10_TEST test failed" >> $SCRIPT_OUT
	echo "0 / $BUCKET_TEST_SCORE_10" >> $SCRIPT_OUT
	
fi

echo "" >> $SCRIPT_OUT
echo "-----------------------------" >> $SCRIPT_OUT




# Final Grade to both the screen and the script file.
echo "-----------------------------" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT
echo "CC05 Coding Portion Grade for $STUDENT_NAME ($STUDENT_ID): $STUDENT_GRADE / $TOTAL " >> $SCRIPT_OUT
echo "CC05 Coding Portion Grade for $STUDENT_NAME ($STUDENT_ID): $STUDENT_GRADE / $TOTAL "
echo "Run 'vim $SCRIPT_OUT' to see the result of the test script"


# Clean and delete re-directions
make clean > $REDIRECT

rm $REDIRECT