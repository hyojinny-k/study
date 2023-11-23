#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CUST 200 // max customer
#define MAX_CHAR 100 // ���ڿ��� max ����
#include <stdio.h>
#include <string.h>

typedef struct { // ��� ����: ���� �����ϰ� �ִ� Video ���� ����
	char title[MAX_CHAR];
	int qty; // ����
} VideoInfo;

typedef struct { // ���� ����: �����ذ� (�� id�� video id)���� ����
	int custId; // �� id : 1, 2, 3
	char title[MAX_CHAR]; // Video ����
} RentInfo;

void printAllVideo(VideoInfo videoList[], int videoCount)
{
	int i;

	printf("Video����\t����\n");
	printf("-----------------------\n");
	for (i = 0; i < videoCount; i++)
		printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
}

void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title, int qty)
{
	strcpy(videoList[*videoCountPtr].title, title);
	videoList[*videoCountPtr].qty = qty;
	(*videoCountPtr)++;
}

VideoInfo *searchVideoByTitle(VideoInfo videoList[], int videoCount, char* title)
{
	int i;

	for (i = 0; i < videoCount; i++) {
		if (strcmp(videoList[i].title, title) == 0)
			return videoList;
	}

	return NULL;
}

void rentVideo(VideoInfo videoList[], int videoCount, RentInfo rentList[], int* rentCount, char* title, int custId)
{
	rentList[*rentCount].custId = custId;
	strcpy(rentList[*rentCount].title, title);
	rentCount++;
	searchVideoByTitle(videoList, videoCount, title)->qty--;
}

void printAllRent(RentInfo rentList[], int videoCount)
{
	int i;

	printf("��id\tVideo����\n");
	printf("-----------------------\n");
	for (i = 1; i <= videoCount; i++)
		printf("%d\t%s\n", rentList[i].custId, rentList[i].title);
}

int main(void)
{
	int videoCount = 5;
	VideoInfo videoList[MAX_VIDEO] = { {"BeforeSunrise", 1}, {"BeforeSunset", 3}, {"BeforeMidnight", 5}, {"Casablanca", 7}, {"EdgeOfTomorrow", 9} };
	int rentCount = 1; // ���� ���� �Ǽ��� 0��
	RentInfo rentList[MAX_CUST];

	int choice;
	char title[MAX_CHAR];
	int custId, qty;

	printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����): ");
	scanf("%d", &choice);
	while (choice != 6) {
		switch (choice) {
		case 1: printAllVideo(videoList, videoCount); break;
		case 2:
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter video ����: ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, title, qty); break;
		case 3:
			printf("Enter video ����: ");
			scanf("%s", title);
			if (searchVideoByTitle(videoList, videoCount, title) == NULL)
				printf("�׷� ������ �����ϴ�.\n");
			else if (searchVideoByTitle(videoList, videoCount, title)->qty == 0)
				printf("�� �뿩���Դϴ�.\n");
			else
				printf("�뿩 �����մϴ�.\n"); break;
		case 4:
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter �� id: ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, title, custId); break;
		case 5:
			printAllRent(rentList, rentCount); break;
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����): ");
		scanf("%d", &choice);
	}
}