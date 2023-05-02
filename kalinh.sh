#!bin\bash

#use file install.sh to start 
# and get more info

# this code installs Kali NetHunter on termux

termux-setup-storage
apt update && apt upgrade
cd $HOME 
mkdir kali_hun
cd kali_hun 
git clone https://github.com/Hax4us/Nethunter-In-Termux
cd Nethunter-In-Termux
bash kalinethunter

echo "FINISHED : to start enter startkali"
sleep 5
exit 0
