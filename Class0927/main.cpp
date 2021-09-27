#include<stdio.h>
typedef struct _Point
{
	int x;
	int y;
}Point;
void InitPoint(Point* p, int x, int y) {
	
	p->x = x;
	p->y = y;
}
void UninitPoint(Point* p) {
	p->x = 0;
	p->y = 0;
}
void PrintPoint(Point* p) {
	printf("(%d,%d)\n", p->x, p->y);
}
void AddPoint(Point* p, int x, int y) {
	p->x += x;
	p->y += y;
}
int main() {
	Point pt;
	InitPoint(&pt, 2,3);

	PrintPoint(&pt);
	
	AddPoint(&pt, 3, 3);
	PrintPoint(&pt);
	UninitPoint(&pt);
}
//#include<stdio.h>
//void Increment(int* pn) {
//
//	++* pn;
//}
//void Print(const int* pn) {
//
//	printf("int : %d\n", *pn);
//}
//void Decrement(int* pn) {
//
//	--* pn;
//}
//void Reset(int* pn) {
//
//	*pn = 0;
//}
//int main() {
//	int n = 0;
//
//	Increment(&n);
//	Print(&n);
//	Decrement(&n);
//	Print(&n);
//	Reset(&n);
//	Print(&n);
//
//}
//#include<stdio.h>
//void Printarray(const int* arr, int size) {
//
//	for (int i = 0; i < size; i++) {
//		printf("[%d] : %d\n", i, arr[i]);
//
//	}
//}
//int main() {
//
//	int arr[3] = { 1,2,3 };
//	int arr2[5] = { 100,200,300,400,500 };
//
//	Printarray(arr,3);
//	Printarray(arr2, 5);
//	Printarray(arr2 + 2, 2);
//
//}

//#include<stdio.h>
//typedef struct _point {
//	int x;
//	int y;
//
//}Point;
//
//void Printpoint(const Point* arg) {
//
//	printf("(%d, %d)\n",arg->x, arg->y);
//}
//int main() {
//
//	Point pt1 = { 2,3 };
//	Printpoint( &pt1);
//
//}

//#include<stdio.h>
//void PrintString(const char* s) {
//	printf("String : %s\n", s);
//}
//int main() {
//
//	char buf1[] = "Hello1";
//	const char* buf2 = "Hello2";
//
//	PrintString(buf1);
//	PrintString(buf2);
//	PrintString("Hello3");
//
//}