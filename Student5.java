
package javaapplication6;


public class Student5 {
    
    int id;
    String name;
    int age;
    


 Student5(int i, String n){


id=i;

name=n;


}

Student5(int i, String n, int a){


id=i;
name= n;
age=a;

}
 

void display()
{

    System.out.println("ID: "+id +" Name :"+name + " Age :" +age);

}

    public static void main(String[] args) {
        
        Student5 s1= new Student5(18511075,"Munna jalay");
        
        Student5 s2= new Student5(18511060,"Atiya kathal khay",20);
        
        s1.display();
        s2.display();
        
    }

}
