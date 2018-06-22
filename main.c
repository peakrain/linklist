#include"LinkList.h"
#include<stdio.h>
int main()
{
	list_t list=list_create();
	list_insert(list,(void*)1);
	list_insert(list,(void*)2);
	list_insert(list,(void*)3);
	printf("%d\n",list_length(list));	
	int ebuf=list_delete(list,2);
	if(ebuf==EOF)
		printf("delete element failed!\n");
	printf("%d\n",list_length(list));	
	void *e=list_getElem(list,2);
	if(e!=NULL)
		printf("%d\n",(int *)e);
	else
		printf("this element doesn't exite!\n");
	return 0;
}
