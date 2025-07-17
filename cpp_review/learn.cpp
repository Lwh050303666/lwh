// // // // // // // #include <iostream>
// // // // // // // #include <memory>  // 需要包含memory头文件
// // // // // // // using namespace std;

// // // // // // // // shared_ptr<int>ptr1(new int(10));//shared_ptr 当计数减到0时自动释放
// // // // // // // // unique_ptr<int>ptr2(new int(20));//unique_ptr 当指针的作用域被销毁就自动释放
    

// // // // // // // // try{

// // // // // // // // }
// // // // // // // // catch(const runtime_error &e){

// // // // // // // // }
// // // // // // // // class my_exception:public runtime_error{
// // // // // // // //     public:  my_exception(const char * msg ):runtime_error(msg){};
    

// // // // // // // // }
// // // // // // // // //You must doing something,bro.
// // // // // // // // //Just do it.To do the right thing

// // // // // // // // []()->return {}
// // // // // // // // int removeDuplicates(int *nums,int numsSize){
// // // // // // // //     if(nums==nullptr ||numsSize<=0)  return 0;
// // // // // // // //     int slow=0,fast=1;
// // // // // // // //     while(fast<numsSize){
// // // // // // // //         if(nums[slow]<nums[fast]){
// // // // // // // //             nums[slow+1]=nums[fast];
// // // // // // // //             fast++,slow++;   continue;
// // // // // // // //         }
// // // // // // // //         fast++;
// // // // // // // //     }
// // // // // // // //     return  slow+1;
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // //     int nums[8]={0,0,1,1,2,2};
// // // // // // // //     removeDuplicates(nums,6);
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // int removeElement(int * nums,int numsSize,int val){
// // // // // // // //     int cnt=0;
// // // // // // // //     for(int i=0;i<numsSize;i++){
// // // // // // // //         if(nums[i]==val){
// // // // // // // //             cnt++;
// // // // // // // //             for(int j=i;j<numsSize-1;j++)  //从前往后  往前挪一位
// // // // // // // // {
// // // // // // // //     nums[j]=nums[j+1];
// // // // // // // // }
// // // // // // // //         }
// // // // // // // //     }int ans=numsSize-cnt;  
// // // // // // // //     return ans ;
// // // // // // // // }
// // // // // // // // int removeElement(int *nums,int numsSize,int val){
// // // // // // // //     int slow=0;
// // // // // // // //     for(int fast=0;fast<numsSize;fast++){
// // // // // // // //         if(nums[fast]!=val){
// // // // // // // //             nums[slow]=nums[fast];
// // // // // // // //             slow++;
// // // // // // // //         }
// // // // // // // //     }
// // // // // // // //     return slow;
// // // // // // // //
// // // // // // // // void merge(int *nums1,int nums1Size,int m,int * nums2,int nums2Size,int n){
// // // // // // // //     int end1=m-1,end2=n-1;
// // // // // // // //     int dst=m+n-1;
// // // // // // // //     while(end1>=0&&end2>=0){
// // // // // // // //         if(nums1[end1]>nums2[end2]){
// // // // // // // //             nums1[dst--]=nums1[end1--];
// // // // // // // //         }
// // // // // // // //         else {
// // // // // // // //             nums1[dst--]=nums2[end2--];
// // // // // // // //         }

// // // // // // // //     }
// // // // // // // //     while(end2>=0)  nums1[dst--]=nums2[end2--];

// // // // // // // // }
// // // // // // // #pragma once
// // // // // // // #include<stdio.h>
// // // // // // // #include<stdlib.h>
// // // // // // // #include<assert.h>

// // // // // // // typedef int SLDataType;
// // // // // // // #define N 100000
// // // // // // // //
// // // // // // // //静态顺序表 -- 开少了不够用  开多了浪费
// // // // // // // //struct SeqList{
// // // // // // //     SLDataType a[N];
// // // // // // //   int size;
// // // // // // // };
// // // // // // // typedef int SLDataType;
// // // // // // // #define INIT_CAPACITY 4

// // // // // // // typedef struct SeqList{
// // // // // // // SLDataType *a;
// // // // // // // int size;
// // // // // // // int capacity;
// // // // // // // }SL;
// // // // // // // //增删查改
// // // // // // // void SLInit(SL * ps);
// // // // // // // void SLDestroy(SL * ps);
// // // // // // // void SLCheckCapacity(SL* ps);

// // // // // // // void SLPushBack(SL* ps, SLDataType x);
// // // // // // // void SLPopBack(SL* ps);
// // // // // // // void SLPushFront(SL* ps, SLDataType x);
// // // // // // // void SLPopFront(SL* ps);
// // // // // // // void SLInsert(SL* ps, int pos, SLDataType x);
// // // // // // // void SLErase(SL* ps, int pos);
// // // // // // // int SLFind(SL* ps, SLDataType x);


