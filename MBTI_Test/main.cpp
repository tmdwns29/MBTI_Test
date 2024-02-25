#include "Parent.h"
#include "Child.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char choice;
	Q1 num1; Q1* pnum1 = &num1;
	Q3 num2; Q3* pnum2 = &num2;
	Q5 num3; Q5* pnum3 = &num3;
	MBTI* mbti = NULL;
	
	cout << "��MBTI�� ����� ���� ������ 16������ ���� �ڱ⺸���� �������� �˻��Դϴ١�" << endl;

	while(1) {
		cout << "\n�ذ˻縦 �����ϼ����\n" << endl;
		cout << "�簣����(���� �� 4��)\n��������(���� �� 12��)\n������ɸ���(���� �� 20��)\n������\n\n�Է� �� ";
		cin >> choice;

		if (choice == '1') {
			mbti = pnum1;
		}
		else if (choice == '2') {
			mbti = pnum2;
		}
		else if (choice == '3') {
			mbti = pnum3;
		}
		else if (choice == '4') {
			return 0;
		}
		else {
			cout << "\n�߸� �Է��ϼ̽��ϴ�. �ٽ� �õ��ϼ���" << endl;
		}
		cout << "\n�� �Է��� 1 �Ǵ� 2 �� �Է��ϼ���. ��\n";
		mbti->Question();
		mbti->show_result();
		mbti->plus_info(mbti->return_result());
	}
}