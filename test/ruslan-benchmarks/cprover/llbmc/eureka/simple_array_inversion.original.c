#include <llbmc.h>

int i,j;
int a[4];
int main(){
  a[0]=0;
  a[3]=3;
  j=0;
  while(j<2){
    a[j]=a[3-j];
    j=j+1;
  }
  if(a[0]==0){
    __llbmc_assert(0);
  }
  return 0;
}
