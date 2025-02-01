#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
struct Vehicle{
    char number[20];
    char type[10];
    float toll;
}

int main() {
    int N;
    scanf("%d",&N);
    struct Vehicle vehicles[N];
    float c_ttl = 0,t_ttl = 0 , b_ttl = 0;
    for (int i = 0; i<N;i++){
        scanf("%s%s%f",vehicles[i].number,vehicles[i].type,&vehicles[i].toll);

        if (strcmp(vehicles [i].type,"Car")==0){
            c_ttl += vehicles[i].toll;

        }
        else if(strcmp(vehicles[i].type,"Truck")==0){
            t_ttl +=vehicles[i].toll;
        }

        else if(strcmp(vehicles[i].type,"bike")==0){
            b_ttl +=vehicles[i].toll;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f"c_ttl,t_ttl,b_ttl);
    return 0;
}