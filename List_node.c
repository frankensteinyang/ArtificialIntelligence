#include <stdio.h>  
#include <stdlib.h>  
#include <string.h> 

struct  list_node  
{  
    int data ; //数据域，用于存储数据  
    struct list_node *next ; //指针，可以用来访问节点数据，也可以遍历，指向下一个节点  
};

// struct  list_node  
// {  
//     int data ;   
//     struct list_node *next ;  
// };  
  
typedef struct list_node list_single ;    
  
int main(void)  
{  
    list_single *node = NULL ;          //1、首先，当然是定义一个头指针  
    node = (list_single *)malloc(sizeof(list_single)); //2、然后分配内存空间  
    if(node == NULL){  
        printf("malloc fair!\n");  
    }  
    memset(node,0,sizeof(list_single)); //3、清一下  
    node->data = 100 ;                   //4、给链表节点的数据赋值  
    node->next = NULL ;                 //5、将链表的指针域指向空  
    printf("%d\n",node->data);  
    free(node);  
    return 0 ;  
}  

list_single *create_list_node(int data)  
{  
    list_single *node = NULL ;  
    node = (list_single *)malloc(sizeof(list_single));  
    if(node == NULL){  
        printf("malloc fair!\n");  
    }  
    memset(node,0,sizeof(list_single));  
    node->data = 100 ;  
    node->next = NULL ;  
    return node ;  
}  

