 #include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;


int main() {
    vector <int> nums;
    string resp;
    int num , op, i, result, media;

    //PREENCHER VETOR
    do {

       cout << " digite um número inteiro para o seu vector: " << endl;
       cin >> num ;
       nums.push_back(num);

       cout << " Você quer digitar outro número?(você deve responder com s ou n)" << endl;
       cin >> resp ;
    } while (resp == "s") ;


    if (resp == "n"){

        do{
            cout << "[1] Imprimir o somatório de seus elementos" << endl;
            cout << "[2] Imprimir a média de seus elementos" << endl;
            cout << "[3] Imprimir a média e o somatório" << endl;
            cout << "[4] Substituir por zero todos os valores negativos e imprimir a média" << endl;
            cout << "[5] Substituir por zero todos os valores repetidos e imprimir a média e o somatório" << endl;
            cout << "[6] Mostrar o vetor ordenado" << endl;
            cout << "[0] Sair da aplicação" << endl;
            cout << "Digite uma opcao: ";
            cin >> op;

            switch (op){

                //---------------------------------------------------------
                case 1 :
                    result=0;

                    for (int  a   :  nums) {
                        result += a;
                    }

                    cout << "O somatório é: " <<result << endl;
                break;

                //---------------------------------------------------------
                case 2 :
                    result=0;

                    for (int  a   :  nums) {
                        result += a;
                    }

                    cout << "A média é: " <<result / nums.size()<< endl;
                break;

                //---------------------------------------------------------
                case 3 :

                    result=0;

                    for (int  a   :  nums) {
                        result += a;
                    }

                    cout << "O somatório é: " <<result << endl;
                    cout << "A média é: " <<result / nums.size()<< endl;

                break;

                //---------------------------------------------------------
                case 4 :
                    for ( i = 0; i < nums.size(); ++i) {

                        if (nums[i] < 0){
                            nums[i] = 0;
                        }
                    }


                    result=0;

                    for (int  a   :  nums) {
                        result += a;
                    }

                    cout << "A média é: " <<result/nums.size() << endl;

                break;

                //---------------------------------------------------------
                case 5 :

                    for(i=0; i<nums.size(); i++){
                        for(int j = 0; j<nums.size(); j++){

                            if (i != j && nums[i] == nums[j]){
                                nums[j] = 0;
                            }

                        }
                    }

                    result=0;

                    for (int  a   :  nums) {
                        result += a;
                    }

                    cout << "A média é: " <<result/nums.size() << endl;


                break ;

                //---------------------------------------------------------

                case 6 :

                    sort(nums.begin(), nums.end());
                    cout << "[";
                    for (int i  : nums) {
                        cout << i << ",";
                    }
                    cout << "]";

                break;
            }

        } while(op!=0) ;

        if (op == 0) {
            cout<<"Você finalizou sa consulta" << endl;
        }
    }

    return 0;
}
