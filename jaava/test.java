import java.util.*;
class test{
    Scanner sc=new Scanner(System.in);
    int no_of_pages;
    double cost;
    String book_name,bid,author;
    public void getinfo(){
        bid=sc.nextLine();
        book_name=sc.nextLine();
        author=sc.nextLine();
        cost=sc.nextDouble();
        no_of_pages=sc.nextInt();
    }
    public void showbookinfo(){
        System.out.println(bid+" "+book_name+" "+author+" "+no_of_pages+" "+cost);
    }
    public static void main(String args[]){
        test t1=new test();
        t1.getinfo();
        t1.showbookinfo();
    }
}