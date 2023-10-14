#include<stdio.h>

int km_miles(int para001) {
    int kml;
    // printf("enter km: ");
    // scanf("%d", &kml);
    kml = para001;
    int miles = kml/1.609344;
    printf("%d km = %d miles", kml , miles);
}

int main() {

    km_miles(1020);     //kilometers to miles

    return 0;
}