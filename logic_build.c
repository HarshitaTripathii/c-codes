// #include <stdio.h>
// // #include <math.h>
// void main() {
//   // int p[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7}
//   int p[4] = {400, 500, 600, 700}, area[3] = {0}, length, height, vol;
//   int max=0;
//   for (int i = 0; i < 4; i++) {
//     for (int j = i + 1; j < 4; j++) {
//       height = (p[i] > p[j] ? p[j] : p[i]);
//       length = j - i;
//       vol = height * length;
//       if (area[i] < vol)
//        {
//         area[i] = vol;
//       }
//     }
//     max=(area[i]>max? area[i]:max);
//   }
//   for (int i = 0; i < 3; i++) {
//     printf("%d\n", area[i]);
//   }
//   printf("amount of water is %d", max);
// }

// #include <stdio.h>
// void main() {
//   int p[6] = {7, 1, 5, 3, 6, 4}, r[5] = {0};
//   for (int i = 0; i < 5; i++) {
//     for (int j = (i + 1); j < 5; j++) {
//       if (p[j] > p[i]) {
//         int sub = p[j] - p[i];
//         if (sub > r[i]) {
//           r[i] = sub;
//         }
//       }
//     }
//   }
//   int max = r[0];
//   for (int i = 0; i < 5; i++) {
//     if (r[i] > max) {
//       max = r[i];
//     }
//   }
//   printf("profit is %d", max);

// for (int i = 0; i < 5; i++) {
//   printf("%d", r[i]);
// }
// }