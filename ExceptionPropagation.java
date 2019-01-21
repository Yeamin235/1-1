
package exceptionhandling;


public class ExceptionPropagation {
    
   // class ExProTest{
    
        void m(){
        
            int data=50/0;
        
        }
       void n(){
       
       m();
       }
       void p(){
       try {
       n();
       }
       catch(ArithmeticException e){System.out.println("Is it handled?");}
       }
    
    //}
    
    public static void main(String[] args) {
 
        
        ExceptionPropagation obj= new  ExceptionPropagation();
        
        obj.p();
        System.out.println("Handled");
    }
}
