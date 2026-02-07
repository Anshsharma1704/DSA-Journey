public class box {
    int length;
    int width;
    int height;

    public void volume() {
         nt v = length*width*height;
        System.out.println( v );

    }
   public box(int length, int width, int height) {
        this.length = length;
        this.width = width;
        this.height = height;  
   }
        public static void main(String[] args) {
            box box1 = new box(3, 4, 5);
            box1.volume();  
            System.out.println(box1.length);     
    }
}