// :))))

#include <stdio.h>

void update(int* argument) {

      *argument += 10;

}

int main() {

      int value = 500;

      int* p_value = &value;

      update(p_value);

      printf("The value is: %d\n", value);

      return 0;

}
