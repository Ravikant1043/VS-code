class MyThread extends Thread{
    public void run(){
        for(int i=0;i<10;i++){
            // System.out.println("Ravikant Sharma");
            System.out.println("Thread"+Thread.currentThread().getName());
        }
    }
}

class threading2{
    public static void main(String args[]){
        MyThread t1=new MyThread();
        MyThread t2=new MyThread();
        t1.start();
        t2.start();
        t1.setName(" Ravi");
        t2.setName(" Rahul");
        Thread.currentThread().setName("kant");
        for(int i=0;i<10;i++){
            // System.out.println("Rahulkant");
            System.out.println(Thread.currentThread().getName());
        }
    }
}