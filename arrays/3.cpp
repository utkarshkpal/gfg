# include <stdio.h>


int oddElement(int A[], int arr_size,int countArr[])
{
  int i,j;
  int flag=0;


  //  printf("%d\n",arr_size);

   for (i=0;i<arr_size;i++)
    {
      // printf("%d\n",A[i]);
      countArr[A[i]]++;
      // printf("%s\n","hello" );
      // if(countArr[i]>arr_size/2)
      // {
      //   printf("%s\n","hello" );
      //   //  printf("%d\n",countArr[j]);
      //   return i;
      // }
      // // printf("%d \n",countArr[i]);

    }

    for(j=0;j<arr_size;j++)
    {
        //  printf("%d\n",countArr[j]);
      if(countArr[j]%2!=0)
      {
          printf("%d\n",j);
          flag= 1;
      }


    }
    return flag;



}

/* Driver program to test above function */
int main()
{
    int A[] = {1, 2, 3,  1, 3,2};
    int static countArr[10];
    int arr_size  = sizeof(A)/sizeof(A[0]);
    // printf("%d",arr_size);
    int flag = oddElement(A, arr_size,countArr);

    if(flag){


    }
    else
    {
      printf("No odd element");
    }

    // return 0;
}
