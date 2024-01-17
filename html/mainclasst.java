import java.io.IOException;
import java.util.*;
class mainclasst{
    public static void main(String[] args) throws IOException{
        try {
            Runtime rTime = Runtime.getRuntime();
            String url = "D:\\VS code\\html\\fra.html";
            String browser = "C:/Program Files/Internet Explorer/iexplore.exe ";
            Process pc = rTime.exec(browser + url);
            pc.waitFor();
         } catch (Exception ex) {
            ex.printStackTrace();
         }
    }
}