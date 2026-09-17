#include <stdio.h>
int main(){
    int namSinh;  //%d
    float diemTB; //%f

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    printf("Nhap diem: ");
    scanf("%f", &diemTB);
    
    printf("Nam sinh: %d\n", namSinh);
    printf("TUoi: %d\n", 2026 - namSinh);
    printf("Diem TB: %f\n", diemTB);

    return 0;
}