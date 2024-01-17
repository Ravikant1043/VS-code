interface Database{
    void getconnect();
    void close();
    void showResult();
    void execute();
}
class SQL implements Database{
    public void getconnect(){
        System.out.println("SQL is getting connected");
    }
    public void close(){
        System.out.println("closing the SQL server");
    }
    public void showResult(){
        System.out.println("Printing the results of SQL queries");
    }
    public void execute(){
        System.out.println("Executing the queries through SQl server");
    }
}
class interr {
    public static void main(String args[]){
        Database s;
        s=new SQL();
        s.getconnect();
        s.execute();
        s.showResult();
        s.close();
    }
}
