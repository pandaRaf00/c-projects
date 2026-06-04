#include<stdio.h>
#include<string.h>


char tracks[][81] = {
    "Jai Jai Jai Hanuman Gosai Krupa Karo Maharaj",
    "Hey Dukh Bhanjan Maruti Nandan Sunlo meri Pukar",
    "Ram Ram Ram RaktVarnam DinKar VadNam TikshaNa DustaKaralam",
    "Jai Jai Jai BajrangBali Jo Dilse Phukare Tujhko Uski Vipda Pal Me Tali",
    "Hey Sun Mata Anjana Dhyanse Tera Lalla Akhade Me Dand Khelta",
};

void find_tracks(char search_for[]){
    for(int i = 0; i < 5; i++){
        if(strstr(tracks[i], search_for)){
            printf("Song Is : %i   %s\n", i, tracks[i]);
        }
    }
}

int main(){
    char search_for[80];
    printf("Search_for : ");
    scanf("%79s", search_for);
    find_tracks(search_for);
    return 0;
}