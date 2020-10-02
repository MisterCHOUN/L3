#include <iostream>
#include <memory>

#include "Definition.hpp"
#include "Cstring.hpp"

class Dictionnaire
{
public:
	Dictionnaire();
	~Dictionnaire();

	const Dictionnaire& operator+=(const Definition& def);
	friend std::ostream& operator<<(std::ostream& flux, const Dictionnaire& dico);


	void printDef(const char* word) const;
	const Definition& findDef(const char* word) const;

private:
	struct node
	{
		Definition definition;
		std::shared_ptr<node> next;

		node();
		node(const char* word, const char* def, const std::shared_ptr<node> suiv);
		~node();
	};

	const std::shared_ptr<node> findNode(const char* word) const;

private:
	unsigned int m_listSize;
	std::shared_ptr<node> m_list;
	std::shared_ptr<node> m_listEnd;
};