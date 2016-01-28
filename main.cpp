#include"Encrypt.h"
#include "Decrypt.h"
int main(){
	bool Continue = true;
	bool task = false;
	bool zhj = true;
	string a;
	string again;
	cout << "Welcome to the Encryptor Thingamadoodle" << endl;
	while (zhj == true){
		cout << "Press E to encode or D to decode" << endl;
		cin >> a;
		Continue = true;
		while (Continue == true){
			if (a == "E" || a == "e" || a == "encode" || a == "Encode"){
				system("cls");
				int zarir[3][3] = { 0 };
				vector<int>answers;
				vector<int>numbers;
				string message;
				string x; 
				cout << "Enter an message." << endl;
				cin.clear();
				cin.ignore();
				getline(cin, message);
				numbers = Alphabet(message);
				generateKey(zarir);
				while (!checkKey(zarir))
					generateKey(zarir);
				answers = generateCiphertext(zarir, numbers);
				x = generateFilename();
				system("cls");
				cout << "Your encrypted message has been saved as a file under the name: " << x << ".txt" << endl;
				x += ".txt";
				outputFile(zarir, answers, x);
				task = true;
				while (task == true){
					cout << "Do you want to do any other operations?(y/n)" << endl;
					cin >> again;
					cout << endl;
					if (again == "Y" || again == "y"){
						system("cls");
						Continue = false;
						task = false;
					}
					else if (again == "N" || again == "n"){
						cout << "Ok. Thanks for using this program" << endl;
						Continue = false;
						task = false;
						zhj = false;
					}
					else {
						cout << "That is not a valid option. Please try again." << endl;
					}
				}
			}

			else if (a == "D" || a == "d" || a == "decode" || a == "Decode"){
				system("cls");
				int key[3][3] = { 0 };
				double inverseKey[3][3] = { 0 };
				vector<double>code;
				vector<int>answers;
				vector<string>numbers = inputFile();
				extractKey(numbers, key);
				code = extractCode(numbers);
				keyInverse(key, inverseKey);
				answers = generateCodedtext(inverseKey, code);
				system("cls");
				cout << "Your message is: " << endl;
				for (int a = 0; a < answers.size(); a++)
					print(answers[a]);
				//cout << endl;
				task = true;
				while (task == true){
					cout << "Do you want to do any other operations?(y/n)" << endl;
					cin >> again;
					if (again == "Y" || again == "y"){
						system("cls");
						Continue = false;
						task = false;
					}
					else if (again == "N" || again == "n"){
						cout << "Ok. Thanks for using this program" << endl;
						Continue = false;
						task = false;
						zhj = false;
					}
					else {
						cout << " That is not a valid option. Please try again." << endl;
					}
				}
			}
			else {
				cout << "That is not a valid option. Please try again." << endl;
				cin >> a;
			}
		}
	}
	system("pause");
}

