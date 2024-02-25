#ifndef QUESTIONTYPE_H
#define QUESTIONTYPE_H
#include "Parent.h"

class Q1 : public MBTI {
	int ans;
public:
	string temp_result;
	void Question() {
		cout << Q[0];
		cin >> ans;
		if (ans == 1)
			temp_result = "E";
		else
			temp_result = "I";

		cout << Q[9];
		cin >> ans;
		if (ans == 1)
			temp_result += "S";
		else
			temp_result += "N";

		cout << Q[10];
		cin >> ans;
		if (ans == 1)
			temp_result += "T";
		else
			temp_result += "F";

		cout << Q[15];
		cin >> ans;
		if (ans == 1)
			temp_result += "J";
		else
			temp_result += "P";
		set_result(temp_result);
	}
};

class Q3 : public MBTI {
public:
	string temp_result; // 결과 임시저장 변수
	void Question() {
		int ans = 0;
		int E_cnt = 0, I_cnt = 0, S_cnt = 0, N_cnt = 0, T_cnt = 0, F_cnt = 0, J_cnt = 0, P_cnt = 0;

		for (int i = 0; i < 3; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				E_cnt++;
			else
				I_cnt++;
		}
		if (E_cnt > I_cnt)
			temp_result = "E";
		else
			temp_result = "I";

		for (int i = 5; i < 8; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				S_cnt++;
			else
				N_cnt++;
		}
		if (S_cnt > N_cnt)
			temp_result += "S";
		else
			temp_result += "N";

		for (int i = 10; i < 13; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				T_cnt++;
			else
				F_cnt++;
		}
		if (T_cnt > F_cnt)
			temp_result += "T";
		else
			temp_result += "F";

		for (int i = 15; i < 18; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				J_cnt++;
			else
				P_cnt++;
		}
		if (J_cnt > P_cnt)
			temp_result += "J";
		else
			temp_result += "P";
		set_result(temp_result);
	}
};

class Q5 : public MBTI {
public:
	string temp_result; // 결과 임시저장 변수
	void Question() {
		int ans = 0;
		int E_cnt = 0, I_cnt = 0, S_cnt = 0, N_cnt = 0, T_cnt = 0, F_cnt = 0, J_cnt = 0, P_cnt = 0;

		for (int i = 0; i < 5; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				E_cnt++;
			else
				I_cnt++;
		}
		if (E_cnt > I_cnt)
			temp_result = "E";
		else
			temp_result = "I";

		for (int i = 5; i < 10; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				S_cnt++;
			else
				N_cnt++;
		}
		if (S_cnt > N_cnt)
			temp_result += "S";
		else
			temp_result += "N";

		for (int i = 10; i < 15; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				T_cnt++;
			else
				F_cnt++;
		}
		if (T_cnt > F_cnt)
			temp_result += "T";
		else
			temp_result += "F";

		for (int i = 15; i < 20; i++)
		{
			cout << Q[i];
			cin >> ans;
			if (ans == 1)
				J_cnt++;
			else
				P_cnt++;
		}
		if (J_cnt > P_cnt)
			temp_result += "J";
		else
			temp_result += "P";
		set_result(temp_result);
	}
};

#endif