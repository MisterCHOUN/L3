public class Fraction
{
	private int numerateur;
	private int denominateur;


	Fraction()
	{
		numerateur = 1;
		denominateur = 1;
	}

	Fraction(final int num, final int denom)
	{	
		assert(denom != 0) : "Division par 0 interdite !";
		numerateur = num;
		denominateur = denom;
	}

	public int getNumerateur() {return numerateur;}
	public void setNumerateur(final int num) {numerateur = num;}

	public int getDenominateur() {return denominateur;}
	public void setDenominateur(final int denom)
	{
		assert(denom == 0) : "Division par 0 interdite !";
		denominateur = denom;
	}
	
	public double getValue() {return numerateur/denominateur;}
	
	public String toString()
	{
		return "(" + numerateur + "/" + denominateur + ")";
	}
}