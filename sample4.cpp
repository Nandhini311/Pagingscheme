#include<stdio.h>
#include<conio.h>
#define MAX 100
int main(){
	int page[MAX];
	int memo_size, page_size, num_pages;
	char ch='n';
	int logic_add, physical_add, frame_number, offset_num;
	printf("\n Enter the size of the memory");
	scanf("%d",&memo_size);
	printf("\n Enter the size of each page");
	scanf("%d", &page_size);
	num_pages = memo_size/page_size;
	for(int i=0;i<num_pages;i++)
	{page[i]=-1;}
	printf("\n Enter the details of the page table \n");
	printf("\npage number\t frame number\n--------\t--------");
	for(int i=0;i<num_pages;i++)
	{
		printf("\n\n%d\t\t",i);
		scanf("%d",&page[i]);
	}
	do
	{
		printf("\n\n Enter the logical address:");
		scanf("%d",&logic_add);
		if(page[logic_add]==-1)
		printf("\n\n The required page is not available in any frames");
		else{
		frame_number = logic_add / page_size;
		offset_num = logic_add % page_size;
		physical_add = (page[frame_number]*page_size)+offset_num;
		printf("\n Physical address is : %d", physical_add);
		printf("\n Do you want to do this again(y/n)?:");
		scanf("%d", &ch);
	      }
	  }
}