// // // // // // // #include<SeqList.h>
// // // // // // // void SLInit(SL * ps){
// // // // // // //   assert(ps);
// // // // // // //  ps->a= (SLDataType *)malloc(sizeof(SLDataType)*INIT_CAPACITY);
// // // // // // // if(ps->a==nullptr){
// // // // // // //   perror("malloc fail");
// // // // // // //   return;
// // // // // // // }
// // // // // // // ps->size=0;
// // // // // // // ps->capacity=INIT_CAPACITY;
// // // // // // // }

// // // // // // // void SLDestroy(SL* ps){
// // // // // // //   assert(ps);
// // // // // // //   ps->a=nullptr;
// // // // // // //   ps->size=ps->capacity=0;
// // // // // // // }

// // // // // // // void SLPrint(SL * ps){
// // // // // // //   assert(ps);
// // // // // // //   for(int i=0;i<ps->size;++i){
// // // // // // //     printf("%d",ps->a[i]);
// // // // // // //   }
// // // // // // //   printf("\n");
// // // // // // // }

// // // // // // // void SLCheckCapacity(SL *ps){
// // // // // // //   assert(ps);
// // // // // // //   if(ps->size==ps->capacity){
// // // // // // //     SLDataType * tmp=(SLDataType *)realloc(ps,sizeof(SLDataType)*2*capacity)
// // // // // // //     if(tmp==nullptr){
// // // // // // //       perror("malloc fail");
// // // // // // //       return;
// // // // // // //     }
// // // // // // //     ps->a=tmp;
// // // // // // //     ps->capacity=2*capacity;
// // // // // // //   }

// // // // // // // }

// // // // // // // void SLPushBack(SL * ps,SLDataType x){
// // // // // // //   assert(ps);
// // // // // // //   if(ps->size==ps->capacity)  
// // // // // // //   SLCheckCapacity(ps);
// // // // // // //   if(ps->size==ps->capacity)  return;
// // // // // // //   ps->a[size]=x;
// // // // // // //   SLInsert(ps,ps->size,x);
// // // // // // // }

// // // // // // // void SLPopBack(SL * ps){
// // // // // // //   assert(ps);
// // // // // // //   if(ps->size==0)  return;
// // // // // // //   ps->size--;
// // // // // // // }

// // // // // // // void SLPushFront(SL *ps,SLDataType x){
// // // // // // //   assert(ps);  //从后往前向后挪一位
// // // // // // //   SLCheckCapacity(ps);
// // // // // // // if(ps->size==0) {
// // // // // // //   ps->a[0]=x;  ps->size++;
// // // // // // // }
// // // // // // // else {
// // // // // // //   int end=ps->size-1;
// // // // // // //    while(end>=0){
// // // // // // //     ps->a[end+1]=ps->a[end];
// // // // // // //    }
// // // // // // //    ps->a[0]=x;
// // // // // // // }
// // // // // // // }

// // // // // // // void SLInsert(SL * ps,int pos,SLDataType x){
// // // // // // // assert(ps);
// // // // // // // assert(pos>=0&&pos<=ps->size-1);
// // // // // // // SLCheckCapacity(ps);    //从后往前向后挪一位
// // // // // // // int end=ps->size-1;
// // // // // // // while(end>=pos){
// // // // // // //   ps->a[end+1]==ps->a[end];
// // // // // // // }
// // // // // // // ps->a[pos]=x;
// // // // // // // ps->size++;
// // // // // // // }

// // // // // // // void SLErase(SL *ps,int pos){//从前往后依次往前挪一位
// // // // // // //       assert(ps);
      
// // // // // // // }

// // // // // // // int SLFind(SL * ps,SLDataType x){
// // // // // // // assert(ps);
// // // // // // // for(int i=0,i<ps->size;i++){
// // // // // // //   if(ps->a[i]==x)  return i;
// // // // // // // }
// // // // // // // return -1;

// // // // // // // }

// // // // // // //单链表
// // // // // // #pragma once
// // // // // // #include<stdio.h>
// // // // // // #include<stdlib.h>
// // // // // // #include<assert.h>
// // // // // // typedef int SLTDataType;
// // // // // // typedef struct SListNode{
// // // // // //   SLTDataType data;
// // // // // //   struct SlistNode * next;

// // // // // // }SLTNode;

// // // // // // void SLTprint(SLTNode *phead);

// // // // // // void SLTPushBack(SLTNode ** pphead)

// // // // // // SLTNode * Find(SLTNode *phead,SLTDataType x){
// // // // // // while(phead->next!=nullptr){
// // // // // //   if(phead->data!=x)  phead=phead->next;
// // // // // //   else  return  phead;
// // // // // // }
// // // // // // return nullptr;
// // // // // // }
// // // // // // ListNode * mergeTwoLists(struct ListNode * list1,struct ListNode  )

