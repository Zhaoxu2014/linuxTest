void main(){
   int pid1=fork();
   printf(“**1**\n”);
   int pid2=fork();
   printf(“**2**\n”);
   if(pid1==0){int pid3=fork();printf(“**3**\n”);}
   else prin
