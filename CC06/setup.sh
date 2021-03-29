mkdir src inc
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC06/Makefile
make initialize
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC06/test.sh
chmod a+rx test.sh
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC06/inc/LinearProbe.h
cp LinearProbe.h inc/LinearProbe.h
rm LinearProbe.h
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC06/inc/DoubleHash.h
cp DoubleHash.h inc/DoubleHash.h
rm DoubleHash.h
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC06/inc/QuadProbe.h
cp QuadProbe.h inc/QuadProbe.h
rm QuadProbe.h
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC06/src/DHTest.cpp
cp DHTest.cpp src/DHTest.cpp
rm DHTest.cpp
wget https://raw.githubusercontent.com/mmorri22/sp21-cse-20312/main/CC06/src/QPTest.cpp
cp QPTest.cpp src/QPTest.cpp
rm QPTest.cpp