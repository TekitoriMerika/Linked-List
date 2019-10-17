#include <iostream>
#include "add.h"

int main() {

	insertFirst(1, 10);
	insertFirst(2, 20);
	insertFirst(3, 30);
	insertFirst(4, 1);
	insertFirst(5, 40);
	insertFirst(6, 56);

	printf("Danh sach ban dau: ");

	//in danh sach
	printList();

	while (!isEmpty()) {
		struct node *temp = deleteFirst();
		printf("\nGia tri bi xoa:");
		printf("(%d,%d) ", temp->key, temp->data);
	}

	printf("\nDanh sach sau khi da xoa gia tri: ");
	printList();
	insertFirst(1, 10);
	insertFirst(2, 20);
	insertFirst(3, 30);
	insertFirst(4, 1);
	insertFirst(5, 40);
	insertFirst(6, 56);
	printf("\nPhuc hoi danh sach: ");
	printList();
	printf("\n");

	struct node *foundLink = find(4);

	if (foundLink != NULL) {
		printf("Tim thay phan tu: ");
		printf("(%d,%d) ", foundLink->key, foundLink->data);
		printf("\n");
	}
	else {
		printf("Khong tim thay phan tu.");
	}

	deleteKey(4);
	printf("Danh sach, sau khi xoa mot phan tu: ");
	printList();
	printf("\n");
	foundLink = find(4);

	if (foundLink != NULL) {
		printf("Tim thay phan tu: ");
		printf("(%d,%d) ", foundLink->key, foundLink->data);
		printf("\n");
	}
	else {
		printf("Khong tim thay phan tu.");
	}

	printf("\n");
	sort();

	printf("Danh sach sau khi duoc sap xep: ");
	printList();

	reverse(&head);
	printf("\nDanh sach sau khi bi dao nguoc: ");
	printList();
	printf("\n");

	system("pause");
}