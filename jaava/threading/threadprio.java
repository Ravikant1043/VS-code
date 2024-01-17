// package threading;
class th extends Thread{
    public void run(){
        System.out.println("Hello  "+ Thread.currentThread().getPriority());
        for(int i=0;i<10;i++){
            System.out.println("child thread");
        }
    }
}
public class threadprio {
    public static void main(String args[]){
        th t1=new th();
        t1.setPriority(10);
        t1.start();
        for(int i=0;i<10;i++)System.out.println("Main class");
    }
}
