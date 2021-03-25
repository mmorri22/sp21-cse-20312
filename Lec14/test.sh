#!/bin/sh
# Grading script developed by Matthew Morrison
# Spring 2021 - Data Structures - Lecture 11 - Grading Script

# Variables for the script
SCRIPT_OUT="grade.out"
REDIRECT="redirect.out"

# Point Breakdown Variables
STUDENT_GRADE=0
PROB1=20
PROB2=20
PROB3=20
PROB4=20
PROB5=20
TOTAL=100

# Files
PROB1_FILE=Prob1.txt
PROB2_FILE=Prob2.txt
PROB3_FILE=Prob3.txt
PROB4_FILE=Prob4.txt
PROB5_FILE=Prob5.txt

if test -f "$REDIRECT";

then
	rm $SCRIPT_OUT
	
fi

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


if test -f "$PROB5_FILE";

then 
	echo "$PROB5_FILE completed" >> $SCRIPT_OUT
	echo "$PROB5 / $PROB5" >> $SCRIPT_OUT
	((STUDENT_GRADE += $PROB5))
	
else
	echo "$PROB5_FILE not completed" >> $SCRIPT_OUT
	echo "0 / $PROB5" >> $SCRIPT_OUT

fi


# Final Grade to both the screen and the script file.
echo "-----------------------------" >> $SCRIPT_OUT
echo "" >> $SCRIPT_OUT
echo "Midterm In-Class Grade: $STUDENT_GRADE / $TOTAL "
echo "Midterm In-Class Grade: $STUDENT_GRADE / $TOTAL " >> $SCRIPT_OUT
echo "Run 'vim $SCRIPT_OUT' to see the result of the test script"


if [ $STUDENT_GRADE = $TOTAL ]

then
	echo "Full Credit Submission."
	
# Remove the object and executable files
	
	make clean > $REDIRECT
	rm $REDIRECT

# Otherwise, encourage the students to retry and resubmit

else
	echo "Review the code and try again. You can do it!"
	
fi