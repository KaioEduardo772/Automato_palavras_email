#include <iostream>
#include <string>
#include <algorithm>

// Elementos formais:
//
//    Alfabeto S: letras do conteúdo do e-mail (a-z)
//    Estados Q: definidos por letra por letra
//    Estado inicial: q0
//    Estado de aceitação: estado final após última letra
//    Função de transição d: implementada via switch-case

// Função para colocar tudo em minúsculo

int contadorSpam = 0;

std::string toLowerCase(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Autômato para a palavra "gratis"
bool automatoGratis(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'g') ? 1 : 0; break;
            case 1: estado = (c == 'r') ? 2 : (c == 'g' ? 1 : 0); break;
            case 2: estado = (c == 'a') ? 3 : (c == 'g' ? 1 : 0); break;
            case 3: estado = (c == 't') ? 4 : (c == 'g' ? 1 : 0); break;
            case 4: estado = (c == 'i') ? 5 : (c == 'g' ? 1 : 0); break;
            case 5: estado = (c == 's') ? 6 : (c == 'g' ? 1 : 0); break;
            case 6: return true;
        }
    }

    return estado == 6;
}

// Autômato para a palavra "dinheiro"
bool automatoDinheiro(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'd') ? 1 : 0; break;
            case 1: estado = (c == 'i') ? 2 : (c == 'd' ? 1 : 0); break;
            case 2: estado = (c == 'n') ? 3 : (c == 'd' ? 1 : 0); break;
            case 3: estado = (c == 'h') ? 4 : (c == 'd' ? 1 : 0); break;
            case 4: estado = (c == 'e') ? 5 : (c == 'd' ? 1 : 0); break;
            case 5: estado = (c == 'i') ? 6 : (c == 'd' ? 1 : 0); break;
            case 6: estado = (c == 'r') ? 7 : (c == 'd' ? 1 : 0); break;
            case 7: estado = (c == 'o') ? 8 : (c == 'd' ? 1 : 0); break;
            case 8: return true;
        }
    }

    return estado == 8;
}

// Autômato para a palavra "promocao"
bool automatoPromocao(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'p') ? 1 : 0; break;
            case 1: estado = (c == 'r') ? 2 : (c == 'p' ? 1 : 0); break;
            case 2: estado = (c == 'o') ? 3 : (c == 'p' ? 1 : 0); break;
            case 3: estado = (c == 'm') ? 4 : (c == 'p' ? 1 : 0); break;
            case 4: estado = (c == 'o') ? 5 : (c == 'p' ? 1 : 0); break;
            case 5: estado = (c == 'c') ? 6 : (c == 'p' ? 1 : 0); break;
            case 6: estado = (c == 'a') ? 7 : (c == 'p' ? 1 : 0); break;
            case 7: estado = (c == 'o') ? 8 : (c == 'p' ? 1 : 0); break;
            case 8: return true;
        }
    }

    return estado == 8;
}

// Autômato para a palavra "facil"
bool automatoFacil(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'f') ? 1 : 0; break;
            case 1: estado = (c == 'a') ? 2 : (c == 'f' ? 1 : 0); break;
            case 2: estado = (c == 'c') ? 3 : (c == 'f' ? 1 : 0); break;
            case 3: estado = (c == 'i') ? 4 : (c == 'f' ? 1 : 0); break;
            case 4: estado = (c == 'l') ? 5 : (c == 'f' ? 1 : 0); break;
            case 5: return true;
        }
    }

    return estado == 5;
}

// Autômato para a palavra "Ganhar"
bool automatoGanhar(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'g') ? 1 : 0; break;
            case 1: estado = (c == 'a') ? 2 : (c == 'g' ? 1 : 0); break;
            case 2: estado = (c == 'n') ? 3 : (c == 'g' ? 1 : 0); break;
            case 3: estado = (c == 'h') ? 4 : (c == 'g' ? 1 : 0); break;
            case 4: estado = (c == 'a') ? 5 : (c == 'g' ? 1 : 0); break;
            case 5: estado = (c == 'r') ? 6 : (c == 'g' ? 1 : 0); break;
            case 6: return true;
        }
    }

    return estado == 6;
}

