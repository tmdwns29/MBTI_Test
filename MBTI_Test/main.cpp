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
	
	cout << "※MBTI란 사람의 성격 유형을 16가지로 나눈 자기보고형 성격유형 검사입니다※" << endl;

	while(1) {
		cout << "\n※검사를 선택하세요※\n" << endl;
		cout << "①간단한(질문 총 4개)\n②적당한(질문 총 12개)\n③오래걸리는(질문 총 20개)\n④종료\n\n입력 → ";
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
			cout << "\n잘못 입력하셨습니다. 다시 시도하세요" << endl;
		}
		cout << "\n※ 입력은 1 또는 2 만 입력하세요. ※\n";
		mbti->Question();
		mbti->show_result();
		mbti->plus_info(mbti->return_result());
	}
}