mkdir src inc
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC05/Makefile
make initialize
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC05/test.sh
chmod a+rx test.sh
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC05/inc/bucket_sort.h
cp bucket_sort.h inc/bucket_sort.h
rm bucket_sort.h
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC05/inc/quick_sort.h
cp quick_sort.h inc/quick_sort.h
rm quick_sort.h
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC05/src/bucket_test.cpp
cp bucket_test.cpp src/bucket_test.cpp
rm bucket_test.cpp
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC05/src/quick_test.cpp
cp quick_test.cpp src/quick_test.cpp
rm quick_test.cpp
