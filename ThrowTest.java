
package exceptionhandling;

import static exceptionhandling.ThrowDemo.Demoproc;

class ThrowDemo{

static void Demoproc(){

try{

throw new NullPointerException("Demo is called");
    
}
catch(NullPointerException e){

    System.out.println("Caught inside Demoproc.");
    throw e;
}
}

}

public class ThrowTest {
    public static void main(String[] args) {
        try{
        
        Demoproc();
            
        }
        catch(NullPointerException e){
        
            System.out.println("Final Caught "+e);
        
        }
    }
}
