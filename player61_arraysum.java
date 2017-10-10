import java.util.*;
import java.io.*;
import java.lang.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        int n,i,j,x,flag=0;
        int a[]=new int[100];
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        x=s.nextInt();
        for(i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]+a[j]==x) {
                    System.out.println(a[i]+" "+a[j]); flag=1;break;
                }
            }if(flag==1) break;
        }
        if(flag==0)
        System.out.println("Elements not exist");
    }
}
