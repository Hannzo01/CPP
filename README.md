Le constructeur par défaut initialise les attributs, mais de façon "basique"
Pour les types simples (int, double), ils ne sont PAS initialisés (valeurs aléatoires)
Pour les objets (comme std::string), ils sont initialisés à vide
class Contact {
private:
    std::string name;  // Initialisé à "" (vide)
    int age;           // PAS initialisé (valeur random!)
};

Contact c;  // Constructeur par défaut appelé
// c.name = ""  (OK)
// c.age = ???  (Danger! Valeur aléatoire)

std::string getName() const;
//                    ^^^^^
// "Je promets de ne pas modifier les attributs de la classe"
Exemple :
cppclass Contact {
private:
    std::string name;
    
public:
    // ✅ OK : ne modifie rien
    std::string getName() const {
        return name;
    }
    
    // ❌ ERREUR : modifie name
    void setName(std::string n) const {
        name = n;  // Erreur de compilation!
    }
};

Private and public : (parfois protected)
Ces mots s’appellent des modificateurs d’accès (access specifiers).
Ils servent à définir la visibilité (ou l’accessibilité) des variables et fonctions de la classe.
Règle générale :

✅ Private : Toutes les données (attributs)
✅ Public : Les méthodes (fonctions) qui permettent d'accéder/modifier

Le destructeur est automatiquement appelé quand ton objet est détruit (sort du scope, delete, etc.).
Le compilateur ne sait pas quel argument lui passer s’il avait un paramètre.
Donc, il doit toujours être vide et sans valeur de retour.
