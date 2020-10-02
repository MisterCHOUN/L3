#include "VecteurTableau.hpp"



VecteurTableau::VecteurTableau() : m_sizeArray(0), m_sizeMalloc(0)
{

}

VecteurTableau::VecteurTableau(const int val) : m_sizeArray(1), m_sizeMalloc(1)
{
	m_array = std::make_unique<int[]>(m_sizeMalloc);
	m_array[0] = val;
}

VecteurTableau::VecteurTableau(const VecteurTableau& vecteur)
{
	*this = vecteur;
}

VecteurTableau::~VecteurTableau()
{

}

/*-------------------------------------------------------------------------------------------*/

const VecteurTableau& VecteurTableau::operator=(const VecteurTableau& vecteur)
{
	resize(vecteur.m_sizeMalloc);
	
	m_sizeArray = vecteur.m_sizeArray;
	for (unsigned int i = 0; i < m_sizeArray; ++i)
		m_array[i] = vecteur.m_array[i];
	return *this;
}

const VecteurTableau& VecteurTableau::operator=(VecteurTableau&& vecteur)
{
	m_sizeArray = vecteur.m_sizeArray;
	m_sizeMalloc = vecteur.m_sizeMalloc;
	m_array = std::move(vecteur.m_array);
	return *this;
}

const VecteurTableau& VecteurTableau::operator+=(const int val)
{
	if(m_sizeArray + 1 > m_sizeMalloc)
		resize(m_sizeMalloc * 2);
	
	m_sizeArray++;
	m_array[m_sizeArray - 1] = val;
	return *this;
}

const int VecteurTableau::operator[](const unsigned int index)
{
	if(index >= m_sizeArray)
		throw std::out_of_range("Index out of range");
	return m_array[index];
}

std::ostream& operator<<(std::ostream& flux, const VecteurTableau& vecteur)
{
	flux << "[";
	for(unsigned int i = 0; i < vecteur.m_sizeArray; i++)
	{
		flux << vecteur.m_array[i];
		if(i != vecteur.m_sizeArray - 1)
			flux << ", ";
	}
	flux << "]";
	return flux;
}

std::istream& operator>>(std::istream& flux, VecteurTableau& vecteur)
{
	int buffer;
	flux >> buffer;
	vecteur += buffer;
	return flux;
}

/*-------------------------------------------------------------------------------------------*/

void VecteurTableau::resize(unsigned int new_size)
{
	if(new_size == 0)
		new_size = 1;

	std::unique_ptr<int[]> buffer = std::make_unique<int[]>(new_size);
	m_sizeMalloc = new_size;
	for(unsigned int i = 0; i < m_sizeArray; i++)
		buffer[i] = m_array[i];
	m_array = std::move(buffer);
}