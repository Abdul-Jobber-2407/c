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