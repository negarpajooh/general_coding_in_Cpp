#include <iostream>

int main(){
   std::cout<<"enter x ?"<<"\n";
   double x{};
   std::cin>>x;
   std::cout<<"enter y ?"<<"\n";
   double y{};
   std::cin>>y;
   if (x>y)
   std::cout<<"x>y => "<<x<<">"<<y<<"\n";
   else if (x<y)
   std::cout<<"x<y => "<<x<<"<"<<y<<"\n";
   else 
   std::cout<<"x==y => "<<x<<"="<<y<<"\n";
   return 0;
}