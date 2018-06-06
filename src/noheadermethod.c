//
// Created by Linux on 2018/6/6.
//



//int main(){
//    printf("%d", run());
//    printf("\n");
//    printf("%d", max_among(1, 2, 9));
//    printf("\n");
//    // c 语言的传统漏洞
//    warning_implicit(1.8);
//
//    int a ,b;
//    a = 12;
//    b = 234;
//    swap_a_b(&a, &b);
//    printf("a is %d\t and b is %d\n", a, b);
//}

int run() {
    return 1;
}

//int max_among(int a, int b, int c) {
//    return max_two(max_two(a, b), c);
//}
//
//int max_two(int a, int b) {
//    return a > b ? a : b;
//}
//
//int warning_implicit(int a) {
//    printf("%d\n", a);
//}

//  * 表示引用
int swap_a_b(int *a, int *b) {
    int temp = *a; // * 表示解引用
    *a = *b;
    *b = temp;
}
