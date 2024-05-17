//functions

//print the numbers using function in dsa

// #include<iostream>
// using namespace std;

// void printrange( int start ,int end){
//     while(start <= end){
//         cout<<start<<endl;
//         start ++;
//     }
// }
// int main(){
//     int start = 5;
//     int end = 10;
//     printrange(start ,end);
// }


// simple function in dsa :: error

// #include<iostream>
// using namespace std;
// int addnumbers(int a ,int b)
// {
//     int c = a + b;
//     return c ;
//     cout<<"the number is :"<< c <<endl;
// }
// int main(){
// addnumbers(5,6);
// }

//range function

// #include<iostream>
// using namespace std;
// void range(int start ,int end){
//     while(start<end-1){
//     cout<<start+1<<" " <<endl;
//     start++;
//     }
// }
// int main(){
//     range(10,20);
//     return 0;
// }

//print array


// #include<iostream>
// using namespace std;
// void sourbah(int a[],int n )
// {
//     for(int i= 0; i <n; i++)
//     {
//         cout<<"this is a array :"<<a[i]<<endl;
//     }
// }
// int main()
// {
//     int a[5]= {10,20,30,40,50};
//     int n = sizeof(a)/sizeof(a[0]);
//     cout<<"the number of elements are "<<n<<endl;
//     sourbah(a,n);
// }

// even or odd numbers using function


// #include<iostream>
// using namespace std;
// void tarun (int a ){
//     if(a%2==0){
//         cout<<"the element is even : "<<a<<endl;

//     }else{
//         cout<<"the element is odd : "<<a<<endl;
//     }
// }
// int main (){
//     int a ;
//     cout<<"enter a number for even or odd :"<<endl;
//     cin >>a;
//     tarun(a);
// }

//count even or odd numbers using function

// #include<iostream>
// using namespace std;
// void tarun (int a[],int n ){
// int k = 0;
// int j = 0;
//     for(int i = 0; i <n; i++){
//     if(a[i]%2==0){
//         k += 1;
//     }else{
//         j += 1;
//     }
//     }
//         cout<<"the elements are odd :"<<k<<endl;
//         cout<<"the even elements are :"<<j<<endl;
// }
// int main (){
//     int a[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(a)/sizeof(a[0]);
//     cout<<" the size is :"<<n<<endl;

//     tarun(a,n);
// }

//



