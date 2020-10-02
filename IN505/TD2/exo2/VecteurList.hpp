#include <iostream>
#include <memory>


class VecteurList
{
public:
	VecteurList();
	VecteurList(const int val);
	~VecteurList();

	const VecteurList& operator=(const VecteurList& vecteur);
	const VecteurList& operator=(VecteurList&& vecteur);
	const VecteurList& operator+=(const int val);
	const int operator[](const unsigned int index);
	friend std::ostream& operator<<(std::ostream& flux, const VecteurList& vecteur);
	friend std::istream& operator>>(std::istream& flux, VecteurList& vecteur);

private:
	struct node
	{
		int value;
		std::shared_ptr<node> next;

		node();
		node(const int val, const std::shared_ptr<node> suivant);
		~node();
	};

	void insert(const int val);

private:
	unsigned int m_sizeList;
	std::shared_ptr<node> m_list;
	std::shared_ptr<node> m_listEnd;
};
