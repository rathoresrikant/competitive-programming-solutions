
#include <sstream>
#include <stdio.h>
#include <string>
using namespace std;
 
int main(){
// t: tamanho do numero
// d: divisivel por "d"
// r: resposta
 int t, d;
 std::string r;
 std::stringstream ss;
 scanf("%i %i", &t, &d);
 
 if(t < 2){
  if(d == 10) {
   r = string("-1");
  }else {
   ss << d;
   r = ss.str();
  }
 }
 
 else{
  if (d < 10){
   ss << d;
   r = ss.str();
  }else {
   r = "1";
  }
 
  for (int i = 0; i < t - 1; i++){
   r = r + "0";
  }
 }
 
 printf("%s\n", r.c_str());
 return 0;
}
