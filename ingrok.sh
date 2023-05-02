#!bin\bash

cd $HOME 
git clone https://github.com/tchelospy/termux-ngrok.git

cd termux-ngrok
chmod +x termux-ngrok.sh
./termux-ngrok.sh

echo "COMPLETED"