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
	cout << "准备好开始游戏了吗？(ESC退出)\n";
	seet(6);
	cout << "请做出你的回答...\n";
	seet(7);
	if (_getwch() == 27) return;
	system("cls");
	int HuiHe = 1;
	while (true) {
		seet(6);
		cout << "第" << HuiHe << "回合，开始！\n";
		seet(7);
		cout << "你的血量：";
		seet(4);
		for (int i = 0; i < MyNowBlood; i++) {
			cout << "@";
		}
		cout << endl;
		seet(7);
		cout << "你的蓄力：";
		seet(2);
		for (int i = 0; i < MyMag; i++) {
			cout << "*";
		}
		cout << endl << endl;
		seet(7);
		cout << "敌方" << "的血量：";
		seet(4);
		for (int i = 0; i < RobotNowBlood; i++) {
			cout << "@";
		}
		cout << endl;
		seet(7);
		cout << "敌方" << "的蓄力：";
		seet(2);
		for (int i = 0; i < RobotMag; i++) {
			cout << "*";
		}
		cout << endl << endl;
		seet(rand() % 7 + 1);
		cout << "敌方" << "出招中...";
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
		cout << "\n" << "敌方" << "出招完毕，请出招：\n";
		seet(7);
		cout << "1.攒(攒积力量攻击)\n";
		Sleep(100);
		cout << "2.枪(普通攻击，需消耗1点力量，伤害×1，枪与枪可以抵消)\n";
		Sleep(100);
		cout << "3.炮(大招攻击，需消耗2点力量，伤害×2，炮与炮可以抵消)\n";
		Sleep(100);
		cout << "4.盾(防御，无需消耗力量，使对方攻击伤害-1，若对方不攻击，则无效)\n";
		Sleep(500);
		int Choose;
		while (true) {
			seet(6);
			cout << "请做出你的回答...\n";
			seet(4);
			Choose = _getwch();
			if (Choose == '1') {
				MyMag++;
				break;
			}
			else if (Choose == '2') {
				if (MyMag <= 0) {
					cout << "蓄力不够！！！\n";
					continue;
				}
				MyMag--;
				break;
			}
			else if (Choose == '3') {
				if (MyMag <= 1) {
					cout << "蓄力不够！！！\n";
					continue;
				}
				MyMag -= 2;
				break;
			}
			else if (Choose == '4') {
				break;
			}
			else {
				cout << "请输入正确的数字！！！\n";
				continue;
			}
		}
		Choose -= '0';
		seet(7);
		system("cls");

		//_____________________________________________________

		cout << "你选择了";

		seet(Choose);
		if (Choose == 1) {
			cout << "攒\n";
			seet(7);
		}
		else if (Choose == 2) {
			cout << "枪\n";
			seet(7);
		}
		else if (Choose == 3) {
			cout << "炮\n";
			seet(7);
		}
		else if (Choose == 4) {
			cout << "盾\n";
			seet(7);
		}

		cout << "敌方" << "选择了";

		seet(ZhaoShi);

		if (ZhaoShi == 1) {
			cout << "攒\n";
			seet(7);
		}
		else if (ZhaoShi == 2) {
			cout << "枪\n";
			seet(7);
		}
		else if (ZhaoShi == 3) {
			cout << "炮\n";
			seet(7);
		}
		else if (ZhaoShi == 4) {
			cout << "盾\n";
			seet(7);
		}
		Sleep(500);
		cout << "\n正在判定...\n";
		Sleep(1000);
		do { //血量更改
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
			cout << "敌方" << "获胜了！\n";
			cout << "你们撑住了" << HuiHe << "回合\n";
			Sleep(3000);
			break;
		}
		if (RobotNowBlood <= 0) {
			seet(4);
			cout << "你获胜了！\n";
			cout << "你们撑住了" << HuiHe << "回合\n";

			int PlusBlood = rand() % 2 + 1;
			int PlusMag = rand() % 2 + 1;

			seet(3);
			MaxBlood += PlusBlood;
			MaxMag += PlusMag;
			Sleep(3000);
			break;
		}
		cout << "\n什么事情都没有发生(谁都没有死)" << endl;
		Sleep(3000);
		system("cls");
		HuiHe++;
	}
	system("cls");
	seet(7);
	return;
}