// switch case

/*


if else ---->  you can 
*/


// import "dart:html";
import "dart:io";
void main() {
  int? a=int.parse(stdin.readLineSync()!);
  // print(a==null?a:a.split(""));
  // print(a.split(""));
  switch (a) {
    case 0:print("Zero"); 
    case 1:print("One"); 
    case 2:print("Two"); 
    case 3:print("Three"); 
    case 4:print("Four"); 
    case 5:print("Five"); 
    case 6:print("Six"); 
    case 7:print("Seven"); 
    case 8:print("Eight"); 
    case 9:print("nine"); 
    default: print("Invalid number"); 
  }

}
