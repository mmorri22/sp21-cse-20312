mkdir src inc
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/Makefile
make initialize
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/test.sh
chmod a+rx test.sh
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/src/Prob1.cpp
cp Prob1.cpp src/Prob1.cpp
rm Prob1.cpp
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/src/Prob3.cpp
cp Prob3.cpp src/Prob3.cpp
rm Prob3.cpp
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/src/testMaxHeap.cpp
cp testMaxHeap.cpp src/testMaxHeap.cpp
rm testMaxHeap.cpp
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/inc/MaxHeap.h
cp MaxHeap.h inc/MaxHeap.h
rm MaxHeap.h
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/inc/MinHeap.h
cp MinHeap.h inc/MinHeap.h
rm MinHeap.h
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/src/FindKthLargest.cpp
cp FindKthLargest.cpp inc/FindKthLargest.cpp
rm FindKthLargest.cpp
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/Lec12/src/FindMedian.cpp
cp FindMedian.cpp src/FindMedian.cpp
rm FindMedian.cpp