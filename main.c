#include <stdio.h>
#include "pico/stdlib.h"

int main(){
  stdio_init_all();
  gpio_init(28);
  gpio_set_dir(28,false);
  gpio_init(27);
  gpio_set_dir(27,false);
  gpio_init(1);
  gpio_set_dir(1,true);
  gpio_init(2);
  gpio_set_dir(2,true);
  while (true){
    if (gpio_get(28)){
    (gpio_put(28,true));
    gpio_put(1,true);
    }
    else{
      gpio_put(1,false);
    }
    if (gpio_get(27)){
      if(gpio_get(2)){
      gpio_put(2,false);
      }
      else{
      gpio_put(2,true);
      }
    }
    sleep_ms(500);
  }
}