// Autômato para a palavra "plataforma"
bool automatoPlataforma(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'p') ? 1 : 0; break;
            case 1: estado = (c == 'l') ? 2 : (c == 'p' ? 1 : 0); break;
            case 2: estado = (c == 'a') ? 3 : (c == 'p' ? 1 : 0); break;
            case 3: estado = (c == 't') ? 4 : (c == 'p' ? 1 : 0); break;
            case 4: estado = (c == 'a') ? 5 : (c == 'p' ? 1 : 0); break;
            case 5: estado = (c == 'f') ? 6 : (c == 'p' ? 1 : 0); break;
            case 6: estado = (c == 'o') ? 7 : (c == 'p' ? 1 : 0); break;
            case 7: estado = (c == 'r') ? 8 : (c == 'p' ? 1 : 0); break;
            case 8: estado = (c == 'm') ? 9 : (c == 'p' ? 1 : 0); break;
            case 9: estado = (c == 'a') ? 10 : (c == 'p' ? 1 : 0); break;
            case 10: return true;
        }
    }

    return estado == 10;
}

// Autômato para a palavra "tigrinho"
bool automatoTigrinho(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 't') ? 1 : 0; break;
            case 1: estado = (c == 'i') ? 2 : (c == 't' ? 1 : 0); break;
            case 2: estado = (c == 'g') ? 3 : (c == 't' ? 1 : 0); break;
            case 3: estado = (c == 'r') ? 4 : (c == 't' ? 1 : 0); break;
            case 4: estado = (c == 'i') ? 5 : (c == 't' ? 1 : 0); break;
            case 5: estado = (c == 'n') ? 6 : (c == 't' ? 1 : 0); break;
            case 6: estado = (c == 'h') ? 7 : (c == 't' ? 1 : 0); break;
            case 7: estado = (c == 'o') ? 8 : (c == 't' ? 1 : 0); break;
            case 8: return true;
        }
    }

    return estado == 8;
}

// Autômato para a palavra "oferta"
bool automatoOferta(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'o') ? 1 : 0; break;
            case 1: estado = (c == 'f') ? 2 : (c == 'o' ? 1 : 0); break;
            case 2: estado = (c == 'e') ? 3 : (c == 'o' ? 1 : 0); break;
            case 3: estado = (c == 'r') ? 4 : (c == 'o' ? 1 : 0); break;
            case 4: estado = (c == 't') ? 5 : (c == 'o' ? 1 : 0); break;
            case 5: estado = (c == 'a') ? 6 : (c == 'o' ? 1 : 0); break;
            case 6: return true;
        }
    }

    return estado == 6;
}

// Autômato para a palavra "novidade"
bool automatoNovidade(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'n') ? 1 : 0; break;
            case 1: estado = (c == 'o') ? 2 : (c == 'n' ? 1 : 0); break;
            case 2: estado = (c == 'v') ? 3 : (c == 'n' ? 1 : 0); break;
            case 3: estado = (c == 'i') ? 4 : (c == 'n' ? 1 : 0); break;
            case 4: estado = (c == 'd') ? 5 : (c == 'n' ? 1 : 0); break;
            case 5: estado = (c == 'a') ? 6 : (c == 'n' ? 1 : 0); break;
            case 6: estado = (c == 'd') ? 7 : (c == 'n' ? 1 : 0); break;
            case 7: estado = (c == 'e') ? 8 : (c == 'n' ? 1 : 0); break;
            case 8: return true;
        }
    }

    return estado == 8;
}

