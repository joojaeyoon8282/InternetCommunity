#include <stdio.h>
#include <string.h>

char connect[100];
char connect_yes[100] = "네";
char connect_no[100] = "아니오";
char loginORreg[100];
char login[100] = "로그인";
char reg[100] = "가입";
char ID_input[100];
char PASSWORD_input[100];
char ID_input_2[100];
char PASSWORD_input_2[100];
char makeID[100];
char makePASSWORD[100];
char logingolra[100];
char loginyes[100] = "네";
char loginno[100] = "아니오";

void LoginReg();
void Reg_Make();

int main(void) {
	printf("인터넷에 접속을 하시겠습니까?\n");
	scanf("%s", connect);

	if (!strcmp(connect,connect_yes)) {
		printf("네 알겠습니다, 잠시만 기다려 주세요\n");
		printf("로그인/가입중 어떤것을 하시겠습니까?\n");
		scanf("%s", loginORreg);
		LoginReg();
	}
	else if (!strcmp(connect, connect_no)) {
		printf("안녕히가세요");
	}
}

void loginyeobu() {
	printf("회원가입이 완료 되었습니다. 로그인을 하시겠습니까?\n");
	scanf("%s", logingolra);
	if (!strcmp(logingolra, loginyes)) {
			printf("아이디를 입력해주세요\n");
			scanf("%s", ID_input_2);
			printf("비밀번호를 입력해주세요\n");
			scanf("%s", PASSWORD_input_2);
			printf("로그인 되었습니다.\n");
	}
	else if (!strcmp(logingolra, loginno)) {
		printf("안녕히가세요\n");
	}
}

void Reg_Make() {
	if (!strcmp(connect,connect_yes)) {
		printf("아이디를 만들어주세요\n");
		scanf("%s", makeID);
		printf("비밀번호를 만들어주세요\n");
		scanf("%s", makePASSWORD);
		loginyeobu();
	}
	else if (!strcmp(connect, connect_no)) {
		printf("안녕히가세요\n");
	}
}

void LoginReg() {
	if (!strcmp(loginORreg, login)) {
			printf("아이디를 입력해주세요\n");
			scanf("%s", ID_input);
			printf("비밀번호를 입력해주세요\n");
			scanf("%s", PASSWORD_input);
			printf("로그인 되었습니다.\n");
	}
	else if (!strcmp(loginORreg, reg)) {
			printf("가입을 하시겠습니까?\n");
			scanf("%s", connect);
			Reg_Make();
	}
}
