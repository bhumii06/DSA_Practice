#include<iostream>
using namespace std;
/*
int main()  
{
    
    
    int a = 123;
    cout<< a <<endl;

    char b ='v';
    cout << b <<endl ;

    bool bl = true;
    cout<< bl <<endl; 

    int size= sizeof(a);
    cout<< size <<endl;

    char z = 123456;
    cout<< z <<endl;

    int t = 5;
    int g = 6;
    bool j= t!=g;
    cout<< j <<endl;

int a;
int b;
cin>>a;
cin>>b;
if(a>b)
{cout<<a<<endl;}
else
{cout<<b<<endl;}


int a;
cin>>a;
if(a>0){
cout<<"positive";
}
else  {
    cout<<"negative" ;
}

char ch;
cin>>ch;
if(ch>='A'&& ch<='Z'){
    cout<<"uppercase";
}
else if(ch>='a'&& ch<='z'){
    cout<<"lowercase";
}
else if(ch>='0'&& ch<='9'){
    cout<<"numeric";

}


int n;
cin>>n;
int i=1;
int sum=0;
while(i<=n){
    sum=sum+i;
    i=i+1;
}
cout<<sum<<endl;

int n;
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<<"not prime"<<endl;
    }
    i=i+1;
}


int n=4;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


int n=5;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

int n=5;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;

}

int n=5;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;

    }
    cout<<endl;
    i=i+1;
}

int n=4;
int row=1;
while(row<=n){
    int col=1;
    while(col<=row){
        cout<<row;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}


int n=10;
int r=1;
int count=1;
while(r<=n){
    int c=1;
    while(c<=r){
        cout<<count;
        count=count+1;
        c=c+1;
    }
    cout<<endl;
    r=r+1;

}

int n=4;
int row=1;
while(row<=n){
    int col=1;
    while(col<=row){
        cout<<(row-col+1)<<" ";
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}


int n=3;
int r=1;
while(r<=n){
    int c=1;
    while(c<=n){
        char ch='A'+c-1;
        cout<<ch;
        c=c+1;
    }
    cout<<endl;
    r=r+1;
}

int n=3;
int r=1;
while(r<=n){
    int c=1;
    while(c<=n){
        char ch='A'+r-1;
        cout<<ch;
        c=c+1;
    }
    cout<<endl;
    r=r+1;
}

int n=3;
int r=1;
while(r<=n){
    
    int c=1;
    while(c<=n){
         char ch='A'+r+c-2 ;
        cout<<ch;
        
        ch=ch+1;
        c=c+1;
    }
    cout<<endl;
    r=r+1;
    
}

int n=4;
int i=1;
    
while(i<=n){
    int col=1;
    while(col<=i){
        char ch='A'+i+col-2;
        cout<<ch<<" ";
        ch=ch+1;
        col=col+1;
    }
    cout<<endl;
    i=i+1;
}

int n = 5;
int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
}
cout<<sum<<endl;

fibonacci series-
int n=10;
int a=0;
int b=1;
for(int i=1;i<=n;i++){
    int nn=a+b;
    cout<<nn<<" ";
    a=b;
    b=nn;

}


int n=7;
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"not prime";
        break;
    }
    else{
        cout<<"prime";
    }
    
}


int a=4;
int b=3;
char op='-';


switch(op){
    case '+':cout<<(a+b)<<endl;
            break;
    case '-':cout<<(a-b)<<endl;
            break;
    
}


 
int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;

    }
    return ans;
}
int main()  
{
int a=12;
int b=3;
int answer=power(a,b);
cout<<answer<<endl;
return 0;
}
 

//even-odd
int eo(int a){
    if(a%2==0){
    return 1;
    }
    else{
        return 2;
        }
}
int main(){
    int a=17;
    int ans=eo(a);
    cout<<ans<<endl;
    return 0;
} 


//prime
int pr(a){

for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }
        
}
return 1;
}
cccc
    int a=17;
    int ans=pr(a);
    cout<<ans<<endl;
    return 0;
} 

int main(){
    int number[15];
    cout<<number[2]<<endl;
    cout<<number[20]<<endl;
    cout<<"okay"<<endl;
    int ar[15]={1,2,3};
    cout<<ar[2]<<endl;

}
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,2,3,4,-5,7};
    reverse(arr,6);
    printarray(arr,6);
    return 0;
*/    
int binarysearch (int arr[],int size,int key){
    int start=0;
    int end= size-1;
    int mid =(start+end)/2; //mid = start +  (end-start/2)
    while (start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            start=mid+1;
        }  
        else{
            end=mid-1;
        } 
        mid =(start+end)/2;
     }
}
int main(){ 
    int even[6]={2,3,4,5,6,7};
    int index=binarysearch(even,6,4);
    cout<<index<<endl;
     

}
 
