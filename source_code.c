#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct individual 
{
    char id[20];
    char name[20];
    char date[20];
     int no_con_post;
    char content[50][100];
    char birthday[20];
    struct individual * next  ;
};
struct business 
{
   char id[20];
    char name[20];
    char date[20];
    char content[50][100];
    int no_of_custm ;
     int no_con_post;
     char location[50];
    int owner ; 
    struct individual member ;
    struct business * next  ;
};
struct group 
{
    char id[20];
    char name[20];
    char date[20];
    char content[50][100];
    int no_con_post;
    int no_of_mem ;
    struct individual member ;
    int  no_of_business;
    struct business branch ;
};
struct organisation 
{
   char id[20];
    char name[20];
    char date[20];
    char content[50][100];
    char location[50];
     int no_of_custm ;
     int no_con_post;
    int owner ; 
    struct individual member ;  
};
void organisation_search(struct organisation *adr_of_og[],char id[],int no_of_og)                ///// business search
{   int k=0;
   
   
       for(int i=0;i<no_of_og;i++)
      {  int k=1;
         int l=strcmp(id,adr_of_og[i]->id) ;
         if(l==0)
         {
         printf("organisation id :%s\n",adr_of_og[i]->id);
         printf("organisation  name :%s\n",adr_of_og[i]->name);
         printf("organisation  account creation date :%s\n",adr_of_og[i]->date);
          printf("organisation  account creation location :%s\n",adr_of_og[i]->location);
           printf("organisation  account has no of customers :%d\n",adr_of_og[i]->no_of_custm);
         printf("organisation  no of content post :%d\n",adr_of_og[i]->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<adr_of_og[i]->no_con_post;j++)
         {
            printf("%s\n",adr_of_og[i]->content[j]);
            
         }
         printf("members in organisation are :\n");
         if(adr_of_og[i]->no_of_custm==0)
         {
            printf("no  one is present in organisation :\n");
         }
         else if(adr_of_og[i]->no_of_custm==1)
         {
            struct individual t;
            t = adr_of_og[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         }
         }
         else
         {    struct individual p;
            p = adr_of_og[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         }


              struct  individual *t;
            t = adr_of_og[i]->member.next ;
            for(int i=0;i<adr_of_og[i]->no_of_custm-1;i++)
            {   if(t==NULL){  break;                 }
                 printf("%d individual\n",i+1);
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t->no_con_post;j++)
         {
            printf("%s\n",t->content[j]);
            
         }
            t= t->next ;
            }
         }
         }
      }

   if(k==0)
   {
   printf("no organisation  present with that id:\n");
   return ;
   }
}
void business_search(struct business *adr_of_bs[],char id[],int no_of_bs)                ///// business search
{   int k=0;
       for(int i=0;i<no_of_bs;i++)
      {
         int l=strcmp(id,adr_of_bs[i]->id) ;
         if(l==0)
         { k=1;
         printf("business id :%s\n",adr_of_bs[i]->id);
         printf("business  name :%s\n",adr_of_bs[i]->name);
         printf("business  account creation date :%s\n",adr_of_bs[i]->date);
          printf("business  account creation location :%s\n",adr_of_bs[i]->location);
           printf("business  account has no of customers :%d\n",adr_of_bs[i]->no_of_custm);
         printf("business  no of content post :%d\n",adr_of_bs[i]->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<adr_of_bs[i]->no_con_post;j++)
         {
            printf("%s\n",adr_of_bs[i]->content[j]);
            
         }
         printf("members in business are :\n");
         if(adr_of_bs[i]->no_of_custm==0)
         {
            printf("no  one is present in the business :\n");
         }
         else if(adr_of_bs[i]->no_of_custm==1)
         {
            struct individual t;
            t = adr_of_bs[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         } 
         }
         else
         {  struct individual p;
            p = adr_of_bs[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         } 


              struct  individual *t;
            t = adr_of_bs[i]->member.next ;
            for(int j=0;j<adr_of_bs[i]->no_of_custm-1;j++)
            {   if(t==NULL){  break;                 }
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
            t= t->next ;
            }
         }
         }
      }
  if(k==0)
  {
   printf("no business present with that id:\n");
  }
   return ;
}
void group_search(struct group *adr_of_gr[],char id[],int no_of_gr)        ////////////group search
{ int c=0;
   if(no_of_gr>0)
   {
       for(int i=0;i<no_of_gr;i++)
      { 
         int l=strcmp(id,adr_of_gr[i]->id) ;
         if(l==0)
         {  c=1;
         printf("group id :%s\n",adr_of_gr[i]->id);
         printf("group name :%s\n",adr_of_gr[i]->name);
         printf("group account creation date :%s\n",adr_of_gr[i]->date);
         printf("group no of content post :%d\n",adr_of_gr[i]->no_con_post);
         printf("group  account has no of members :%d\n",adr_of_gr[i]->no_of_mem);
         printf("group  account has no of business :%d\n",adr_of_gr[i]->no_of_business);
         printf("the contents are:\n");
         for(int j=0;j<adr_of_gr[i]->no_con_post;j++)
         {
            printf("%s\n",adr_of_gr[i]->content[j]);
            
         }
         printf("members in group are :\n");
         if(adr_of_gr[i]->no_of_mem==0)
         {
            printf("no member is present in the group :\n");
         }
         else if(adr_of_gr[i]->no_of_mem==1)
         { 
            struct individual t;
            t = adr_of_gr[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         } 
         }
         else
         {    struct individual p;
            p = adr_of_gr[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         } 


              struct  individual *t;
            t = adr_of_gr[i]->member.next ;
            for(int j=0;i<adr_of_gr[i]->no_of_mem-1;j++)
            {   if(t==NULL){  break;                 }
                 printf("%d individual\n",i+1);
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
            t= t->next ;
            }
         }
          printf("business in group are :\n");
         if(adr_of_gr[i]->no_of_business==0)
         {
            printf("no  one is present in the group :\n");
         }
         else if(adr_of_gr[i]->no_of_business==1)
         {
            struct business t;
            t = adr_of_gr[i]->branch ;
             printf("1.business id :%s\n",t.id);
         printf("business name :%s\n",t.name);
         printf("business account creation date :%s\n",t.date);
         printf("business location :%s\n",t.location);
         printf("business no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t.no_con_post;k++)
         {
            printf("%s\n",t.content[k]);
            
         }
         }
         else
         {    struct business p;
            p = adr_of_gr[i]->branch ;
             printf("1.business id :%s\n",p.id);
         printf("business name :%s\n",p.name);
         printf("business account creation date :%s\n",p.date);
         printf("business location :%s\n",p.location);
         printf("business no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         }


              struct  business *t;
            t = adr_of_gr[i]->branch.next ;
            for(int j=0;j<adr_of_gr[i]->no_of_business-1;j++)
            {   if(t==NULL){  break;                 }
             printf("business id :%s\n",t->id);
         printf("business name :%s\n",t->name);
         printf("business account creation date :%s\n",t->date);
         printf("business birthday :%s\n",t->location); 
         printf("business no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
            t= t->next ;
            }
         }
         }
      } 
   }
      if(c==0)
      {
         printf("no such group found\n");
      }
   
   return ;
}
void create_individual(struct individual*ending_id)                                  ////// creating individual
{
    printf("enter the individuals id (which must be unique):\n");
    scanf("%s",ending_id->id);
     printf("enter the individuals name :\n");
      scanf("%s",ending_id->name);
     printf("enter the individuals created date  :\n");
     scanf("%s",ending_id->date); 
     printf("enter the individuals birthday  :\n");
     scanf("%s",ending_id->birthday); 
     printf("do you want to post something if yes(type 1) or No(type=0) :\n");
     int n;
     scanf("%d",&n);
     if(n==1)
     {   printf("enter the content\n");
        scanf("%s",ending_id->content[ending_id->no_con_post]);
        ending_id->no_con_post = ending_id->no_con_post + 1 ;
     }
     return ;
}
void individual_search(struct individual *start_id,char id[])               /////////// search of individual
{    struct individual *p;
     p=start_id ;
    while(1)
     {   if(p==NULL){      printf("no individual present with that id:\n");        return ;                                     }
     int o= strcmp(id,p->id) ;
     if(o==0)
     {
         printf("individuals id :%s\n",p->id);
         printf("individuals name :%s\n",p->name);
         printf("individuals account creation date :%s\n",p->date);
         printf("individuals birthday :%s\n",p->birthday);
         printf("individuals no of content post :%d\n",p->no_con_post);
         printf("the contents are:\n");
         for(int i=0;i<p->no_con_post;i++)
         {
            printf("%s\n",p->content[i]);
            
         }
        break ;   return ;   
     }
     
        p=p->next ;
        
     }
    return  ;
}
void business_search_gr(struct group *start_gr,struct business*adr_of_bs[],char id[],int no_of_bs)        ///// business search for group
{   
   
      for(int i=0;i<no_of_bs;i++)
      {
         int l=strcmp(id,adr_of_bs[i]->id) ;
         if(l==0)
         {
           if(start_gr->no_of_business==0 )
       {
          start_gr->branch= *adr_of_bs[i] ;
          start_gr->branch.next=NULL ;
          start_gr->no_of_business= start_gr->no_of_business+1; 
          printf("\nbusiness is added successfully\n")  ;  
       }
       else{  struct business *t;
         if(start_gr->no_of_business==1) 
         {   t=start_gr->branch.next ;
             t->next=(struct business *) malloc (sizeof(struct business ));*t->next=*adr_of_bs[i] ; t->next->next=NULL; printf("business is added successfully\n")  ;
             start_gr->no_of_business= start_gr->no_of_business+1; 

         }
        else{   t=start_gr->branch.next ;
          while(1)
              {   
                  if(t->next==NULL){ break;     }
                  t=t->next ;
              }  
                t->next=(struct business *) malloc (sizeof(struct business ));*t->next=*adr_of_bs[i] ; t->next->next=NULL; printf("business is added successfully\n")  ;
                start_gr->no_of_business= start_gr->no_of_business+1;

               }

       } 
        break;
         }
      }

   
    return  ;
}
void adding_business_gr(struct group *start_gr,struct business t)                 ///// adding business into the group
{   t.next=NULL ;
    if(start_gr->no_of_business==0)
{ 
  start_gr->branch =t;
  start_gr->branch.next= NULL;
  start_gr->no_of_business=start_gr->no_of_business+1 ;
}
else{ 
       if(start_gr->branch.next==NULL)
       {
         start_gr->branch.next=(struct business *) malloc (sizeof(struct business ));
         *start_gr->branch.next=t ;
         start_gr->branch.next->next=NULL ;
       start_gr->no_of_business=start_gr->no_of_business+1 ;
       }
      else{   struct business *g ;
              g= start_gr->branch.next ;
             while(1)
             {
                if(g->next==NULL) 
                {
                   g->next=(struct business *) malloc (sizeof(struct business ));
                   *g->next=t;
                   g->next->next=NULL ;
                   start_gr->no_of_business=start_gr->no_of_business+1 ;
                  break;
                }  
                else{
                       g= g->next ;
                }
             }
      } 
}

    return;
}
void individual_search_og(struct organisation *start_og,struct individual *start_id,char id[])   /// individual search for organisation
{ struct individual *k;
   k=start_id ;
    
    while(1)
   {
     int o= strcmp(id,k->id) ;
     if(o==0)
     {
       if(start_og->no_of_custm==0 )
       {
          start_og->member= *start_id ;
          start_og->member.next=NULL ;
           start_og->no_of_custm= start_og->no_of_custm+1; 
          printf("individual is added successfully\n")  ;

       }
       else{  struct individual *t;
         if(start_og->no_of_custm==1)
          {   
           t =&start_og->member; t->next=(struct individual *) malloc (sizeof(struct individual ));*t->next=*k ; t->next->next=NULL; printf("individual is added successfully\n")  ;
             start_og->no_of_custm= start_og->no_of_custm+1;   
         }

        else{   t=start_og->member.next ;
          while(1)
              {   
                  if(t->next==NULL){ break;     }
                  t=t->next ;
              }
                t->next=(struct individual *) malloc (sizeof(struct individual ));*t->next=*k ; t->next->next=NULL; printf("individual is added successfully\n")  ;
                start_og->no_of_custm= start_og->no_of_custm+1;  
              }
            
       }  
       break;    
     }
     else 
     {
       k=k->next ;
     }
    } 
    
    return  ;
}
void adding_individuals_og(struct organisation * start_og,struct individual t)   /// adding individuals into the organisation
{  t.next=NULL ;
   if(start_og->no_of_custm==0)
{ 
  start_og->member =t;
  start_og->member.next= NULL;
  start_og->no_of_custm=start_og->no_of_custm+1 ;
}
else{ 
       if(start_og->member.next==NULL)
       {
         start_og->member.next= (struct individual *) malloc (sizeof(struct individual ));
         *start_og->member.next =t ;
        start_og->member.next->next=NULL ;
       start_og->no_of_custm=start_og->no_of_custm+1 ;
       }
      else{   struct individual *g ;
              g= start_og->member.next ;
             while(1)
             {
                if(g->next==NULL) 
                {
                   g->next=(struct individual *) malloc (sizeof(struct individual ));
                    *g->next=t ;
                    g->next->next=NULL ;
                   start_og->no_of_custm=start_og->no_of_custm+1 ;
                   free(g);break;
                }  
                else{
                       g= g->next ;
                }
             }
      } 
    }
    return;
}
void create_organisation(struct organisation *start_og)     /////  creating organisation
{
    printf("enter the organisation id (which must be unique):\n");
    scanf("%s",start_og->id);
     printf("enter the organisation name :\n");
      scanf("%s",start_og->name);
     printf("enter the organisation created date  :\n");
     scanf("%s",start_og->date); 
     printf("enter 2D location of organisation\n");
      scanf("%s",start_og->location); 
      printf("do you want to post something if yes(type 1) or No(type=0) :\n");
     int n;
     scanf("%d",&n);
     if(n==1)
     {  printf("enter the content\n");
        scanf("%s",start_og->content[start_og->no_con_post]);
        start_og->no_con_post = start_og->no_con_post + 1 ;
     }
     return ;
}
void individual_search_bs(struct business *start_bs,struct individual *start_id,char id[])  /// individual search for business
{ struct individual *k;
   k=start_id ;
 while(1)
   { if(k==NULL){   printf("no sush individual present with that id");   return ;          }
     int o= strcmp(id,k->id) ;
     if(o==0)
     {
       if(start_bs->no_of_custm==0 )
       {
          start_bs->member= *k ;
          start_bs->member.next=NULL ;
          start_bs->no_of_custm= start_bs->no_of_custm+1;
          printf("individual is added successfully\n")  ;   
       }
       else{   struct individual *t;
         if(start_bs->no_of_custm==1)
          {  
            t =&start_bs->member; t->next=(struct individual *) malloc (sizeof(struct individual ));*t->next=*k ; t->next->next=NULL; printf("individual is added successfully\n") ;
          start_bs->no_of_custm= start_bs->no_of_custm+1;
          }

        else{   t=start_bs->member.next ;
          while(1)
              {   
                  if(t->next==NULL){ break;     }
                  t=t->next ;
              } t->next=(struct individual *) malloc (sizeof(struct individual ));*t->next=*k ; t->next->next=NULL; printf("individual is added successfully\n")  ;
                start_bs->no_of_custm= start_bs->no_of_custm+1;  }
            
       }  
       break;    
     }
     else 
     {
        k=k->next ;
     }
    } 
    
    return  ;
}
void  create_business(struct business *start_bs)     /// creating business 
{
   printf("enter the business id (which must be unique):\n");
    scanf("%s",start_bs->id);
     printf("enter the business name :\n");
      scanf("%s",start_bs->name);
     printf("enter the business created date  :\n");
     scanf("%s",start_bs->date); 
     printf("enter 2D location of business\n");
      scanf("%s",start_bs->location); 
      printf("do you want to post something if yes(type 1) or No(type=0) :\n");
     int n;
     scanf("%d",&n);
     if(n==1)
     {  printf("enter the content\n");
        scanf("%s",start_bs->content[start_bs->no_con_post]);
        start_bs->no_con_post = start_bs->no_con_post + 1 ;
     }
     return ;
}
void  adding_individuals_bs(struct business * start_bs,struct individual t)  /// adding individauls into the business 
{    t.next=NULL;
    if(start_bs->no_of_custm==0)
{  
  start_bs->member =t;
  start_bs->member.next= NULL;
  start_bs->no_of_custm=start_bs->no_of_custm+1 ;
}
else{   
    
       if(start_bs->no_of_custm==1)
       { 
         start_bs->member.next=(struct individual *) malloc (sizeof(struct individual ));
         *start_bs->member.next=t;
         start_bs->member.next->next=NULL ;
       start_bs->no_of_custm=start_bs->no_of_custm+1 ;
       }
      else{   struct individual *g ;
              g= start_bs->member.next ;
             while(1)
             {
                if(g->next==NULL) 
                {
                   g->next=(struct individual *) malloc (sizeof(struct individual ));
                   *g->next=t;
                   g->next->next=NULL ;
                   start_bs->no_of_custm=start_bs->no_of_custm+1 ;
                   break;
                }  
                else{
                       g= g->next ;
                }
             }
      } 
    }
    return;
}
void individual_search_gr(struct group *start_gr,struct individual *start_id,char id[])   /// individual search for group
{ 
   struct individual *k;
   k=start_id ;
    while(1)
     {  
       if(k==NULL){   printf("no sush individual present with that id");   return ;          }
     int o= strcmp(id,k->id) ;
     if(o==0)
     {
       if(start_gr->no_of_mem==0 )
       {   
          start_gr->member= *k ;
          start_gr->member.next= NULL;
          start_gr->no_of_mem= start_gr->no_of_mem+1; 
          printf("individual is added successfully\n")  ; 
         
       }
       else{  
         if(start_gr->no_of_mem==1) {   start_gr->member.next=(struct individual *) malloc (sizeof(struct individual ));*start_gr->member.next=*k ; start_gr->member.next->next=NULL; printf("individual is added successfully\n")  ;
             start_gr->no_of_mem= start_gr->no_of_mem+1;     }

        else{ struct individual *t; 
           t=start_gr->member.next ;
          while(1)
              {   
                  if(t->next==NULL){ break;     }
                  t=t->next ;
              }t->next=(struct individual *) malloc (sizeof(struct individual ));*t->next=*k ; t->next->next=NULL; printf("individual is added successfully\n")  ;
                start_gr->no_of_mem= start_gr->no_of_mem+1; }
            
       } 
        break ;     
     }
     else 
     {
        k=k->next ;
     }
     }
   
    return  ;
}
void adding_individuals_gr(struct group *start_gr,struct individual t)    //// adding individuals into the group
{  
     if(start_gr->no_of_mem==0)
{  
  start_gr->member =t;
  t.next =NULL;
  start_gr->member.next= NULL;
  start_gr->no_of_mem=start_gr->no_of_mem+1 ;
  
}
else{  
 
       if(start_gr->no_of_mem==1)
       {  
         start_gr->member.next=(struct individual *) malloc (sizeof(struct individual ));
         t.next=NULL ;
          *start_gr->member.next=t ;
        start_gr->member.next->next=NULL ;
       start_gr->no_of_mem=start_gr->no_of_mem+1 ;
         
       }

      else{   
         struct individual *g ;
              g= start_gr->member.next ;
             while(1)
             {   
             
                if(g->next==NULL) 
                { 
                   g->next=(struct individual *) malloc (sizeof(struct individual ));
                   t.next=NULL ;
                    *g->next=t;
                    g->next->next=NULL ;
                   start_gr->no_of_mem=start_gr->no_of_mem+1 ;
                     break;  
                }  
                       g = g->next ;
                
             }
      } 
}

    return;
}
void create_group(struct group  *start_gr)    //// creating groups
{
     printf("enter the group id (which must be unique):\n");
    scanf("%s",start_gr->id);
     printf("enter the group name :\n");
      scanf("%s",start_gr->name);
     printf("enter the group created date  :\n");
     scanf("%s",start_gr->date); 
      printf("do you want to post something if yes(type 1) or No(type=0) :\n");
     int n;
     scanf("%d",&n);
     if(n==1)
     {  printf("enter the content\n");
        scanf("%s",start_gr->content[start_gr->no_con_post]);
        start_gr->no_con_post = start_gr->no_con_post + 1 ;
     }
     return ;
}
int main ()                                                                     //////// main Function ///////////////
{
    struct individual *start_id;
    start_id=NULL;
    struct individual *ending_id;
    ending_id=NULL;
    int no_of_id=0,no_of_gr=0,no_of_bs=0,no_of_og=0;
    struct group *adr_of_gr[100];
    adr_of_gr[0]=NULL ;
    struct business *adr_of_bs[100];
     adr_of_bs[0]=NULL ;
    struct organisation *adr_of_og[100];
     adr_of_og[0]=NULL ;
      start_id= (struct individual *) malloc (sizeof(struct individual ));

    while( 1)
    {  
    struct group *start_gr;
    start_gr=NULL ;
    struct business *start_bs;
    start_bs=NULL ;
    struct organisation *start_og;
    start_og=NULL ;
   
        int n;
        printf("welcome to social network\n");
        printf("1.create an indivial account\n");
        printf("2.create a group\n");
         printf("3.create an business account\n");
         printf("4.create an organisation\n") ;
         printf("5.search for individual account that already exit to know his other details \n") ;
         printf("6.search for group account that already exit to know his other details \n") ;
         printf("7.search for business account that already exit to know his other details \n") ;
         printf("8.search for organisation account that already exit to know his other details \n") ;
          printf("9.search for account that already exit, with respect to content posted by it \n") ;
          printf("10.the accounts which are present in groups and business with the given id\n");
          printf("11.add content in an idividual \n");
          printf("12.add content in an group \n");
          printf("13.add content in an business \n");
          printf("14.add content in organisation\n");
          printf("15.delete an individual\n");
         printf("16.delete an group\n");
         printf("17.delete an business\n");
         printf("18.delete an organisation\n");
         printf("19.add individuals in to group\n");
           printf("20.add individuals in to business\n");
           printf("21.add individuals in organisation\n");
           printf("22.1-hop\n");
        scanf("%d",&n);
 if(n==1)
        {
            if(no_of_id==0)
            { 
                ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
            else { 
                 ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
           
        }
if(n==2)                                                                                                ////222222
        {  
           adr_of_gr[no_of_gr] = (struct group *) malloc (sizeof(struct group ));
              start_gr= adr_of_gr[no_of_gr];
               adr_of_gr[no_of_gr]->no_of_mem=0;
              no_of_gr = no_of_gr+1 ;
              start_gr->no_con_post=0;
              start_gr->no_of_business=0;
              create_group(start_gr);
               while (1)
        {
               printf("want to add any member or business in group if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    printf("enter your choice\n");
        printf("1.if it is a member\n");
     printf("2.if it is a business\n");
     int k;
      scanf("%d",&k);
        if(k==1)
        {  printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            if(no_of_id==0)
            {
               ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id); 
               
            }
            else { 
               ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
            adding_individuals_gr(start_gr,*ending_id);

            }
        if(l==1)
        {

             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in group if yes(type 1) or No(type=0) :\n ");
    }
    else {
         
   
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_gr(start_gr,start_id,id);
   
    }
        }
    
        }
        if(k==2)
        {
             printf("enter your choice\n");
    printf("1.if the  business already exists in the individuals list \n");
    printf("2.if the new  business need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {  adr_of_bs[no_of_bs] = (struct business *) malloc (sizeof(struct business ));
              start_bs=adr_of_bs[no_of_bs] ;
              start_bs->no_of_custm=0;
              no_of_bs = no_of_bs+1 ;
              start_bs->no_con_post=0;
              start_bs->next=NULL ;
              create_business(start_bs);

               while (1)
        {
               printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    
      printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            
            if(no_of_id==0)
            {
              ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
                
            }
            else {
            
                ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
            adding_individuals_bs(start_bs,*ending_id);
            }
        if(l==1)
        {
            printf("enter id : \n") ;
             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
    }
    else { char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_bs(start_bs,start_id,id);
   
   
    }
        }
     }
        }    
               
       adding_business_gr(start_gr,*adr_of_bs[no_of_bs-1]);
            }
        if(l==1)
        {
             printf("enter your choice\n");
            printf("you wanted to search business on the bases of id  \n") ;

             if(adr_of_bs[0]==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in group if yes(type 1) or No(type=0) :\n ");
    }
    else {
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     business_search_gr(start_gr,adr_of_bs,id,no_of_bs);

    
    
    }
        }
    
        
        }
     }
        }
        }
if(n==3)                                                                                    //////333333333
        {
             adr_of_bs[no_of_bs] = (struct business *) malloc (sizeof(struct business ));
              start_bs= adr_of_bs[no_of_bs];
              start_bs->no_of_custm=0;
              no_of_bs = no_of_bs+1 ;
              start_bs->no_con_post=0;
              start_bs->next=NULL ;
              create_business(start_bs);


               while (1)
        {
               printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    
      printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            struct individual t;
            if(no_of_id==0)
            {
             ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
               
            }
            else {
            
                ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
            adding_individuals_bs(start_bs,*ending_id);
            }
        if(l==1)
        {
             printf("enter your choice\n");

             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
    }
    else {

     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_bs(start_bs,start_id,id);
       }
        }
     }
        }
        }
if(n==4)                                                                   //////4444444444
        {
            adr_of_og[no_of_og] = (struct organisation *) malloc (sizeof(struct organisation ));
              start_og= adr_of_og[no_of_og];
              start_og->no_of_custm=0;
              start_og->no_con_post=0;
              no_of_og = no_of_og+1 ;
              
              create_organisation(start_og);
               while (1)
        {
               printf("want to add any member in organisation if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    
      printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            struct individual t;
            if(no_of_id==0)
            {
               ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);  
               
               
            }
            else {
                     ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
               
            }
            adding_individuals_og(start_og,*ending_id);
            }
        if(l==1)
        {

             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
    }
    else {
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_og(start_og,start_id,id);

    
   
    }
        }
     }
        } 
        }