// // // // // // ListNode * partition(ListNode *phead,int x){
// // // // // //     struct ListNode *gGuard,*gTail,*lGuard,*lTail;
// // // // // //         gGuard=gTail=(struct ListNode *)malloc(sizeof(struct ListNode ));
// // // // // //         lGuard=lTail=(struct ListNode *)malloc(sizeof(struct ListNode ));
// // // // // //            struct ListNode * cur=phead;
// // // // // //            while(cur)
// // // // // //            {  if(cur->data<x){
// // // // // //             lTail->next=cur;
// // // // // //             lTail=lTail->next;}
// // // // // //             else {
// // // // // //                 gTail->next=cur;
// // // // // //                 gTail=gTail->next;
// // // // // //             }
// // // // // //              cur=cur->next;
// // // // // //            }
// // // // // //             lTail->next=gGuard->next;
// // // // // //             gTail->next=nullptr;
// // // // // //             phead=lGuard->next;
// // // // // //             free(gGuard);
// // // // // //             free(lGuard);
// // // // // //             return phead;
// // // // // // }


// // // // // // #pragma once
// // // // // // #include<stdio.h>
// // // // // // #include<stdlib.h>
// // // // // // #include<assert.h>
// // // // // // #include<stdbool.h>
// // // // // // typedef int LTDataType;
// // // // // // typedef struct ListNode{
// // // // // //     struct ListNode * next;
// // // // // //     struct ListNode * prev;
// // // // // //     LTDataType data;
// // // // // // }LTNode;
// // // // // // LTNode LTInit(LTNode * lt);

// // // // // // void LTPushBack(LTNode * phead,LTDataType x){
// // // // // //     assert(phead);
// // // // // //     LTNode * newnode=BuyListNode(x);
// // // // // //     LTNode * tail=phead->prev;
// // // // // // }



// // // // // //复制带随机指针的链表
// // // // // typedef struct {
// // // // //     ST pushst;
// // // // //     ST popst;
// // // // // }MyQueue;
// // // // // MyQueue * myQueueCreate(){
// // // // //     MyQueue * obj=(MyQueue *)malloc(sizeof(Myqueue));
// // // // //     if(obj==nullptr){
// // // // //         perror("malloc fail");
// // // // //         return nullptr;
// // // // //     }
// // // // //     STInit(&obj->pushest);
// // // // //     STInit(&obj->popst);
// // // // //     return obj;
// // // // // }

// // // // // void myQueuePush(MyQueue * obj,int x)


// // // // typedef int DataType;
// // // // struct TreeNode{
// // // //     struct TreeNode * firstChild1;//第一个孩子节点
// // // //     struct TreeNode * pNextBrother;//指向其中下一个兄弟节点
// // // //     DataType data;//节点中的数据域
// // // // }


// // // #pragma once
// // // #include<stdio.h>
// // // #include<stdlib.h>
// // // #include<stdbool.h>
// // // #include<assert.h>

// // // typedef int QDataType;
// // // typedef struct QueueNode{
// // // struct QueueNode * next;
// // // QDataType data;
// // // }QNode;

// // // typedef struct Queue{
// // //     QNode * head;
// // //     QNode * tail;
// // //     int  size;
// // // }Queue;

// // // void QueueInit(Queue * pq);


// // void AdjustDown(HPDataType *a,int n,int parent){
// // int child=parent*2+1;
// // while(child<n){
// //     if(child+1<=n&&a[child+1]>a[child])
// //     child++;
// //     if(a[child]>a[child+1]){
// //         swap(&a[child],&a[parent]);
// //         parent=child;
// //         child=parent*2+1;
// //     }
// //     else break;
// // }
// // }

// // void AdjustUp(HPDataType *a,int child){
// //     int parent=(child-1)/2;
// //     while(child>0){
// //         if(a[child]>a[parent]){
// //             swap(&a[])
// //         }


// //     }
// // }

// #pragma once
// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>
// #include<assert.h>
// typedef int HPDataType;
// typedef struct Heap{
// HPDataType * a;
// int size;
// int capacity;
// }HP;

// void HeapInit(HP * php);
// void HeapDestroy(HP * php);
// void HeapPush(HP * php,HPDataType x);
// void HeapPop(HP * php);
// HPDataType HeapTop(HP *pop);
// bool HeapEmpty();
// int HeapSize(HP *php);
// void AdjustUp( )


//TOP-K问题



int TreeSize(BTNode * root){
return root==nullptr?0:TreeSize(root->left)+TreeSize(root->right)+1;
}

int TreeHeight(BTNode * root){
    if(root==nullptr)   return 0;
    return TreeHeight(root->left)>TreeHeight(root->right)?TreeHeight(root->left)+1:TreeHeight(root->right)+1;
}


