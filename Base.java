class Base{
	public void print(){
		System.out.println("Base");
	}
}

class Derived extends Base{
	public void print(){
		System.out.println("Derived");
	}
}

class Main{
	public static void Doprint(Base o){
		o.print();
	}
	public static void main(String[] args) {
		Base x = new Base();
		Base y = new Derived();
		Derived z = new Derived();
		Doprint(x);
		Doprint(y);
		Doprint(z);
	}
}