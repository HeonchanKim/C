#include<stdio.h>
#include<string.h>

void main() {
	char title[20] = "��HC Cafe��";
	char menu[100] = "���߰��ϱ�\n������ϱ�\n��˻��ϱ�\n������ϱ�\n���Ϻ���\n�쳪����";
	//�޴� �̸�, �޴� ����
	char arName[200][100] = {"", };
	char temp[100] = "";
	int arPrice[200] = { 0, };
	int choice = 0;
	int cnt = 0;
	int isDup = 0;
	int foundIdx = 0;

	while (1) {
		printf("%s\n%s\n\n�޴���ȣ�� �Է��ϼ���! ", title, menu);
		scanf_s("%d", &choice);

		if (choice == 6) { break; }

		switch (choice) {
		case 1: //�߰��ϱ�
			printf("�޴� �̸� : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;

			for (int i = 0; i < cnt;i++) {
				if (!strcmp(temp, arName[i])) {
					isDup = 1;
					break;
				}
			}
			
			if (!isDup) {
				printf("�޴� ���� : ");
				scanf_s("%d", arPrice + cnt);
				strcpy_s(arName[cnt], sizeof(arName[cnt]), temp);
				cnt++;
			}
			else {
				printf("�̹� �����ϴ� ��ǰ�Դϴ�.");
			}
			break;
		case 2: //�����ϱ�
			printf("�����Ͻ� ���� ��ǰ�� : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					isDup = 1;
					break;
				}
			}

			if (isDup) {
				printf("�����Ͻ� ���ο� ��ǰ�� : ");
				scanf_s("%s", temp, sizeof(temp));
				isDup = 0;
				for (int i = 0; i < cnt; i++) {
					if (!strcmp(temp, arName[i])) {
						isDup = 1;
						foundIdx = i;
						break;
					}
				}

				if (!isDup) {
					printf("��ǰ ���� : ");
					scanf_s("%d", arPrice + foundIdx);
					strcpy_s(arName[foundIdx], sizeof(arName[foundIdx]),temp);
				}
				else {
					printf("�̹� �����ϴ� ��ǰ�Դϴ�.");
				}
			}
			else {
				printf("�����Ͻ� ��ǰ�� �������� �ʽ��ϴ�.\n");
			}

			break;
		case 3://�˻��ϱ�
			printf("�˻��Ͻ� ��ǰ�� �Է� :");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					printf("%s(%d��)\n", arName[i], arPrice[i]);
					isDup = 1;
					break;
				}
			}

			if (!isDup) {
				printf("�˻��Ͻ� ��ǰ�� �������� �ʽ��ϴ�.\n");
			}

			break;
		case 4: //�����ϱ�
			printf("������ ��ǰ�� �Է� : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;

			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					isDup = 1;
					foundIdx = i;
					break;
				}
			}

			if (isDup) {
				for (int i = foundIdx; i < cnt; i++) {
					if (i == 199) {
						strcpy_s(arName[i], sizeof(arName[i]), "");
					}
					else {
						strcpy_s(arName[i], sizeof(arName[i]), arName[i + 1]);
					}
				}
				cnt--;
			}
			else {
				printf("�����Ͻ� ��ǰ�� �������� �ʽ��ϴ�.");
			}

			

			break;
		case 5: //��Ϻ���
			printf("��ǰ��(����)\n");
			for (int i = 0; i < cnt; i++) {
				printf("%s(%d��)\n", arName[i], arPrice[i]);
			}
			if (cnt == 0) {
				printf("��ǰ ����\n");
			}

			break;
		}

	}

		
}