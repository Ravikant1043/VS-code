class MyTh extends Thread{
    public void run(){
        String name="Ravikant";
        for(int i=0;i<name.length();i++){
            System.out.print(name.charAt(i)+" ");
            try{
                Thread.sleep(2000);
            }
            catch(InterruptedException as){
                System.out.println(as);
            }
        }
    }
}
public class Sleepdemo {
    public static void main(String args[]){
        MyTh t1=new MyTh();
        t1.start();
    }
}
