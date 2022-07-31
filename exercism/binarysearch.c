/*
 * binarySearch.c
 *
 *      Author: ENG: Mohame Mostafa Maher
 *      contact: mohamed.mostafa.maher.999@gmail.com
 */

int binarySeach(int size, int* arr, int target);

int main()
{
	int arr[6]={1,2,3,4,5,6};
	int index = binarySeach(6, arr,4);

	return 0;
}

int binary(int size, int* arr, int target)
{
    int tail=0, head=size-1, med=0;

    do
    {
        med = (head- tail)/2 +tail;
        
        if(arr[med] < target)
            tail = med+1;
        else if(arr[med] > target)
            head = med-1;

    }while(arr[med] != target);      

    return med;

}