if(n==5)
         {
             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
    }
    else { 
      printf("enter the id :\n");
     char id[20];
    
     scanf("%s",id);
     individual_search(start_id,id);
    }
      
         }                                                                           ////// 55555555
if(n==6)
    {  printf("enter your choice\n");
          
          
          if(adr_of_gr[0]==NULL)
          {
            printf("no groups are added\n");
          }
 else { 
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     group_search(adr_of_gr,id,no_of_gr);
    }
     }                                                                                      ///////666666
if(n==7)
 {
          if(adr_of_bs[0]==NULL)
          {
            printf("no business are added\n");
          }
      else {
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     business_search(adr_of_bs,id,no_of_bs);
   
    }
    

 }
if(n==8)
 {
          if(adr_of_og[0]==NULL)
          {
            printf("no organisations are added\n");
          }
      else {
   
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     organisation_search(adr_of_og,id,no_of_og);
   
    }
    

 }
if(n==9)
 {
    printf("enter the post u need to search\n");
    char st[100];
   scanf("%s",st);
   struct individual *start_id2 ;
   start_id2=start_id ;
   if(no_of_id>0)
   {
      while(1)
      { if(start_id2==NULL){    break;                                    }
         for(int i=0;i<start_id2->no_con_post;i++)
         {
           int l=strcmp(st,start_id2->content[i]);
           if(l==0)
           {
              printf("individuals id :%s\n",start_id2->id);
         printf("individuals name :%s\n",start_id2->name);
         printf("individuals account creation date :%s\n",start_id2->date);
         printf("individuals birthday :%s\n",start_id2->birthday);
         printf("individuals no of content post :%d\n",start_id2->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<start_id2->no_con_post;j++)
         {
            printf("%s\n",start_id2->content[j]);
            
         }
           }
         }
        start_id2=start_id2->next ;
      } 
   }
   if(no_of_gr>0)
   {
     for(int i=0;i<no_of_gr;i++)
     {
        struct group * t;
        t=adr_of_gr[i] ;
        if(t==NULL) { break ;                        }
       for(int j=0;j<t->no_con_post;j++)
       {
         int l=strcmp(st,t->content[j]);
           if(l==0)
           {
              printf("group id :%s\n",t->id);
         printf("group name :%s\n",t->name);
         printf("group account creation date :%s\n",t->date);
         printf("group no of content post :%d\n",t->no_con_post);
         printf("group  account has no of members :%d\n",t->no_of_mem);
         printf("group  account has no of business :%d\n",t->no_of_business);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
           }
       }
     }
   }
   
  if(no_of_bs>0)
   {
     for(int i=0;i<no_of_bs;i++)
     {
        struct business * t;
        t=adr_of_bs[i] ;
        if(t==NULL) { break ;                        }
       for(int j=0;j<t->no_con_post;j++)
       {
         int l=strcmp(st,t->content[j]);
           if(l==0)
           {
              printf("business id :%s\n",t->id);
         printf("business name :%s\n",t->name);
         printf("business account creation date :%s\n",t->date);
         printf("business no of content post :%d\n",t->no_con_post);
         printf("business  account has no of members :%d\n",t->no_of_custm);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
           }
       }
     }
   }

   if(no_of_og>=1)
   {
     for(int i=0;i<no_of_og;i++)
     {
        struct organisation * t;
        t=adr_of_og[i] ;
        if(t==NULL) { break ;                        }
       for(int j=0;j<t->no_con_post;j++)
       {
         int l=strcmp(st,t->content[j]);
           if(l==0)
           {
              printf("organisation id :%s\n",t->id);
         printf("organisation name :%s\n",t->name);
         printf("organisation account creation date :%s\n",t->date);
         printf("organisations no of content post :%d\n",t->no_con_post);
         printf(" organisations  account has no of members :%d\n",t->no_of_custm);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
           }
       }
     }
   }

 }
