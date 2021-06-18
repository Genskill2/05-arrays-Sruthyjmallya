/* Enter your solutions in this file */
#include <stdio.h>
#include<math.h>
int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);

int max(int list[],int listCount){
  int max = list[0];
  for(int i=1;i<listCount;i++){
    if(list[i]>max){
      max = list[i];
    }
  }
  return(max);
}

int min(int list[],int listCount){
  int min = list[0];
  for(int i=1;i<listCount;i++){
    if(list[i]<min){
      min = list[i];
    }
  }
  return(min);
}

float average(int list[], int listCount){
  int sum = 0;
  for(int i=0;i<listCount;i++){
    sum += list[i];
  }
  return(sum/listCount);
}

int mode(int list[], int listCount){
  int maxCount = 0;
  int mode,count;
  for(int i=0;i<listCount;i++){
    count = 0;
    for(int j=0;j<listCount;j++){
      if(list[i] == list[j]){
         count++;
      }
    }
    if(count>maxCount){
      maxCount = count;
      mode = list[i];
    }
  }
  return(mode);
}

int factors(int number, int primeFactors[]){
  int count = 0;
  int i = 0;
  while(number%2 == 0){
    list[i] = 2;
    i++;
    number /= 2;
    count++;
  }
  for(int j=3;j<sqrt(number);j+=2){
    while(number%j == 0){
      list[i] = j;
      i++;
      number /= j;
      count++;
    }
  }
  if(number > 2){
   list[i] = number;
   count++;
  }
  return(count);
}








