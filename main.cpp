#include <iostream>
using namespace std;

bool temTocha = false;
bool temCorda = false;

void cena2();
void cena3();
void cena4();
void cena5();
void cena6();
void final1();
void final2();
void gameOver1();
void gameOver2();
void barril();


void cena1() {
    cout << "Você acorda numa masmorra escura com seu amigo. Há um barril no canto e uma porta enferrujada. Seu amigo está fraco demais para se mover sozinho. \n";
    cout << "1 - Examinar o barril \n";
    cout << "2 - Tentar abrir a porta \n";

    int escolha1;
    cin >> escolha1;

    if (escolha1 == 1) {
        temCorda = true;
        temTocha = true;
        cout << "Voce encontra uma tocha e uma corda dentro do barril. \n";
        cena2();
    } else {
        cout << "A porta não cede. Você percebe que precisa explorar mais. \n";
        barril();
    }
}

void barril() {
    cout << "Sem outra opção de saída você se vẽ a vasculhar o barril. \n";
    cout << "O barril contém uma tocha e uma corda. \n"; 
    cout << "1 - Pegar os dois \n";
    cout << "2 - Continuar de mão vazias \n";

    int escolhaBarril;
    cin >> escolhaBarril;

    if (escolhaBarril == 1) {
        temTocha = true;
        temCorda = true;
        cout << "Você pegou os dois! \n";
        cena2();
    } else {
        cout << "Vocẽ procura outra saída de mãos vazias! \n";
        cena2();
    }

}

void cena2() {
    cout << "Voce ve a porta enferrujada e um tunel atras do barril. \n";
    cout << "1 - Arrombar a porta (requer Corda) \n";
    cout << "2 - Entrar no tunel \n";

    int escolha2;
    cin >> escolha2;

    if (escolha2 == 1 && temCorda) {
        cout << "A corrente cede! Voce entra no corredor com seu amigo. \n";
        cena4(); 
    } else if (escolha2 == 1 && !temCorda) {
        cout << "A porta nao abre. Voce nao tem corda. \n";
        cena3(); 
    } else {
        cout << "Voce entra no tunel escuro... \n";
        cena3(); 
    }
}

void cena3() {
    cout << "O tunel e estreito e completamente escuro. Seu amigo nao consegue entrar. Voce tera que ir sozinho.\n";
    cout << "1 - Avancar com a tocha (requer Tocha) \n";
    cout << "2 - Avancar sem a tocha \n";
    cout << "3 - Recusar e voltar para o amigo \n";

    int escolha3;
    cin >> escolha3;

    if (escolha3 == 1 && temTocha) {
        cout << "A luz revela o caminho. Voce avanca com seguranca e encontra uma saida. Mas seu amigo ficou para tras.\n";
        final2();
    } else if (escolha3 == 2) {
        cout << "O chao some sob seus pes. Voce esta na beira de um abismo. Cai no escuro.\n";
        gameOver1();
    } else {
        cout << "Voce nao consegue abandonar o amigo. Volta para a masmorra. Ele te entrega uma nota com um mapa.\n";
        cena4();
    }
}

void cena4() {
    cout << "Seu amigo entrega uma nota dobrada. Dentro há um mapa com dois caminhos de saída: um a leste (rápido, mas perigoso para ele) e um a norte (longo, mas seguro para os dois). \n";
    cout << "1 - Ir a leste sozinho \n";
    cout << "2 - Ir a norte com o amigo \n";

    int escolha4;
    cin >> escolha4;

    if (escolha4 == 1) {
        cout << "Você vai em frente e sai da masmorra rapidamente. Seu amigo fica para trás. \n";
        final2();
    } else {
        cout << "Você decide não abandonar o amigo. Os dois seguem juntos pelo caminho norte. \n";
        cena5();
    }
}

void cena5() {
    cout << "Um rio subterrâneo bloqueia o caminho. Há um barco pequeno que só aguenta uma pessoa. Do outro lado você vê a saída com luz natural entrando. \n";
    cout << "1 - Atravessar sozinho e prometer voltar \n";
    cout << "2 - Procurar outro caminho para os dois \n";

    int escolha5;
    cin >> escolha5;

    if (escolha5 == 1) {
        cout << "Você atravessa e sai. Promete voltar com ajuda — mas o destino do amigo fica incerto. \n";
        final2();
    } else { 
        cout << "Você se recusa a deixar o amigo. Encontra uma passagem oculta atrás de uma pedra. \n";
        cena6();
    }
}

void cena6() {
    cout << "Uma porta de pedra maciça bloqueia o último caminho. Do outro lado você sente o cheiro de ar fresco. A porta é pesada demais para abrir sozinho. \n";
    cout << "1 - Empurrar juntos \n";
    cout << "2 - Desistir \n";

    int escolha6;
    cin >> escolha6;

    if (escolha6 == 1) {
        cout << "Você e seu amigo colocam as mãos na porta ao mesmo tempo e empurram com tudo. A porta cede lentamente e a luz do lado de fora inunda o corredor. Saem juntos. \n";
        final1();
    } else {
        cout << "O cansaço é grande demais. Os dois sentam no chão. A porta nunca abre. \n";
        gameOver2();    
    }
}

void gameOver1() {
    cout << "\nVoce deu um passo no escuro e o chao sumiu. \n";
    cout << "Nao havia nada la embaixo. Apenas o silencio. \n";
    cout << "Seu amigo ainda esta la em cima, esperando por voce. \n";
    cout << "Ele nunca vai saber o que aconteceu. \n";
    cout << "\n--- GAME OVER --- \n";
}

void gameOver2() {
    cout << "\nVoces dois sentaram encostados na porta fria de pedra. \n";
    cout << "Seu amigo olhou pra voce e disse: 'tudo bem, a gente tentou.' \n";
    cout << "A luz da tocha foi apagando aos poucos. \n";
    cout << "Pelo menos voces estavam juntos. \n";
    cout << "\n--- GAME OVER --- \n";
}

void final2() {
    cout << "\nVoce saiu. O ar fresco bateu no seu rosto. \n";
    cout << "Mas seus passos eram pesados. \n";
    cout << "La atras, seu amigo ainda estava preso. \n";
    cout << "Voce prometeu voltar. Sera que voltou? \n";
    cout << "\n--- FIM --- \n";
}

void final1() {
    cout << "\nA porta cedeu. A luz entrou de uma vez so. \n";
    cout << "Voces dois saíram juntos, sem falar nada por um tempo. \n";
    cout << "Seu amigo abriu a nota e leu em voz alta: \n";
    cout << "'Obrigado por nao me abandonar.' \n";
    cout << "Voce nao respondeu. Nao precisava. \n";
    cout << "\n--- FIM --- \n";
}

int main() {
    cena1();
    return 0;        
}