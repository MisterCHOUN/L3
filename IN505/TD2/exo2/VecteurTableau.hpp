#include <iostream>
#include <memory>


class VecteurTableau
{
public:
	VecteurTableau();
	VecteurTableau(const int val);
	VecteurTableau(const VecteurTableau& vecteur);
	~VecteurTableau();


	const VecteurTableau& operator=(const VecteurTableau& vecteur);
	const VecteurTableau& operator=(VecteurTableau&& vecteur);
	const VecteurTableau& operator+=(const int val);
	const int operator[](const unsigned int index);

	friend std::ostream& operator<<(std::ostream& flux, const VecteurTableau& vecteur);
	friend std::istream& operator>>(std::istream& flux, VecteurTableau& vecteur);

private:
	void resize(const unsigned int new_size);

private:
	//array information
	unsigned int m_sizeArray;
	std::unique_ptr<int[]> m_array;

	//memory information
	unsigned int m_sizeMalloc;
};