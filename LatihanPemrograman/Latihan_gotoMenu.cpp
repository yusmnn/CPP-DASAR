#include <stdio.h>
main(){
 int i=2;
 cetak:
  printf("%d\t",i);
 loop:
  i++;
 if(i==2 || i==3 || i==5 || i==7)
  goto cetak;
 else if(i%2 && i%3 && i%5 && i%7) 
  goto cetak;
 else if(i < 100 )
  goto loop;
}
