#ifndef TP_TD2_GRAPHE_H
#define TP_TD2_GRAPHE_H

#include "Sommet.h"

class Graphe {

private:
    bool m_estOriente;
    std::vector< Sommet*> m_sommets;

public:
    Graphe(std:: string cheminFichierGraphe);
    ~Graphe();
    void afficher() const;
    std::vector<int> BFS(int numero_S0) const;


};


#endif //TP_TD2_GRAPHE_H
