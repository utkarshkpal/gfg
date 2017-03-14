# include <stdio.h>


int majorityElement(int A[], int arr_size,int countArr[])
{
  int i,j;


  //  printf("%d\n",arr_size);

   for (i=0;i<arr_size;i++)
    {
      // printf("%d\n",A[i]);
      countArr[A[i]]++;
      // printf("%s\n","hello" );
      if(countArr[i]>arr_size/2)
      {
        printf("%s\n","hello" );
        //  printf("%d\n",countArr[j]);
        return i;
      }
      // printf("%d \n",countArr[i]);

    }

    // for(j=0;j<arr_size;j++)
    // {
    //     // printf("%d\n",countArr[j]);
    //   if(countArr[j]>arr_size/2)
    //   {
    //     //  printf("%d\n",countArr[j]);
    //     return j;
    //   }
    //
    //
    // }

    return 0;

}

/* Driver program to test above function */
int main()
{
    int A[] = {3,3,4,2,4,4,2,4,4};
    int static countArr[10];
    int arr_size  = sizeof(A)/sizeof(A[0]);
    // printf("%d",arr_size);
    int majority = majorityElement(A, arr_size,countArr);

    if(majority){
      printf("%d",majority);

    }
    else
    {
      printf("No majority element");
    }

    // return 0;
}
