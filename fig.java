// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;
public class fig{
    //     int n;
    //     char ch;
    //     fig(int n,char ch,int x,int y){
    //         this.n=n;
    // this.ch=ch;
    // this.x=x;
    // this.y=y;
    //     }
    public void polygon(int n, char ch){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(ch);
            }
                System.out.println();
        }
    }
    public void polygon(int x, int y){
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                System.out.print("@");
            }
                System.out.println();
        }
    }
    public void polygon(){
        for(int i=1;i<=3;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
                System.out.println( );
        }
    }
    }
    class HelloWorld {
        public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            int x=sc.nextInt();
            int y=sc.nextInt();
            int n=sc.nextInt();
            char ch= sc.next().charAt(0);
      fig obj=new fig();
      obj.polygon(n,ch);
      obj.polygon(x,y);
      obj.polygon();
    }}