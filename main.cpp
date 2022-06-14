//Nama      : Dhea Ayu Agustin
//NIM       : 1121031027
//Kelas     : Informatika A
//Deskripsi : Program Single Linked List Circular dengan head dan  tail, pada program ini
//ditambahkan function untuk mencari data tertentu dan function untuk menghapus data tertentu.
#include <iostream>

using namespace std;
struct Tnode {
    int data;
    TNode *next;
};
TNode *head, *tail;

void init(){
    head = NULL;
    tail = NULL;
}
int isEmpty(){
    if(tail == NULL{
       return 1;
    }else {
        return 0;
    }
}
void insertDepan(int dataBaru){
    TNode *nodeBaru, *nodeBantu;
    nodeBaru = new TNode;

    nodeBaru->data = dataBaru;
    nodeBar->next = nodeBaru;

    if (isEmpty() == 1){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = head;
        tail->next = head;
    }

    cout << "Data" << dataBaru << "masuk sebagai node paling depan" <<endl;
}
void insertBelakang(int dataBaru){
    TNode *nodeBaru;
    nodeBaru = new TNode;

    nodeBaru->data = dataBaru;
    nodeBaru->next = nodeBaru;

    if(isEmpty() == 1){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = head;
        tail;->next = tail;
    }else{
        tail->next = nodeBaru;
        tail = nodeBaru;
        tail->next = head;
    }
    cout << "Data" << dataBaru << "maasuk sebagai node paling belakang" << endl;
}
void hapusDepan() {
    TNode *nodeHapus;
    int d;

    if(isEmpty() == 0){
        nodeHapus = head;
        d = nodeHapus->data;

        if(head != tail){
            nodeHapus = head;
            head = head->next;
            tail->next = head;
            delete nodeHapus;
        }else{
            head = NULL;
            tail = NULL;
        }
        cout << "Data" << d << "terhapus" << endl;
    }else {
        cout << "Linked List Masih Kosong\n";
    }
}
void hapusBelakang(){
    TNode *nodeHapus, *nodeBantu;
    int d;

    if(isEmpty()}== 0){
        if(head == tail){
            d = tail->data;
            head = NULL;
            tail = NULL;
        }else{
            nodeBantu = head;
                while(nodeBantu->next != tail){
                    nodeBantu = nodeBantu->next;
                }
                nodeHapus = tail;
                tail = nodeBantu;
                d = nodeHapus->data;
                tail->next = head;
                delete nodeHapus;
        }
        cout << "Data" << d << "terhapus" <<endl;
    }else{
        cout << "Linked List Masih Kosong\n";
    }
}
void hapusSemua(){
    TNode *nodeBantu, *nodeHapus;
    nodeBantu = head;

    if(isEmpty() == 0){
        nodeBantu = head;

        while(nodeBantu->next != head){
            nodeHapus = nodeBantu;
            nodeBantu = nodeBantu->next;
            delete nodeHapus;
        }
        head = NULL;
        tail = NULL;
    }
    cout << "Linked List kosong n\";
}
void tampilData(){
    TNode *nodeBantu;

    nodeBantu = head;

    if(isEmpty() == 0){
        do{
            cout << nodeBantu->data << endl;
            nodeBantu = nodeBantu->next;
        }while(nodeBantu != tail->next);
    }else{
        cout << nodeBantu->data <<endl;
    }
}
void cariData(int cari){
    TNode *nodeBantu;
    //bool ditemukan = false;
    nodeBantu = head;
        if(isEmpty) != 1){
            while(nodeBantu != NULL){
                if(nodeBantu->data == cari){
                    //ditemukan = true;
                    cout << "Data Ditemukan->" << nodeBantu->data;
                    return;
                }
                    nodeBantu = nodeBantu->next;
                if(nodeBantu == tail ->next){
                    cout << "Data Tidak Ditemukan\n";
                    break;
                }
            }
        }else{
            cout << "Data Tidak Ditemukan List Kosong\n";
            }
}
void hapusData(int input){
    TNode* nodeBantu = head;
    TNode* hapus = NULL;

    if(isEmpty() != 1){
        if(nodeBantu != NULL && nodeBantu->data == input){
            head = nodeBantu->next;
            delete nodeBantu;
            cout << "Data" << input << "telah dihapus\n";
            tampilData();
            return;
        }else{
            while(nodeBantu != NULL && nodeBantu->data != input){
                hapus = nodeBantu;
                nodeBantu = nodeBantu->next;
            if(nodeBantu == tail->next){
                cout << "Data Tidak Ditemukan\n";
                return;
                }hapus->next = nodeBantu->next;
            }
    }
            cout << "Data" << input << "telah dihapus\n";
            tampilData();
            return;
    }
    cout << "Data Tidak Ditemukan List Kosong\n";
}

int main(){
    int pil, dataBaru;

    do{
        cout << "  \n" << endl;
        cout << "------------------------------------" << endl;
        cout << "-     SLLC WITH HEAD AND TAIL      _" <<endl;
        cout << "------------------------------------" <<endl;
        cout << "- 1. Insert Depan                  -" << endl;
        cout << "- 2. Insert Belakang               -" << endl;
        cout << "- 3. Hapus Depan                   -" << endl;
        cout << "- 4. Hapus Belakang                -" << endl;
        cout << "- 5. Tampil Data                   -" << endl;
        cout << "- 6. Hapus Semua Data              -" << endl;
        cout << "- 7. Cari Data Tertentu            -" << endl;
        cout << "- 8. Hapus Data Tertentu           -" << endl;
        cout << "- 9. Exit                          -" << endl;
        cout << "------------------------------------" << endl;
        cout << "Masukan Pilihan  : ";
        cin >> pil;

        if(pil == 1){
            cout << "Masuka Data : ";
            cin >> dataBaru;
            insertDepan(dataBaru);
        }else if (pil == 2){
            cout << "Masukan Data : " ;
            cin >> data Baru;
            insertBelakang(dataBaru);
        }else if (pil == 3){
            hapusDepan();
        }else if (pil == 4){
            hapusBelakang();
        }else if (pil == 5){
            tampilData();
        }else if (pil == 6){
            hapusSemua();
        }else if (pil == 7){
            cout << "Masukan Data Yang Ingin DiCari : ";
            cin >> dataBaru;
            cariData(dataBaru);
        }else if (pil == 8){
            cout << "Masukan Data Yang Ingin Dihapus : ";
            cin >> dataBaru;
            hapusData(dataBaru};
        }else if (pil != 9){
            cout << "MAAF PILIHAN TIDAK TERSEDIA!";
            }
    }while (pil != 9);
    return 0;
}
