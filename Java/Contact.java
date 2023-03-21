
/**
 * Write a description of Contact here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import java.util.*;
import java.lang.*;
import java.io.*;
public class Contact {
    private String name;
    private String number;
    private  String email;
    private ArrayList<Message> messages;
    
    // constructor
    public Contact(String name,String number,String email,ArrayList<Message>messages){
        this.name=name;
        this.number=number;
        this.email=email;
        this.messages=messages;
    }
    //another constructor
    public Contact(String name,String number,String email){
        this.name=name;
        this.number=number;
        this.email=email;
        this.messages=new ArrayList<>();
    }
    public void getDetails(){
        System.out.println("Name: "+this.name+"\nNumber: "+this.number+"\nEmail: "+this.email);
    }
    
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name=name;
    }
//    public List getMessages(){
//       return ArrayList<>();
//    }
    
    public String getNumber(){
        return number;
    }
    public void setNumber(){
        this.number=number;
    }
    public String getEmail(){
        return email;
    }
    public void setEmail(){
        this.email=email;
    }
    
}





