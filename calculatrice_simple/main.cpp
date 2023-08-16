#include <iostream>

using namespace std;

//fonctions puissance
int puissance(int number, int n);
int addition (int n1, int n2);
int soustraction (int n1, int n2);
int division(float n1, float n2);

int division(float n1, float n2){
    return n1 / n2;

}

int puissance(int number, int n){
    int result = 1 ;
    for (int i = 0 ; i < n ; i++){
        result *= number;
    }

    return result;
}

int addition (int n1, int n2){
    return n1 + n2;

}

int soustraction (int n1, int n2){
    return n1 - n2;

}
int main() {
    int reponse;
    int n1;
    int n2;
    float div1;
    float div2;
    cout << "Bonjour et Bienvenu" << endl;
    cout << "Pour effectuer une addition tapé 1  \n" << "Pour effectuer une soustraction tapé 2 \n" << "Pour calculer un puissance tapé 3 \n" << "Pour calculer une division tapé 4  \n" << endl;
    cin >> reponse;

    if (reponse == 1){
        cout << "Saissir le premier nombre:";
        cin >> n1;
        cout << "Saissir second nombre:";
        cin >> n2;
        cout << addition(n1,  n2) << endl;
    }
    if (reponse == 2){
        cout << "Saissir le premier nombre:";
        cin >> n1;
        cout << "Saissir le second nombre:";
        cin >> n2;
        cout << soustraction(n1,  n2) << endl;
    }
    if (reponse == 3){
        cout << "Saissir un nombre:";
        cin >> n1;
        cout << "Saissir sa puissance:";
        cin >> n2;
        cout << puissance(n1,  n2) << endl;
    }

    if (reponse == 3){
        cout << "Saissir un nombre:";
        cin >> n1;
        cout << "Saissir sa puissance:";
        cin >> n2;
        cout << puissance(n1,  n2) << endl;
    }

    if (reponse == 4){
        cout << "Saissir un dividende:";
        cin >> div1;
        cout << "Saissir un diviseur:";
        cin >> div2;
        cout << division(div1,  div2) << endl;
    }
}

