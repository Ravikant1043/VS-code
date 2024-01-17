// package threading;
class Thread1 extends Thread{
    public void run(){
        for(int i=10;i>0;i--){
            System.out.println("Child1 "+i);
        }
    }
}
class Thread2 extends Thread{
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("Child2 "+i);
        }
    }
}
public class threading3 {
    public static void main(String args[]){
        Thread1 t1=new Thread1();
        Thread2 t2=new Thread2();
        t1.start();
        t2.start();
        for(int i=1;i<=10;i++){
            System.out.println("Main Thread "+i*i);
        }
    }
}
