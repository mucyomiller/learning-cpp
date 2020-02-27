#include <iostream>
int main(int argc, char const *argv[]) {
  int **a2d = new int *[50]; // hell slower
  for (int i = 0; i < 50; i++) {
    a2d[i] = new int[50];
  }
  a2d[0][0] = 0;
  a2d[0][1] = 0;
  a2d[0][2] = 0;

  //
  for (int y = 0; y < 5; y++) {
    for (int x = 0; x < 5; x++) {
      a2d[x][y] = 2;
    }
  }
  // release memory
  for (int i = 0; i < 50; i++)
    delete[] a2d[i];
  delete[] a2d;

  // another way   store 2D -> as 1D array  ⚡️
  int *array = new int[5 * 5];
  for (int y = 0; y < 5; y++) {
    for (int x = 0; x < 5; x++) {
      array[x + y * 5] = 2;
    }
  }
  return 0;
}