if(n==10)
 {
       printf("enter the id:\n");
            char str[100];
            scanf("%s",str);
            if(no_of_gr>0)
            {
               for(int i=0;i<no_of_gr;i++)
               {
                  if(adr_of_gr[i]->no_of_mem >0)
                  {
                     struct individual * p;
                     p=&adr_of_gr[i]->member ;
                     for(int j=0;j<adr_of_gr[i]->no_of_mem;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(str,p->id);
                        if(l==0)
                        {
                           printf("this id individual is in this group of id :%s\n",adr_of_gr[i]->id);
                           printf("group id :%s\n",adr_of_gr[i]->id);
         printf("group name :%s\n",adr_of_gr[i]->name);
         printf("group account creation date :%s\n",adr_of_gr[i]->date);
         printf("group no of content post :%d\n",adr_of_gr[i]->no_con_post);
         printf("group  account has no of members :%d\n",adr_of_gr[i]->no_of_mem);
         printf("group  account has no of business :%d\n",adr_of_gr[i]->no_of_business);
         printf("the contents are:\n");
         for(int h=0;h<adr_of_gr[i]->no_con_post;h++)
         {
            printf("%s\n",adr_of_gr[i]->content[h]);
            
         }
         printf("members in group are :\n");
         if(adr_of_gr[i]->no_of_mem==0)
         {
            printf("no member is present in the group :\n");
         }
         else if(adr_of_gr[i]->no_of_mem==1)
         { 
            struct individual t;
            t = adr_of_gr[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         } 
         }
         else
         {    struct individual p;
            p = adr_of_gr[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         } 


              struct  individual *t;
            t = adr_of_gr[i]->member.next ;
            for(int j=0;i<adr_of_gr[i]->no_of_mem-1;j++)
            {   if(t==NULL){  break;                 }
                 printf("%d individual\n",i+1);
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
            t= t->next ;
            }
         }   break;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }

            if(no_of_bs>0)
            {
               for(int i=0;i<no_of_bs;i++)
               {
                  if(adr_of_bs[i]->no_of_custm >0)
                  {
                     struct individual * p;
                     p=&adr_of_bs[i]->member ;
                     for(int j=0;j<adr_of_bs[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(str,p->id);
                        if(l==0)
                        {
                           printf("this id individual is in this business of id :%s\n",adr_of_bs[i]->id);
                           printf("business id :%s\n",adr_of_bs[i]->id);
         printf("business  name :%s\n",adr_of_bs[i]->name);
         printf("business  account creation date :%s\n",adr_of_bs[i]->date);
          printf("business  account creation location :%s\n",adr_of_bs[i]->location);
           printf("business  account has no of customers :%d\n",adr_of_bs[i]->no_of_custm);
         printf("business  no of content post :%d\n",adr_of_bs[i]->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<adr_of_bs[i]->no_con_post;j++)
         {
            printf("%s\n",adr_of_bs[i]->content[j]);
            
         }
         printf("members in business are :\n");
         if(adr_of_bs[i]->no_of_custm==0)
         {
            printf("no  one is present in the business :\n");
         }
         else if(adr_of_bs[i]->no_of_custm==1)
         {
            struct individual t;
            t = adr_of_bs[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         } 
         }
         else
         {  struct individual p;
            p = adr_of_bs[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         } 


              struct  individual *t;
            t = adr_of_bs[i]->member.next ;
            for(int j=0;j<adr_of_bs[i]->no_of_custm-1;j++)
            {   if(t==NULL){  break;                 }
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
            t= t->next ;
            }
         }
              break;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }
             if(no_of_og>0)
            {
               for(int i=0;i<no_of_og;i++)
               {
                  if(adr_of_og[i]->no_of_custm >0)
                  {
                     struct individual * p;
                     p=&adr_of_og[i]->member ;
                     for(int j=0;j<adr_of_og[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(str,p->id);
                        if(l==0)
                        {
                           printf("this id individual is in this organisation of id :%s\n",adr_of_og[i]->id);
                           printf("organisation id :%s\n",adr_of_og[i]->id);
         printf("organisation  name :%s\n",adr_of_og[i]->name);
         printf("organisation  account creation date :%s\n",adr_of_og[i]->date);
          printf("organisation  account creation location :%s\n",adr_of_og[i]->location);
           printf("organisation  account has no of customers :%d\n",adr_of_og[i]->no_of_custm);
         printf("organisation  no of content post :%d\n",adr_of_og[i]->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<adr_of_og[i]->no_con_post;j++)
         {
            printf("%s\n",adr_of_og[i]->content[j]);
            
         }
         printf("members in organisation are :\n");
         if(adr_of_og[i]->no_of_custm==0)
         {
            printf("no  one is present in organisation :\n");
         }
         else if(adr_of_og[i]->no_of_custm==1)
         {
            struct individual t;
            t = adr_of_og[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         }
         }
         else
         {    struct individual p;
            p = adr_of_og[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         }


              struct  individual *t;
            t = adr_of_og[i]->member.next ;
            for(int i=0;i<adr_of_og[i]->no_of_custm-1;i++)
            {   if(t==NULL){  break;                 }
                 printf("%d individual\n",i+1);
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t->no_con_post;j++)
         {
            printf("%s\n",t->content[j]);
            
         }
            t= t->next ;
            }
         }   break;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }
    
           
 }
 if(n==11)
 { 
   printf("enter the id : \n  ");
    char id[100];
    scanf("%s",id);
    char st[100];
    printf("enter the content\n");
    scanf("%s",st);
   if(no_of_id>0)
   {  int k=0;
   struct individual *p;
   p=start_id ;
     while(1)
      {  if(p==NULL){   break; }
        int  l=strcmp(id,p->id);
         if(l==0)
         {  k=1;
             
            strcpy(p->content[p->no_con_post],st);
             p->no_con_post= p->no_con_post+1;
            break;
         }
         p =p->next;
      }
      if(k==0)
      {
         printf("no such idividual present with that id \n");
      }
      if(k==1)
      {
          if(no_of_gr>0)
            {
               for(int i=0;i<no_of_gr;i++)
               {
                  if(adr_of_gr[i]->no_of_mem >0)
                  {
                     struct individual * p;
                     p=&adr_of_gr[i]->member ;
                     for(int j=0;j<adr_of_gr[i]->no_of_mem;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(id,p->id);
                        if(l==0)
                        {  
                          strcpy(p->content[p->no_con_post],st);
                           p->no_con_post= p->no_con_post+1;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }

            if(no_of_bs>0)
            {
               for(int i=0;i<no_of_bs;i++)
               {
                  if(adr_of_bs[i]->no_of_custm >0)
                  {
                     struct individual * p;
                     p=&adr_of_bs[i]->member ;
                     for(int j=0;j<adr_of_bs[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(id,p->id);
                        if(l==0)
                        {
                         
                           strcpy(p->content[p->no_con_post],st);
                           p->no_con_post= p->no_con_post+1;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }
             if(no_of_og>0)
            {
               for(int i=0;i<no_of_og;i++)
               {
                  if(adr_of_og[i]->no_of_custm >0)
                  {
                     struct individual * p;
                     p=&adr_of_og[i]->member ;
                     for(int j=0;i<adr_of_og[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(id,p->id);
                        if(l==0)
                        {
                           
                          strcpy(p->content[p->no_con_post],st);
                           p->no_con_post= p->no_con_post+1;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }
      }

   }
   else { printf("no such idividual present ") ; }

 }
 if(n==12)
 {  printf("enter the id : \n  ");
    char id[100];
    scanf("%s",id);
    char st[100];
    printf("enter the content");
    scanf("%s",st);
   if(no_of_gr>0)
   {  int k=0;
      for(int i=0;i<no_of_gr;i++)
      {
        int  l=strcmp(id,adr_of_gr[i]->id);
         if(l==0)
         {  k=1;
            
          strcpy(adr_of_gr[i]->content[adr_of_gr[i]->no_con_post],st);
             adr_of_gr[i]->no_con_post= adr_of_gr[i]->no_con_post+1;
            break;
         }
      }
      if(k==0)
      {
         printf("no such group present wtuh that id \n");
      }
   }
   else { printf("no such group present \n"); }
 } 
 if(n==13)
 {
     printf("enter the id : \n  ");
    char id[100];
    scanf("%s",id);
    char st[100];
    printf("enter the content");
    scanf("%s",st);
   if(no_of_bs>0)
   {  int k=0;
      for(int i=0;i<no_of_bs;i++)
      {
        int  l=strcmp(id,adr_of_bs[i]->id);
         if(l==0)
         {  k=1;
            strcpy(adr_of_bs[i]->content[adr_of_bs[i]->no_con_post], st) ;
             adr_of_bs[i]->no_con_post= adr_of_bs[i]->no_con_post+1;
            break;
         }
      }
      if(k==0)
      {
         printf("no such group present wtuh that id \n");
      }
      if(k==1)
      { 
         char str[50];
          strcpy(str,id);
         if(no_of_gr>0)
            {
               for(int i=0;i<no_of_gr;i++)
               {
                  if(adr_of_gr[i]->no_of_business>0)
                  {   struct business *p;
                      p= &adr_of_gr[i]->branch;
                     for(int j=0;j<adr_of_gr[i]->no_of_business;i++)
                     {
                        int  l=strcmp(str,p->id);
                         if(l==0)
                         {
                            strcpy(p->content[p->no_con_post],st) ;
                             break;
                         }
                     }
                  }
                 
               }
            } 
      }
      
   }
    else { printf("no such group present \n");}
           
 }
 if(n==14)
 {
      printf("enter the id : \n  ");
    char id[100];
    scanf("%s",id);
   if(no_of_og>0)
   {  int k=0;
      for(int i=0;i<no_of_og;i++)
      {
        int  l=strcmp(id,adr_of_og[i]->id);
         if(l==0)
         {  k=1;
             printf("enter the content");
            scanf("%s",adr_of_og[i]->content[adr_of_og[i]->no_con_post]);
             adr_of_og[i]->no_con_post= adr_of_og[i]->no_con_post+1;
            break;
         }
      }
      if(k==0)
      {
         printf("no such group present wtuh that id \n");
      }
   }
    else { printf("no such group present \n");}
 }                                                                                        
if(n==15)
{
   char str[100];
   printf("enter the id\n ");
   scanf("%s",str);
    struct individual *t;
     t=start_id ;
     if(no_of_id>0)
     {  int l=0;
     int z=strcmp(str,t->id);
     if(z==0)
     {
         l=1;
           start_id=start_id->next ;
           no_of_id=no_of_id-1;
          
        
     }
        else{ 
         struct individual *g;
                     g=t;  
                     struct individual * p;
                     p= t->next;
                      
                     for(int j=0;j<no_of_id-1;j++)
                     {  if(p==NULL){       break ;              }
                        int z=strcmp(str,p->id);
                        if(z==0)
                        {  
                        l=1;
                           g->next=p->next ;
                           no_of_id=no_of_id-1;
                           break ;
                        } 
                        g=p;
                         p=p->next ;
                     }

        }   
        
     
  if(l==1)
  {
   if(no_of_gr>0)
            {
               for(int i=0;i<no_of_gr;i++)
               {
                  if(adr_of_gr[i]->no_of_mem >0)
                  { 
                     int b=strcmp(str,adr_of_gr[i]->member.id);
                     if(b==0)
                     {   
                       if(adr_of_gr[i]->no_of_mem==1)
                       {
                            adr_of_gr[i]->no_of_mem=adr_of_gr[i]->no_of_mem-1;
                          
                       }
                       else{
                         adr_of_gr[i]->member=*adr_of_gr[i]->member.next ;
                         adr_of_gr[i]->no_of_mem=adr_of_gr[i]->no_of_mem-1;
                         
                       }
                     }
                     else
                     { struct individual *g;
                     g=&adr_of_gr[i]->member;
                     struct individual * p;
                     p=adr_of_gr[i]->member.next ;
                     for(int j=0;j<adr_of_gr[i]->no_of_mem;j++)
                     {  if(p==NULL){       break ;              }
                        int z=strcmp(str,p->id);
                        if(z==0)
                        {
                           g->next=p->next ;
                           adr_of_gr[i]->no_of_mem=adr_of_gr[i]->no_of_mem-1;
                           break;
                        } 
                        g=p;
                         p=p->next ;
                     }
                     }
                  }
               }
            }

            if(no_of_bs>0)
            {
               for(int i=0;i<no_of_bs;i++)
               {
                  if(adr_of_bs[i]->no_of_custm >0)
                  {int b=strcmp(adr_of_bs[i]->member.id,str);
                     if(b==0)
                     {   if(adr_of_bs[i]->no_of_custm==1)
                       {
                            adr_of_bs[i]->no_of_custm=adr_of_bs[i]->no_of_custm-1;
                       }
                        
                         adr_of_bs[i]->member=*adr_of_bs[i]->member.next ;
                         adr_of_bs[i]->no_of_custm=adr_of_bs[i]->no_of_custm-1;
                     }
                     else
                  {
                    struct individual *g;
                     g=&adr_of_bs[i]->member;
                     struct individual * p;
                     p=adr_of_bs[i]->member.next ;
                     for(int j=0;j<adr_of_bs[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int z=strcmp(str,p->id);
                        if(z==0)
                        {
                          g->next=p->next ;
                          adr_of_bs[i]->no_of_custm=adr_of_bs[i]->no_of_custm-1;
                           break ;
                        } 
                        g=p ;
                         p=p->next ;
                     }
                  }
                  }
               }
            }
             if(no_of_og>0)
            {
               for(int i=0;i<no_of_og;i++)
               {
                  if(adr_of_og[i]->no_of_custm >0)
                  { int b=strcmp(adr_of_og[i]->member.id,str);
                     if(b==0)
                     { 
                        if(adr_of_og[i]->no_of_custm==1)
                       {
                            adr_of_og[i]->no_of_custm=adr_of_og[i]->no_of_custm-1;
                       }
                         adr_of_og[i]->member=*adr_of_og[i]->member.next ;
                         adr_of_og[i]->no_of_custm=adr_of_og[i]->no_of_custm-1;
                     }
                     else
                     { struct individual *g;
                     g=&adr_of_og[i]->member;
                     struct individual * p;
                     p=adr_of_og[i]->member.next ;
                     for(int j=0;j<adr_of_og[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int z=strcmp(str,p->id);
                        if(z==0)
                        {
                            g->next=p->next ;
                            adr_of_og[i]->no_of_custm=adr_of_og[i]->no_of_custm-1;
                            break;
                        } 
                        g=p;
                         p=p->next ;
                     }
                     }
                  }
               }
            }
     }

     else 
     {
      printf("no individual present with id\n");
     }

}
 else 
     {
      printf("no individual present with id\n");
     }
}
if(n==16)
{
   char str[100];
   printf("enter the id \n");
   scanf("%s",str);
   int c=0;
     
       for(int i=0;i<no_of_gr;i++)
      {  
         int l=strcmp(str,adr_of_gr[i]->id) ;
         if(l==0)
         {   c=1;
            if(i==no_of_gr-1)
         {
             no_of_gr=no_of_gr-1;
         }
         else{
            for(int j=i;j<no_of_gr-1;j++)
            {
                adr_of_gr[j]=adr_of_gr[j+1];
                no_of_gr=no_of_gr-1;
                 printf("%d",no_of_gr);
            }
         }
         }
       
   
       } 
         if(c==0)
      {
         printf("no such group found\n");
      }                                                                        
 }
if(n==17)
{ char str[100];
   printf("enter the id \n");
   scanf("%s",str);
   int c=0;
   
       for(int i=0;i<no_of_bs;i++)
      { 
         int l=strcmp(str,adr_of_bs[i]->id) ;
         if(l==0)
         {  if(i==no_of_bs-1)
         {
             no_of_bs=no_of_bs-1;
         }
            c=1;
            for(int j=i;j<no_of_bs-1;j++)
            {
                adr_of_bs[j]=adr_of_bs[j+1];
                no_of_bs=no_of_bs-1;
            }
         }
         if(c==0)
      {
         printf("no such organisation found\n");
      }
     
       }  
        if(c==1)
      {
         if(no_of_gr>0)
            {
               for(int i=0;i<no_of_gr;i++)
               {
                  if(adr_of_gr[i]->no_of_business >0)
                  {
                     int b=strcmp(adr_of_gr[i]->branch.id,str);
                     if(b==0)
                     {   
                        if(adr_of_gr[i]->no_of_business==1)
                       {
                            adr_of_gr[i]->no_of_business=adr_of_gr[i]->no_of_business-1;
                          
                       }
                         adr_of_gr[i]->branch=*adr_of_gr[i]->branch.next ;
                          adr_of_gr[i]->no_of_business=adr_of_gr[i]->no_of_business-1;
                     }
                     else
                     { struct business *g;
                     g=&adr_of_gr[i]->branch;
                     struct business * p;
                     p=adr_of_gr[i]->branch.next ;
                     for(int j=0;j<adr_of_gr[i]->no_of_business;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(str,p->id);
                        if(l==0)
                        {
                           g->next=p->next ;
                           adr_of_gr[i]->no_of_business=adr_of_gr[i]->no_of_business-1;
                           break;
                        } 
                        g=p;
                         p=p->next ;
                     }
                     }
                  }
               }
            }

      }
   
   
}
if(n==18)
{
   char str[100];
   printf("enter the id \n");
   scanf("%s",str);
   int c=0;
   
       for(int i=0;i<no_of_og;i++)
      { 
         int l=strcmp(str,adr_of_og[i]->id) ;
         if(l==0)
         {    c=1;
             if(i==no_of_og-1)
         { printf("ok\n");
            no_of_og=no_of_og-1;
         }

           else
           {
            for(int j=i;j<no_of_og-1;j++)
            {
                adr_of_og[j]=adr_of_og[j+1];
                 no_of_og=no_of_og-1;
            }
           }
         }
         if(c==0)
      {
         printf("no such organisation found\n");
      }
   
       }    
}
if(n==19)
{   printf("enter the id : \n  ");
    char id[100];
    scanf("%s",id);
   int c=0;
   if(no_of_gr>0)
   {
       for(int i=0;i<no_of_gr;i++)
      { 
         int l=strcmp(id,adr_of_gr[i]->id) ;
         if(l==0)
         {  c=1;
            start_gr=adr_of_gr[i];
              while (1)
        {
               printf("want to add any member or business in group if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    printf("enter your choice\n");
        printf("1.if it is a member\n");
     printf("2.if it is a business\n");
     int k;
      scanf("%d",&k);
        if(k==1)
        {  printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            if(no_of_id==0)
            {
               ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id); 
               
            }
            else { 
               ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
            adding_individuals_gr(start_gr,*ending_id);

            }
        if(l==1)
        {

             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in group if yes(type 1) or No(type=0) :\n ");
    }
    else {
         
   
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_gr(start_gr,start_id,id);
   
    }
        }
    
        }
        if(k==2)
        {
             printf("enter your choice\n");
    printf("1.if the  business already exists in the individuals list \n");
    printf("2.if the new  business need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {  adr_of_bs[no_of_bs] = (struct business *) malloc (sizeof(struct business ));
              start_bs=adr_of_bs[no_of_bs] ;
              start_bs->no_of_custm=0;
              no_of_bs = no_of_bs+1 ;
              start_bs->no_con_post=0;
              start_bs->next=NULL ;
              create_business(start_bs);

               while (1)
        {
               printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    
      printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            
            if(no_of_id==0)
            {
              ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
                
            }
            else {
            
                ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
            adding_individuals_bs(start_bs,*ending_id);
            }
        if(l==1)
        {
            printf("enter id : \n") ;
             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
    }
    else { char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_bs(start_bs,start_id,id);
   
   
    }
        }
     }
        }    
               
       adding_business_gr(start_gr,*adr_of_bs[no_of_bs-1]);
            }
        if(l==1)
        {
             printf("enter your choice\n");
            printf("you wanted to search business on the bases of id  \n") ;

             if(adr_of_bs[0]==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in group if yes(type 1) or No(type=0) :\n ");
    }
    else {
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     business_search_gr(start_gr,adr_of_bs,id,no_of_bs);

    
    
    }
        }
    
        
        }
     }
        } 
         }
    break;  } 
   }
      if(c==0)
      {
         printf("no such group found\n");
      }

}
if(n==20)
{
    printf("enter the id : \n  ");
    char id[100];
    scanf("%s",id);
   int c=0;
   if(no_of_bs>0)
   {
       for(int i=0;i<no_of_bs;i++)
      { 
         int l=strcmp(id,adr_of_bs[i]->id) ;
         if(l==0)
         {  c=1;
           while (1)
        {
               printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    
      printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            struct individual t;
            if(no_of_id==0)
            {
             ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
               
            }
            else {
            
                ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
            }
            adding_individuals_bs(start_bs,*ending_id);
            }
        if(l==1)
        {
             printf("enter your choice\n");

             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
    }
    else {

     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_bs(start_bs,start_id,id);
       }
        }
     }
        }
             
      break;   }
   }
   }
   if(c==0)
      {
         printf("no such business found\n");
      }
}
if(n==21)
{
    printf("enter the id : \n  ");
    char id[100];
    scanf("%s",id);
   int c=0;
   if(no_of_og>0)
   {
       for(int i=0;i<no_of_og;i++)
      { 
         int l=strcmp(id,adr_of_og[i]->id) ;
         if(l==0)
         {  c=1;
              while (1)
        {
               printf("want to add any member in organisation if yes(type 1) or No(type=0) :\n ");
     int p;
     scanf("%d",&p);
     if(p==0){  break ;    }
     if(p==1)
     {    
      printf("enter your choice\n");
    printf("1.if the  individual already exists in the individuals list \n");
    printf("2.if the new  individual need to create \n");
            int l;
            scanf("%d",&l);
            if(l==2)
            {
            struct individual t;
            if(no_of_id==0)
            {
               ending_id=start_id;
                ending_id->next=NULL;
                ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);  
               
               
            }
            else {
                     ending_id->next= (struct individual *) malloc (sizeof(struct individual ));
                 ending_id=  ending_id->next ;
                 ending_id->next=NULL ;
                 ending_id->no_con_post=0;
                no_of_id=no_of_id +1 ;
                create_individual(ending_id);
               
            }
            adding_individuals_og(start_og,*ending_id);
            }
        if(l==1)
        {

             if(start_id==NULL)
    {
         printf("there are no individuals are present you need to enter a new one");
         printf("want to add any member in business if yes(type 1) or No(type=0) :\n ");
    }
    else {
     char id[20];
     printf("enter the id :\n");
     scanf("%s",id);
     individual_search_og(start_og,start_id,id);

    
   
    }
        }
     }
        }  
      break;   }
   }
   }
   if(c==0)
      {
         printf("no such organisation found\n");
      }
}
if(n==22)
{
    printf("enter the id:\n");
            char str[100];
            scanf("%s",str);
            if(no_of_gr>0)
            {
               for(int i=0;i<no_of_gr;i++)
               {
                  if(adr_of_gr[i]->no_of_mem >0)
                  {
                     struct individual * p;
                     p=&adr_of_gr[i]->member ;
                     for(int j=0;j<adr_of_gr[i]->no_of_mem;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(str,p->id);
                        if(l==0)
                        {
                           printf("this id individual is in this group of id :%s\n",adr_of_gr[i]->id);
                           printf("group id :%s\n",adr_of_gr[i]->id);
         printf("group name :%s\n",adr_of_gr[i]->name);
         printf("group account creation date :%s\n",adr_of_gr[i]->date);
         printf("group no of content post :%d\n",adr_of_gr[i]->no_con_post);
         printf("group  account has no of members :%d\n",adr_of_gr[i]->no_of_mem);
         printf("group  account has no of business :%d\n",adr_of_gr[i]->no_of_business);
         printf("the contents are:\n");
         for(int h=0;h<adr_of_gr[i]->no_con_post;h++)
         {
            printf("%s\n",adr_of_gr[i]->content[h]);
            
         }
         printf("members in group are :\n");
         if(adr_of_gr[i]->no_of_mem==0)
         {
            printf("no member is present in the group :\n");
         }
         else if(adr_of_gr[i]->no_of_mem==1)
         { 
            struct individual t;
            t = adr_of_gr[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         } 
         }
         else
         {    struct individual p;
            p = adr_of_gr[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         } 


              struct  individual *t;
            t = adr_of_gr[i]->member.next ;
            for(int j=0;i<adr_of_gr[i]->no_of_mem-1;j++)
            {   if(t==NULL){  break;                 }
                 printf("%d individual\n",i+1);
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
            t= t->next ;
            }
         }   break;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }

            if(no_of_bs>0)
            {
               for(int i=0;i<no_of_bs;i++)
               {
                  if(adr_of_bs[i]->no_of_custm >0)
                  {
                     struct individual * p;
                     p=&adr_of_bs[i]->member ;
                     for(int j=0;j<adr_of_bs[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(str,p->id);
                        if(l==0)
                        {
                           printf("this id individual is in this business of id :%s\n",adr_of_bs[i]->id);
                           printf("business id :%s\n",adr_of_bs[i]->id);
         printf("business  name :%s\n",adr_of_bs[i]->name);
         printf("business  account creation date :%s\n",adr_of_bs[i]->date);
          printf("business  account creation location :%s\n",adr_of_bs[i]->location);
           printf("business  account has no of customers :%d\n",adr_of_bs[i]->no_of_custm);
         printf("business  no of content post :%d\n",adr_of_bs[i]->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<adr_of_bs[i]->no_con_post;j++)
         {
            printf("%s\n",adr_of_bs[i]->content[j]);
            
         }
         printf("members in business are :\n");
         if(adr_of_bs[i]->no_of_custm==0)
         {
            printf("no  one is present in the business :\n");
         }
         else if(adr_of_bs[i]->no_of_custm==1)
         {
            struct individual t;
            t = adr_of_bs[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         } 
         }
         else
         {  struct individual p;
            p = adr_of_bs[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         } 


              struct  individual *t;
            t = adr_of_bs[i]->member.next ;
            for(int j=0;j<adr_of_bs[i]->no_of_custm-1;j++)
            {   if(t==NULL){  break;                 }
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int k=0;k<t->no_con_post;k++)
         {
            printf("%s\n",t->content[k]);
            
         }
            t= t->next ;
            }
         }
              break;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }
             if(no_of_og>0)
            {
               for(int i=0;i<no_of_og;i++)
               {
                  if(adr_of_og[i]->no_of_custm >0)
                  {
                     struct individual * p;
                     p=&adr_of_og[i]->member ;
                     for(int j=0;j<adr_of_og[i]->no_of_custm;j++)
                     {  if(p==NULL){       break ;              }
                        int l=strcmp(str,p->id);
                        if(l==0)
                        {
                           printf("this id individual is in this organisation of id :%s\n",adr_of_og[i]->id);
                           printf("organisation id :%s\n",adr_of_og[i]->id);
         printf("organisation  name :%s\n",adr_of_og[i]->name);
         printf("organisation  account creation date :%s\n",adr_of_og[i]->date);
          printf("organisation  account creation location :%s\n",adr_of_og[i]->location);
           printf("organisation  account has no of customers :%d\n",adr_of_og[i]->no_of_custm);
         printf("organisation  no of content post :%d\n",adr_of_og[i]->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<adr_of_og[i]->no_con_post;j++)
         {
            printf("%s\n",adr_of_og[i]->content[j]);
            
         }
         printf("members in organisation are :\n");
         if(adr_of_og[i]->no_of_custm==0)
         {
            printf("no  one is present in organisation :\n");
         }
         else if(adr_of_og[i]->no_of_custm==1)
         {
            struct individual t;
            t = adr_of_og[i]->member ;
             printf("individuals id :%s\n",t.id);
         printf("individuals name :%s\n",t.name);
         printf("individuals account creation date :%s\n",t.date);
         printf("individuals birthday :%s\n",t.birthday);
         printf("individuals no of content post :%d\n",t.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t.no_con_post;j++)
         {
            printf("%s\n",t.content[j]);
            
         }
         }
         else
         {    struct individual p;
            p = adr_of_og[i]->member ;
             printf("individuals id :%s\n",p.id);
         printf("individuals name :%s\n",p.name);
         printf("individuals account creation date :%s\n",p.date);
         printf("individuals birthday :%s\n",p.birthday);
         printf("individuals no of content post :%d\n",p.no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<p.no_con_post;j++)
         {
            printf("%s\n",p.content[j]);
            
         }


              struct  individual *t;
            t = adr_of_og[i]->member.next ;
            for(int i=0;i<adr_of_og[i]->no_of_custm-1;i++)
            {   if(t==NULL){  break;                 }
                 printf("%d individual\n",i+1);
             printf("individuals id :%s\n",t->id);
         printf("individuals name :%s\n",t->name);
         printf("individuals account creation date :%s\n",t->date);
         printf("individuals birthday :%s\n",t->birthday);
         printf("individuals no of content post :%d\n",t->no_con_post);
         printf("the contents are:\n");
         for(int j=0;j<t->no_con_post;j++)
         {
            printf("%s\n",t->content[j]);
            
         }
            t= t->next ;
            }
         }   break;
                        } 
                         p=p->next ;
                     }
                  }
               }
            }
    
           
}
if(n==0)
{
   break ;
}
    } 

    return 0;
}







         