// Autômato para a palavra "rapido"
bool automatoRapido(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'r') ? 1 : 0; break;
            case 1: estado = (c == 'a') ? 2 : (c == 'r' ? 1 : 0); break;
            case 2: estado = (c == 'p') ? 3 : (c == 'r' ? 1 : 0); break;
            case 3: estado = (c == 'i') ? 4 : (c == 'r' ? 1 : 0); break;
            case 4: estado = (c == 'd') ? 5 : (c == 'r' ? 1 : 0); break;
            case 5: estado = (c == 'o') ? 6 : (c == 'r' ? 1 : 0); break;
            case 6: return true;
        }
    }

    return estado == 6;
}

// Autômato para a palavra "relampago"
bool automatoRelampago(const std::string& text) {
    int estado = 0;

    for (char c : text) {
        switch (estado) {
            case 0: estado = (c == 'r') ? 1 : 0; break;
            case 1: estado = (c == 'e') ? 2 : (c == 'r' ? 1 : 0); break;
            case 2: estado = (c == 'l') ? 3 : (c == 'r' ? 1 : 0); break;
            case 3: estado = (c == 'a') ? 4 : (c == 'r' ? 1 : 0); break;
            case 4: estado = (c == 'm') ? 5 : (c == 'r' ? 1 : 0); break;
            case 5: estado = (c == 'p') ? 6 : (c == 'r' ? 1 : 0); break;
            case 6: estado = (c == 'a') ? 7 : (c == 'r' ? 1 : 0); break;
            case 7: estado = (c == 'g') ? 8 : (c == 'r' ? 1 : 0); break;
            case 8: estado = (c == 'o') ? 9 : (c == 'r' ? 1 : 0); break;
            case 9: return true;
        }
    }

    return estado == 9;
}

// Autômato para detectar "!!" ou mais
bool automatoExclamacoes(const std::string& text) {
    int cont = 0;

    for (char c : text) {
        if (c == '!') {
            cont++;
            if (cont >= 2) return true;
        } else {
            cont = 0; // reset se quebrar sequência
        }
    }

    return false;
}

// Função principal main
int main() {
    std::string email;
    std::cout << "Digite o conteúdo do email:\n> ";
    std::getline(std::cin, email);

    email = toLowerCase(email);

//    bool spamDetectado = false;

    if (automatoGratis(email)) {
        std::cout << "Palavra \"gratis\" detectada.\n";
        contadorSpam++;
    }

    if (automatoDinheiro(email)) {
        std::cout << "Palavra \"dinheiro\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoPromocao(email)) {
        std::cout << "Palavra \"promocao\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoFacil(email)) {
        std::cout << "Palavra \"facil\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoGanhar(email)) {
        std::cout << "Palavra \"ganhar\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoPlataforma(email)) {
        std::cout << "Palavra \"plataforma\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoTigrinho(email)) {
        std::cout << "Palavra \"tigrinho\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoOferta(email)) {
        std::cout << "Palavra \"oferta\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoNovidade(email)) {
        std::cout << "Palavra \"novidade\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoRapido(email)) {
        std::cout << "Palavra \"rapido\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoRelampago(email)) {
        std::cout << "Palavra \"relampago\" detectada.\n";
        contadorSpam++;
    }
    
    if (automatoExclamacoes(email)) {
        std::cout << "Sequência de \"!!\" ou mais detectada.\n";
        contadorSpam++;
    }
    
    if (contadorSpam >= 3) {
       std::cout << "\n Este e-mail apresenta " << contadorSpam << " características suspeitas e pode ser considerado SPAM.\n";
    } else if (contadorSpam <= 2 && contadorSpam >0) {
           std::cout << "Duas ou menos palavras spam detectadas, este email pode ser ou nao considerado um SPAM.\n";
    } else if (contadorSpam <= 0) {
           std::cout << "Email sem palavras suspeitas.\n";
    }

//    if (!spamDetectado) {
//        std::cout << "Nenhuma palavra suspeita detectada.\n";
//    }

    return 0;
}
