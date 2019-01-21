
package exceptionhandling;

import static exceptionhandling.ThrowsDemo.ThrowOne;

class ThrowsDemo {

static void ThrowOne()throws IllegalAccessException{

    System.out.println("Inside the throws func.");
    throw new IllegalAccessException("Demo");
}

}
public class ThrowsTest {
    public static void main(String[] args) {
        
    
    try{

        ThrowOne();
    
}
  catch(IllegalAccessException t){
      System.out.println("Caught "+t);
  }
    }
}
