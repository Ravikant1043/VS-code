// package threading;
class hello extends Thread{
    public void run(){
        int i=0;
        while(i<10){
        System.out.print("Hello  ");
        try{
            Thread.sleep(2000);
        }
        catch(InterruptedException as){
            System.out.println(as);
        }i++;}
    }
}
class goodmorning extends Thread{
    public void run(){
        int i=0;
        while(i<10){
        System.out.print("Goodmorning  ");
        try{
            Thread.sleep(3000);
        }
        catch(InterruptedException as){
            System.out.println(as);
        }i++;}
    }
}
class greetirng {
    public static void main(String args[]){
        hello t1=new hello();
        goodmorning t2=new goodmorning();
        int i=0;
        // while(i<100){
            t1.start();
            t2.start();
        //     i++;
        // }
    }
}
