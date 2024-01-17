 #include<stdio.h>
 enum permission

 {
    EXECUTE=1,
    WRITE=2,
    READ=4,

 };

 int main()
 {
    int permission=EXECUTE|WRITE|READ;
    printf("%d",permission);
 }





 #include<stdio.h>
enum week{sun,mon,tue,wed,thu,fri,sat};

int main()
{
 enum week today;
 today=mon;
 printf("Day %d",today+1);

}
