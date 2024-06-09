import java.util.*;
class InvalidEmailException extends Exception
{
    public String toString()
    {
        return "Inavlid Email Exception..";
    }
}
class Demo
{
    public static void main(String args[])
    {
        try{
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Email:");
        String email=sc.next();

        int f=0;
        for(int i=0; i<email.length(); i++)
        {
            if((email.charAt(i)=='@'))
                f++;
            else if((email.charAt(i)=='.'))
                f++;
        }
        if(f!=2)
           throw new InvalidEmailException();

            System.out.println("Email="+email);
        }
        catch(InvalidEmailException e)
        {
              System.out.println(e);
        }

    }
}