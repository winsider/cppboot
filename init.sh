sed -i "s/{PROJECT_NAME}/$1/g" CMakeLists.txt 
sed -i "s/{PROJECT_NAME}/$1/g" app/CMakeLists.txt 
sed -i "s/{PROJECT_NAME}/$1/g" src/CMakeLists.txt 
sed -i "s/{PROJECT_NAME}/$1/g" test/CMakeLists.txt 
mkdir include/$1
mv include/lib.hpp include/$1/$1.hpp
sed -i "s/{PROJECT_NAME}/$1/g"  app/main.cpp
sed -i "s/{PROJECT_NAME}/$1/g"  src/lib.cpp
mv src/lib.cpp src/$1.cpp
rm init.sh
mkdir build
cd build
cmake ..
make

