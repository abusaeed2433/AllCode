
/**
 * Write a description of Message here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
import java.lang.*;
import java.io.*;

public class Message{
    private String text;
    private String recipient;
    private int id;
    
    //constructor
    public Message(String text, String recipient, int id){
        this.text=text;
        this.recipient=recipient;
        this.id=id;
    }
    public void getDetails(){
        System.out.println("Contact Name: "+recipient+"\nMessage: "+text+"\nId: "+id);
    }
    
    public String getText(){
        return text;
    }
    public void setText(String text){
        this.text=text;
    }
    public String getRecipient(){
        return recipient;
    }
    public void setRecipient(String recipient){
        this.recipient=recipient;
    }
    public int getId(){
        return id;
    }
    public void setId(int id){
        this.id=id;
    }
}



