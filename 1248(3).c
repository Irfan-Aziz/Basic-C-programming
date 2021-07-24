#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,m,n,c,x,l,y;
char a[100],b[100],d[100],e[100],temp;
//printf("Enter test cases\n");
scanf("%d",&n);
getchar();
for(c=0;c<n;c++){


//printf("Enter str\n");
gets(a);
gets(b);
gets(d);
x=0;
for(i=0;i<strlen(b);i++){
for(j=i+1;j<strlen(b);j++){
if(b[i]==b[j]){
 printf("CHEATER\n");
x++;
break;}


}

}
//printf("%d\n",x);
if(x==0){
for(k=0;k<strlen(d);k++){
for(l=k+1;l<strlen(d);l++){
if(d[k]==d[l]){
 printf("CHEATER\n");
x++;
break;}


}

}}
//printf("%d\n",x);
if(x==0){
        y=0;
    for(i=0;i<strlen(b);i++){
        for(j=0;j<strlen(d);j++){
            if(b[i]==d[j]){
                y++;

                break;
            }
        }
        if(y!=0){
        printf("CHEATER\n");
        x++;}
    }
}
//printf("%d y=%d\n",x,y);
if(x==0){
        y=0;
        for(i=0;i<strlen(b);i++){
            for(j=0;j<strlen(a);j++){
                if(b[i]==a[j]){
                    y++;

                break;
           } }}
           if(y!=strlen(b)){
           printf("CHEATER\n");
           x++;}

        }
        //printf("%d\n",x);
if(x==0){
        y=0;
        for(i=0;i<strlen(d);i++){
            for(j=0;j<strlen(a);j++){
                if(d[i]==a[j]){
                   y++;
                break;
           }
                }

        }
        if(y!=strlen(d)){
            x++;
           printf("CHEATER\n");}


}
//printf("%d\n",x);
if(x==0){

    strcat(b,d);
if(strlen(b)==0){
        for(i=0;i<strlen(a)-1;i++){
for(j=0;j<strlen(a)-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}}}
    printf(a);
}
m=0;
    for(i=0;i<strlen(a);i++){
            k=0;
        for(j=0;j<strlen(b);j++){
            if(a[i]!=b[j])
                k++;
            if(k==strlen(b)){
                e[m]=a[i];
                m++;}
                //break;
            }
        }
    e[m]='\0';
           for(i=0;i<strlen(e)-1;i++){
for(j=0;j<strlen(e)-i-1;j++){
if(e[j]>e[j+1]){
temp=e[j];
e[j]=e[j+1];
e[j+1]=temp;}}}
printf(e);

    }

printf("\n");
}}
