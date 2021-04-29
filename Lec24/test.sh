#!/bin/sh
# Grading script developed by Matthew Morrison
# Spring 2021 - Data Structures - Lecture 24 - Grading Script

# Script Re-direct 
SCRIPT_OUT=grade.out
REDIRECT=redirect.out 

# Point Breakdown Variables
STUDENT_GRADE=0
PROB1=25
PROB2=35
PROB3=40
PROB4=30

# Files
PROB1_FILE=Prob1.txt
PROB2_FILE=Prob2.txt
PROB3_FILE=Prob3.txt
PROB4_FILE=Prob4.txt

# Delete grade.out if they ran it before
rm $SCRIPT_OUT

if test -f "$PROB1_FILE";

then 
	echo "$PROB1_FILE completed" >> $SCRIPT_OUT
	echo "$PROB1 / $PROB1" >> $SCRIPT_OUT
	((STUDENT_GRADE += $PROB1))
	
else
	echo "$PROB1_FILE not completed" >> $SCRIPT_OUT
	echo "0 / $PROB1" >> $SCRIPT_OUT

fi


if test -f "$PROB2_FILE";

then 
	echo "$PROB2_FILE completed" >> $SCRIPT_OUT
	echo "$PROB2 / $PROB2" >> $SCRIPT_OUT
	((STUDENT_GRADE += $PROB2))
	
else
	echo "$PROB2_FILE not completed" >> $SCRIPT_OUT
	echo "0 / $PROB2" >> $SCRIPT_OUT

fi

if test -f "$PROB3_FILE";

then 
	echo "$PROB3_FILE completed" >> $SCRIPT_OUT
	echo "$PROB3 / $PROB3" >> $SCRIPT_OUT
	((STUDENT_GRADE += $PROB3))
	
else
	echo "$PROB3_FILE not completed" >> $SCRIPT_OUT
	echo "0 / $PROB3" >> $SCRIPT_OUT

fi


if test -f "$PROB4_FILE";

then 
	echo "$PROB4_FILE completed" >> $SCRIPT_OUT
	echo "$PROB4 / $PROB4" >> $SCRIPT_OUT
	((STUDENT_GRADE += $PROB4))
	
else
	echo "$PROB4_FILE not completed" >> $SCRIPT_OUT
	echo "0 / $PROB4" >> $SCRIPT_OUT

fi



# Final Grade to both the screen and the script file.
echo "-----------------------------" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT
echo "Lec24 Grade: Earned $STUDENT_GRADE points today "
echo "Lec24 Grade: Earned $STUDENT_GRADE points today " >> $SCRIPT_OUT
echo "Run 'vim $SCRIPT_OUT' to see the result of the test script"

	
# Remove the object and executable files
	
make clean > $REDIRECT
rm $REDIRECT
