
import java.util.*;
import java.lang.*;
import java.io.*;
public class Main {
    private static ArrayList<Contact>contacts;
    private static Scanner sc;
    private static int id=0;
    public static void main(String args[])
    {
        contacts=new ArrayList<>();
        System.out.println("Welcome");
        showInitialOptions();
    }
    private static void showInitialOptions(){
        System.out.println("Please select one:\n"+
        "\n]t1.Manage Contacts"+"\n\t2.Messages"+"\n\t3.Quit");
        sc=new Scanner(System.in);
        int choice =sc.nextInt();
        switch(choice){
            case 1:
                manageContacts();
                break;
            case 2:
                manageMessages();
                break;
            default:
                break;
        }
    }
    public static void manageContacts(){
        System.out.println("Please select one: "+
        "\n\t1.Show all Contacts"+
        "\n\t2.Add a new Contact"+
        "\n\t3.Search for a Contact"+
        "\n\t4.Delete a Contact"+
        "\n\t5.Go Back");
        int choice=sc.nextInt();
        switch(choice){
            case 1:
                showAllContacts();
                break;
            case 2:
                addNewContact();
                break;
            case 3:
                searchForContact();
                break;
            case 4:
                deleteContact();
                break;
            default:
                showInitialOptions();
                break;
        }
    }
    public static void showAllContacts(){
        for(Contact c:contacts){
            c.getDetails();
            System.out.println("*************");
        }
        showInitialOptions();
    }
    public static void addNewContact(){
        System.out.println("Adding a new contact..."+
        "\nEnter the contact's name: ");
        String name=sc.next();
        System.out.println("Enter contact's number: ");
        String number=sc.next();
        System.out.println("Enter contact's email: ");
        String email=sc.next();
        if(name.equals("")||number.equals("")||email.equals("")){
            System.out.println("Enter all of the information");
            addNewContact();
        }
        else{
            boolean doesExist=false;
            for(Contact c:contacts){
                if(c.getName().equals(name)){
                    doesExist=true;
                }
            }
            if(doesExist){
                System.out.println(name+" already exists");
                addNewContact();
            }
            else{
                Contact contact=new Contact(name,number,email);
                contacts.add(contact);
                System.out.println(name+" added successfully");
            }
        }
        showInitialOptions();
    }
    public static void searchForContact(){
        boolean doesExist=false;
        System.out.println("Enter contact's name: ");
        String name=sc.next();
        if(name.equals("")){
        }
        else{
            for(Contact c:contacts){
                if(c.getName().equals(name)){
                    doesExist=true;
                    c.getDetails();
                }
            }
            if(doesExist){
                System.out.println("There is no such contact");
            }
        }
        showAllContacts();
    }
    public static void deleteContact(){
        System.out.println("Enter contact's name: ");
        String name=sc.next();
        if(name.equals("")){
            System.out.println("Name can't be empty");
            deleteContact();
        }
        else{
            boolean doesExist=false;
            for(Contact c:contacts){
                if(c.getName().equals(name)){
                    doesExist=true;
                    contacts.remove(c);
                }
            }
            if(doesExist==false){
                System.out.println("There is no such contact");
            }
        }
        showInitialOptions();
    }
    
    public static void manageMessages(){
        System.out.println("Please select one:"+
        "\n\t1.Show all messages"+
        "\n\t2.Send a new message"+
        "\n\t3.Go back");
        int choice=sc.nextInt();
        switch(choice){
            case 1:
                showAllMessages();
                break;
            case 2:
                sendNewMessage();
                break;
            default:
                showInitialOptions();
                break;
        }
    }
    public static void showAllMessages(){
        ArrayList<Message> allMessages=new ArrayList<>();
        for(Contact c:contacts){
            allMessages.addAll(c.getMessages());
        }
        if(allMessages.size()>0){
            for(Message m:allMessages){
                m.getDetails();
                System.out.println("**************");
            }
        }
        else{
            System.out.println("You don't have any messages");
        }
        showInitialOptions();
    }
    public static void sendNewMessage(){
        System.out.println("recipient name: ");
        String name=sc.next();
        if(name.equals("")){
            System.out.println("Name of the contact: ");
            sendNewMessage();
        }
        else{
            boolean doesExist=false;
            for(Contact c:contacts){
                if(c.getName().equals(name)){
                    doesExist=true;
                    break;
                }
            }
            if(doesExist==false){
                System.out.println("there is no such contact");
            }
            else{
                System.out.println("type your message: ");
                String text=sc.next();
                if(text.equals("")){
                    System.out.println("Enter some message");
                    sendNewMessage();
                }
                else{
                    id++;
                    Message newMessage=new Message(text,name,id);
                    for(Contact c:contacts){
                        if(c.getName().equals(name)){
                            ArrayList<Message> new Message=c.getMessages();
                        }
                    }
                }
            }
        }
    }
}




