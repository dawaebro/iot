#include <stdio.h>

int main(int argc, char * argv[]) {
  return 0;
}


// Test is can be expoited for ctf
int vuln() {
  char buf[256];
  scanf("%s", buf);
  return 0;
}
