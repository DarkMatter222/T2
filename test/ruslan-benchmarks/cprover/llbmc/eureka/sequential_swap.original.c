#include <llbmc.h>

int a[2];
int i,j;

void p(){
  int tmp;
  tmp=a[i];
  a[i]=a[j];
  a[j]=tmp;
}

int main(){
  i=0;
  j=1;
  a[i]=100;
  a[j]=200;
  p();
  ;
  p();
  ;
  p();
  ;
  if(a[i]==100){
    __llbmc_assert(0);
  } else {
    ;
  }
  return 0;
}

