//#include<cstdio>
//
//using namespace std;
//
//void Hannoi(int num, char start, char target, char aux) {
////    int i = 1;
//    if (num == 1) {
//        printf("Move disk 1 from %c to %c\n", start, target);
//    } else {
//        Hannoi(num - 1, start, aux, target);
//        printf("Move disk %d from %c to %c\n", num, start, target);
//        Hannoi(num - 1, aux, target, start);
//    }
//}
//
//int main()
//{
//    int n;
//    while(scanf("%d", &n) != EOF)
//        Hannoi(n, 'A', 'C', 'B');
//    return 0;
//}