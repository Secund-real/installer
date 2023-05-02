#include <iostream>
#include <cstdlib>
using namespace std;

int option = 0;

int main(int argc, char *argv[]) {
	system("clear");
	cout << "\t[ INSTALLER ]\n";
	cout << "\nSelect option : \n\t[ 1 ] - Install Metasploit \n\t[ 2 ] - Install Kali NetHunter \n\t[ 3 ] - Install ngrok \n\t[ 4 ] - Install Tor \n\t[ 5 ] - exit \n";
	cout << "\nOption : ";
	cin >> option ;
	switch (option){
		case 1 : 
			cout << "\n\n\n\t---upgrading---\n\n";
			system("apt update -y");
			system("apt upgrade -y");
			system("bash msfc.sh");
			break;
		case 2 :
				cout << "\n\n\n\t---upgrading---\n\n";
			system("apt update -y");
			system("apt upgrade -y");
			system("bash kalinh.sh");
			break;
		case 3 :
				cout << "\n\n\n\t---upgrading---\n\n";
			system("apt update -y");
			system("apt upgrade -y");
			system("bash ingrok.sh");
			break;
		case 4 :
				cout << "\n\n\n\t---upgrading---\n\n";
			system("apt update -y");
			system("apt upgrade -y");
			system("bash itor.sh");
			break;
		case 5 : 
			exit(0);
			break;
		default :
			cout << "\n" << option << " is not declareted .\n";
	}
	return 0;
}