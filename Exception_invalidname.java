import java.util.*;
class InvalidNameException extends Exception
{
    public String toString()
    {
        return "Invalid Name Exeption";
    }
}
class Demo
{
    public static void main(String args[])
    {
        try{
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter name to check:");
        String name=sc.next();
        
        for(int i=0; i<name.length(); i++)
        {
            if(!((name.charAt(i)<='Z' && name.charAt(i)>='A') || (name.charAt(i)<='z' && name.charAt(i)>='a')))
            {
                throw new InvalidNameException();
            }
        }

        System.out.println("Name="+name);
        }
        catch(InvalidNameException e)
        {
            System.out.println(e);
        }
    }
}