Fila::Fila(int tamanho){
    this->tamanho = tamanho;
    inicio = 0; //Primeira posição ocupada no vetor
    fim = 1; //Primeira posição livre no vetor
    qtde_alocados = 0;
    Datagrama **elementos = new Datagrama*[tamanho];
}

Fila::~Fila(){
    delete[] elementos;
}

bool Fila::enqueue(Datagrama* d){
    if (qtde_alocados == tamanho){
        //Overflow
	    return false;

    } else {
        elementos[fim] = d;

        fim++;
        qtde_alocados++;
        if (fim == tamanho) fim = 0;
	    return true;
    }
}

Datagrama* Fila::dequeue(){
    if (this->isEmpty()){
        //Underflow
	    return nullptr;
    } else {
        inicio = inicio+1;
        qtde_alocados--;
	    return elementos[inicio];
    }
}

bool isEmpty(){
    return (qtde_alocados == 0);
}

int getSize(){
    return qtde_alocados;
}

//Refatorar tal função posteriormente
void imprimir(){
    for(int i=inicio; i!=fim; i = (i+1)%tamanho){
        cout << elementos[i]->data << endl;
    }
    cout << elementos[fim]->data << endl;
}
