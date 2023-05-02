#!bin\bash 

#installer 

apt install build-essential
g++ main.cpp -o setup 
rm main.cpp

./setup