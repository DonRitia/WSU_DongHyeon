#include<stdio.h>
#include<windows.h>  //한글이 깨져서 system 쓰려고


int main(){
    system("chcp 65001"); //한글이 깨져서
    char date[32];  
    char name[32];
    int year, month, day;
    printf("[현재 날짜를 \"yyyy-mm-dd\" 형식으로 입력하세요]: ");   scanf("%s", date);
    sscanf(date, "%d-%d-%d", &year, &month, &day); // 출력하기 편하게 미리 잘라두려고
    getchar();
    printf("[당신의 이름을 입력하세요]: ");                         gets(name);
    printf("**입력이 정상적으로 처리되었습니다.**\n");

    printf("\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
    printf("                         [마그라테아 ver 0.1]                                      \n");
    printf("           풀 한 포기 없는 황무지에서 반짝이는 행성을 만들내는 곳 마그라테아,         \n");
    printf("         사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빗는 곳,      \n");
    printf("           마그라테아에 오신걸 환영합니다.                                          \n\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[사용자]: %s                                   [실행 시간]: %d년 %d월 %d일\n", name, year, month, day);
    printf("================================================================================\n");

    return 0;
}