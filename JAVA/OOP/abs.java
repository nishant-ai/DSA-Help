/*
2. Create an abstract class Figure with abstract method area and two integer dimensions. Extend
  this class to inherit three more classes Rectangle, Triangle and Square which implements the area
  method. Write a java program to show how the area can be computed dynamically during run time
  for Rectangle, Square and Triangle. (Use constructor to initialize data members).
 */

abstract class figure{
    abstract int area();
    int dim1,dim2;
}

class rectangle extends figure
{
    rectangle(int l,int b){
        dim1=l;
        dim2=b;
    }

    int area(){
        return dim1*dim2;
    }
}

class triangle extends figure{
    triangle(int b,int h){
        dim1=b;
        dim2=h;
    }

    int area(){
        return (int) (0.5*dim1*dim2);
    }
}

class square extends figure{
      square(int s){
          dim1=s;
      }
      int area(){
          return dim1*dim1;
      }
}



public class abs {
    public static void main(String[] args){
          figure f;
          rectangle r=new rectangle(4,5);
          triangle t=new triangle(3,4);
          square s=new square(2);
          f=r;
          System.out.println("The area of rectangle is: "+f.area());
          f=t;
          System.out.println("The area of triangle is: "+f.area());
          f=s;
          System.out.println("The area of triangle is: "+f.area());
    }
}