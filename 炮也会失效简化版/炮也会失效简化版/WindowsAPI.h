#pragma once
#include "STD.h"
#include <windows.h>

using namespace std;

void seet(int a) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void RJDZ(int MaxBlood, int MaxMag) {
	system("cls");
	seet(9);
	Sleep(3000);
	system("cls");
	cout << "\n";
	system("cls");
	seet(7);
	int RobotMaxBlood = 1;
	int RobotNowBlood = 1;
	int MyNowBlood = MaxBlood;
	int RobotMag = 0;
	int MyMag = MaxMag;
	Sleep(1500);
	cout << "׼���ÿ�ʼ��Ϸ����(ESC�˳�)\n";
	seet(6);
	cout << "��������Ļش�...\n";
	seet(7);
	if (_getwch() == 27) return;
	system("cls");
	int HuiHe = 1;
	while (true) {
		seet(6);
		cout << "��" << HuiHe << "�غϣ���ʼ��\n";
		seet(7);
		cout << "���Ѫ����";
		seet(4);
		for (int i = 0; i < MyNowBlood; i++) {
			cout << "@";
		}
		cout << endl;
		seet(7);
		cout << "���������";
		seet(2);
		for (int i = 0; i < MyMag; i++) {
			cout << "*";
		}
		cout << endl << endl;
		seet(7);
		cout << "�з�" << "��Ѫ����";
		seet(4);
		for (int i = 0; i < RobotNowBlood; i++) {
			cout << "@";
		}
		cout << endl;
		seet(7);
		cout << "�з�" << "��������";
		seet(2);
		for (int i = 0; i < RobotMag; i++) {
			cout << "*";
		}
		cout << endl << endl;
		seet(rand() % 7 + 1);
		cout << "�з�" << "������...";
		for (int i = 0; i < 10; i++) {
			cout << "\b\b\b";
			Sleep(250);
			cout << "...";
		}
		int ZhaoShi;
		while (true) {
			ZhaoShi = rand() % 4 + 1;
			if (ZhaoShi == 1) {
				RobotMag++;
				break;
			}
			else if (ZhaoShi == 2) {
				if (RobotMag <= 0) {
					continue;
				}
				RobotMag--;
				break;
			}
			else if (ZhaoShi == 3) {
				if (RobotMag <= 1) {
					continue;
				}
				RobotMag -= 2;
				break;
			}
			else if (ZhaoShi == 4) {
				break;
			}
		}
		cout << "\n" << "�з�" << "������ϣ�����У�\n";
		seet(7);
		cout << "1.��(�ܻ���������)\n";
		Sleep(100);
		cout << "2.ǹ(��ͨ������������1���������˺���1��ǹ��ǹ���Ե���)\n";
		Sleep(100);
		cout << "3.��(���й�����������2���������˺���2�������ڿ��Ե���)\n";
		Sleep(100);
		cout << "4.��(��������������������ʹ�Է������˺�-1�����Է�������������Ч)\n";
		Sleep(500);
		int Choose;
		while (true) {
			seet(6);
			cout << "��������Ļش�...\n";
			seet(4);
			Choose = _getwch();
			if (Choose == '1') {
				MyMag++;
				break;
			}
			else if (Choose == '2') {
				if (MyMag <= 0) {
					cout << "��������������\n";
					continue;
				}
				MyMag--;
				break;
			}
			else if (Choose == '3') {
				if (MyMag <= 1) {
					cout << "��������������\n";
					continue;
				}
				MyMag -= 2;
				break;
			}
			else if (Choose == '4') {
				break;
			}
			else {
				cout << "��������ȷ�����֣�����\n";
				continue;
			}
		}
		Choose -= '0';
		seet(7);
		system("cls");

		//_____________________________________________________

		cout << "��ѡ����";

		seet(Choose);
		if (Choose == 1) {
			cout << "��\n";
			seet(7);
		}
		else if (Choose == 2) {
			cout << "ǹ\n";
			seet(7);
		}
		else if (Choose == 3) {
			cout << "��\n";
			seet(7);
		}
		else if (Choose == 4) {
			cout << "��\n";
			seet(7);
		}

		cout << "�з�" << "ѡ����";

		seet(ZhaoShi);

		if (ZhaoShi == 1) {
			cout << "��\n";
			seet(7);
		}
		else if (ZhaoShi == 2) {
			cout << "ǹ\n";
			seet(7);
		}
		else if (ZhaoShi == 3) {
			cout << "��\n";
			seet(7);
		}
		else if (ZhaoShi == 4) {
			cout << "��\n";
			seet(7);
		}
		Sleep(500);
		cout << "\n�����ж�...\n";
		Sleep(1000);
		do { //Ѫ������
			if (ZhaoShi == 2) {
				if (Choose == 1) {
					MyNowBlood--;
					break;
				}
				else if (Choose == 2) {
					break;
				}
				else if (Choose == 3) {
					RobotNowBlood--;
					break;
				}
				else if (Choose == 4) {
					break;
				}
			}
			else if (ZhaoShi == 1) {
				if (Choose == 1) {
					break;
				}
				else if (Choose == 2) {
					RobotNowBlood--;
					break;
				}
				else if (Choose == 3) {
					RobotNowBlood -= 2;
					break;
				}
				else if (Choose == 4) {
					break;
				}
			}
			else if (ZhaoShi == 3) {
				if (Choose == 1) {
					MyNowBlood -= 2;
					break;
				}
				else if (Choose == 2) {
					MyNowBlood--;
					break;
				}
				else if (Choose == 3) {
					break;
				}
				else if (Choose == 4) {
					MyNowBlood--;
					break;
				}
			}
			else if (ZhaoShi == 4) {
				if (Choose == 1) {
					break;
				}
				else if (Choose == 2) {
					break;
				}
				else if (Choose == 3) {
					RobotNowBlood--;
					break;
				}
				else if (Choose == 4) {
					break;
				}
			}
		} while (false);
		seet(6);
		if (MyNowBlood <= 0) {
			seet(4);
			cout << "�з�" << "��ʤ�ˣ�\n";
			cout << "���ǳ�ס��" << HuiHe << "�غ�\n";
			Sleep(3000);
			break;
		}
		if (RobotNowBlood <= 0) {
			seet(4);
			cout << "���ʤ�ˣ�\n";
			cout << "���ǳ�ס��" << HuiHe << "�غ�\n";

			int PlusBlood = rand() % 2 + 1;
			int PlusMag = rand() % 2 + 1;

			seet(3);
			MaxBlood += PlusBlood;
			MaxMag += PlusMag;
			Sleep(3000);
			break;
		}
		cout << "\nʲô���鶼û�з���(˭��û����)" << endl;
		Sleep(3000);
		system("cls");
		HuiHe++;
	}
	system("cls");
	seet(7);
	return;
}