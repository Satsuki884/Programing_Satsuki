//
//class ArrayShoes{
//private:
//    int Size_array;
//    Sneakers* Shoes;// = new ShoesBase[Size_array];
//    Boots* Shoes2;// = new ShoesBase[Size_array];
//public:
//    ArrayShoes(int Size_array, int n)
//    {
//            if(n == 1) Shoes = new Sneakers[Size_array];
//            else Shoes2 = new Boots[Size_array];
//            Size_array = Size_array;
////        cout<<"Вызвался конструктор ArrayShoes(1)"<<this;//endl;
//    }
//    ShoesBase & operator [](const int index){
//        return Shoes[index];
//    }
//
//    ~ArrayShoes(){
//        delete[] this->Shoes;
////        cout<<"Вызвался деструктор ArrayShoes()"<<this;//endl;
//    }
////    ShoesBase(const ShoesBase &copy) :index(copy.index) {
////        for (int i = 0; i <= copy.index; i++) {
////            backpacks[i] = copy.backpacks[i]->clone();
////        }
////    }
//
////    void addBackpack(ShoesBase *backpack) {
////        int index =0;
////        index += 1;
////        if (index >= 255) {
////            return;
////        }
////        backpack[index] = backpack->clone();
////        //cout << index;
////    }
//
//    void createArraySneakers() {
//        Shoes[0] = Sneakers(true, "Ingnite", 2990, ShoesBase::insole{37, 24}, ShoesBase::Brand::puma, true,
//                            Sneakers::Purpose::sport);
//        Shoes[1] = Sneakers(false, "Response", 2590, ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas, true,
//                            Sneakers::Purpose::casual);
//        Shoes[2] = Sneakers(true, "Wearajjday", 2730, ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook, false,
//                            Sneakers::Purpose::sport);
//        Shoes[3] = Sneakers(false, "Tanjun", 2690, ShoesBase::insole{31, 25}, ShoesBase::Brand::nike, true,
//                            Sneakers::Purpose::sport);
//
//
//        //ReadFromFile();
//    };
//    void createArrayBoots() {
//        Shoes2[0] = Boots(true, "Ingnite", 2990, ShoesBase::insole{37, 24}, ShoesBase::Brand::puma, true,
//                          Boots::Season::autumn);
//        Shoes2[1] = Boots(false, "Response", 2590, ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas, true,
//                          Boots::Season::spring);
//        Shoes2[2] = Boots(true, "Wearajjday", 2730, ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook, false,
//                          Boots::Season::winter);
//        Shoes2[3] = Boots(false, "Tanjun", 2690, ShoesBase::insole{41, 25}, ShoesBase::Brand::nike, true,
//                          Boots::Season::spring);
//    };
//    void show_array(){
//        for(int i =0; i<Size_array; i++){
//            cout << "\33[1:33mShoes #" << i+1 << ":\33[0m\n";
//            cout << this->Shoes[i];
//        }
//    }
//
//    void add_objectSneakers(Sneakers & new_element){
//        int a= -1;
//        for(int i=0; i <Size_array; i++){
//            if(this->Shoes[i].GetPriceUSD() == 0) {
//                a=i;
//                break;
//            }
//        }
//        if(a < 0){
//            Sneakers *Shoes_new = new Sneakers[Size_array+1];
//            for(int i=0; i< Size_array; i++){
//                Shoes_new[i]= Shoes[i];
//            }
//            Shoes= Shoes_new;
//            a = Size_array;
//            Size_array++;
//            delete[] Shoes_new;
//        }
//        Shoes[a] = new_element;
//        show_array();
//    }
//    void add_objectBoots(Boots & new_element){
//        int a= -1;
//        for(int i=0; i <Size_array; i++){
//            if(this->Shoes[i].GetPriceUSD() == 0) {
//                a=i;
//                break;
//            }
//        }
//        if(a < 0){
//            Boots *Shoes_new = new Boots[Size_array+1];
//            for(int i=0; i< Size_array; i++){
//                Shoes_new[i]= Shoes2[i];
//            }
//            Shoes2= Shoes_new;
//            a = Size_array;
//            Size_array++;
//            delete[] Shoes_new;
//        }
//        Shoes2[a] = new_element;
//        show_array();
//    }
//    void test_insertSneakers(Sneakers & new_element) {
//        int n = size_array();
//        int a= Size_array;
//        auto *Test = new Sneakers[1];
//        Test[0] = Sneakers(true, "Gaw", 3000,ShoesBase::insole{35, 20}, ShoesBase::Brand::puma, true, Sneakers::Purpose::casual);
//        if (n == a){
//            if(Test->GetIsOrtopedic() != new_element.GetIsOrtopedic()){
//                cout<<"\33[1:31mТест провален1.\33[0m" << endl;
//            }else if (Test->GetPriceUSD() != new_element.GetPriceUSD()){
//                cout<<("\33[1:31mТест провален2.\33[0m") << endl;
//            }else if (Test->GetModelName() != new_element.GetModelName()){
//                cout<<("\33[1:31mТест провален3.\33[0m") << endl;
//            }else if (Test->GetInsoleSize() != new_element.GetInsoleSize()){
//                cout<<("\33[1:31mТест провален4.\33[0m") << endl;
//            }else if (Test->GetInsoleLength() != new_element.GetInsoleLength()){
//                cout<<("\33[1:31mТест провален5.\33[0m") << endl;
//            } else cout<<("\33[1:32mТест пройден успешно.\33[0m") << endl;
//        }
//        else cout<<("\33[1:31mТест провален6.\33[0m") << endl;
//    }
//
//    Sneakers Get_objectSneakers(int index){
//        return Shoes[index];
//    }
//    void test_insertBoots(Boots & new_element) {
//        int n = size_array();
//        int a= Size_array;
//        auto *Test = new Boots[1];
//        Test[0] = Boots(true, "Gaw", 3000,ShoesBase::insole{35, 20}, ShoesBase::Brand::puma, true, Boots::Season::spring);
//        if (n == a){
//            if(Test->GetIsOrtopedic() != new_element.GetIsOrtopedic()){
//                cout<<"\33[1:31mТест провален1.\33[0m" << endl;
//            }else if (Test->GetPriceUSD() != new_element.GetPriceUSD()){
//                cout<<("\33[1:31mТест провален2.\33[0m") << endl;
//            }else if (Test->GetModelName() != new_element.GetModelName()){
//                cout<<("\33[1:31mТест провален3.\33[0m") << endl;
//            }else if (Test->GetInsoleSize() != new_element.GetInsoleSize()){
//                cout<<("\33[1:31mТест провален4.\33[0m") << endl;
//            }else if (Test->GetInsoleLength() != new_element.GetInsoleLength()){
//                cout<<("\33[1:31mТест провален5.\33[0m") << endl;
//            } else cout<<("\33[1:32mТест пройден успешно.\33[0m") << endl;
//        }
//        else cout<<("\33[1:31mТест провален6.\33[0m") << endl;
//    }
//
//    Boots Get_objectBoots(int index){
//        if (index < Size_array && index >=Size_array)
//            return Shoes2[index];
//    }
//    string toStringSneakers(int index){
//        std::stringstream ss;
//        std::string a ;
//        std::string b ;
//        if (Shoes[index].GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (Shoes[index].GetPurpose() == Sneakers::Purpose::sport)
//            b = "Sport";
//        else if (Shoes[index].GetPurpose() == Sneakers::Purpose::casual)
//            b = "Casual";
//        else b = "Undef";
//        ss<< "\tModel: " << Shoes[index].GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes[index].GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes[index].GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes[index].GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes[index].GetInsoleLength()) << "\n\tPurpose: "<< b << "\n\tIs Runing: "<< (Shoes[index].GetIsRunning()?"Yes" : "No")<<"\n";
//        return ss.str();
//    }
//    string toStringBoots(int index){
//        std::stringstream ss;
//        std::string a ;
//        std::string b ;
//        if (Shoes2[index].GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes2[index].GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes2[index].GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes2[index].GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (this->Shoes2[index].GetSeason() == Boots::Season::spring)
//            b ="Spring";
//        else if (this->Shoes2[index].GetSeason() == Boots::Season::winter)
//            b = "Wisual";
//        else if (this->Shoes2[index].GetSeason() == Boots::Season::autumn)
//            b ="Autumn";
//        else b ="Undef";
//        ss<< "\tModel: " << Shoes2[index].GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes2[index].GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes2[index].GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes2[index].GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes2[index].GetInsoleLength()) << "\n\tSeason: "<< b << "\n\tAnti-slip sole: "<< (Shoes2[index].GetAntiSlipSole()?"Yes" : "No")<<"\n";
//        return ss.str();
//    }
//
//    void delete_elementSneakers(int index){
//        if(index <0) index =0;
//        else if(index>=Size_array) index = Size_array-1;
//        Sneakers *Shoes_new = new Sneakers[Size_array-1];
//        for(int i =0; i <index; i++ ){
//            Shoes_new[i]= Shoes[i];
//        }
//        for(int i =index+1; i <Size_array; i++ ){
//            Shoes_new[i-1]= Shoes[i];
//        }
//        Shoes = Shoes_new;
//        Size_array--;
//        show_array();
//    }
//    void delete_elementBoots(int index){
//        if(index <0) index =0;
//        else if(index>=Size_array) index = Size_array-1;
//        Boots *Shoes_new = new Boots[Size_array-1];
//        for(int i =0; i <index; i++ ){
//            Shoes_new[i]= Shoes2[i];
//        }
//        for(int i =index+1; i <Size_array; i++ ){
//            Shoes_new[i-1]= Shoes2[i];
//        }
//        Shoes2 = Shoes_new;
//        Size_array--;
//        show_array();
//    }
//    int size_array (){
//        return Size_array;
//    }
//    void test_remove() {
//        int n = size_array();
//        int a= Size_array;
//        if (n == a) cout<<("\33[1:32mТест пройден успешно.\33[0m")<<endl;
//        else cout<<("\33[1:31mТест провален5.\33[0m")<<endl;
//    }
//
////    void SaveInFileBoots(std::ofstream &file){
////        for(int i = 0; i< Size_array; i++){
////            file << toStringBoots(i) << endl;
////        }
////    }
////    void SaveInFileSneakers(std::ofstream &file){
////        for(int i = 0; i< Size_array; i++){
////            file << toStringSneakers(i) << endl;
////        }
////    }
//    int size(){
//        int cout = 0;
//        for(int i =0; i < Size_array; i++) {
//            if ( (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::nike)) || (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::puma)) ) {
//                cout++;
//            }
//        }
//        return cout;
//    }
//    Sneakers OrtopedicNikePumaSneakers(){
//        Sneakers * new_array = new Sneakers[size()];
////        int i =0;
//        int k =0;
//        for(int i =0; i < Size_array; i++) {
//            if ( (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::nike)) || (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::puma)) ) {
//                new_array[k] = Shoes[i];
//                cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
//                cout<<Get_objectSneakers(i).toStringSneakers()<<endl;
//                cout << "\n---------------------------------------\n\n";
//                k++;
//            }
//        }
//        delete [] Shoes;
//        Shoes = new_array;
//        return *Shoes;
//    }
//    Boots OrtopedicNikePumaBoots(){
//        Boots * new_array = new Boots[size()];
//        int k =0;
//        for(int i =0; i < Size_array; i++) {
//            if ( (Shoes2[i].GetIsOrtopedic() && (Shoes2[i].GetBrand() == ShoesBase::Brand::nike)) || (Shoes2[i].GetIsOrtopedic() && (Shoes2[i].GetBrand() == ShoesBase::Brand::puma)) ) {
//                new_array[k] = Shoes2[i];
//                cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
//                cout<<Get_objectSneakers(i).toStringSneakers()<<endl;
//                cout << "\n---------------------------------------\n\n";
//                k++;
//            }
//        }
//        delete [] Shoes2;
//        Shoes2 = new_array;
//        return *Shoes2;
//    }
//    void CheapRunningShoes() {
//        int min_usd =-1;
//        int index =-1;
//        for (int i = 0; i < Size_array; i++){
//            if(Shoes[index].GetIsRunning() && (min_usd < 0 || Shoes[i].GetPriceUSD()< min_usd)) {
//                index = i;
//                min_usd = Shoes[i].GetPriceUSD();
//            }
//        }
//        if(index >= 0){
//            cout << "\33[1:33mShoes #"<<index+1<<": \33[0m" << endl;
//            cout << Shoes[index].toStringSneakers() << endl;
//        } else cout << "\33[1:31mКроссовки не найдены.\33[0m" << endl;
//    }
//    int sizeBoots(){
//        int cout = 0;
//        for(int i =0; i < Size_array; i++) {
//            if ( Shoes[i].GetInsoleSize() >=39) {
//                cout++;
//            }
//        }
//        return cout;
//    }
//    void SizeMore39(){
//        for(int i =0; i < Size_array; i++) {
//            if ( Shoes2[i].GetInsoleSize() >=39 ) {
//                //new_array[k] = Shoes[i];
//                cout << "\33[1:33mShoes #" << i+1 << ":\33[0m"<<endl;
//                cout<<Shoes2[i].toStringBoots()<<endl;
//                cout<<"--------------------------------"<<endl;
//            }
//        }
//    }
//};
//
//int main() {
////    cout << "\33[1:34mОбщий класс\33[0m" <<endl;
//    bool ortopedic = true;
//    std::string model_name = { "Gaw" };
//    int usd = 3000;
//    int size = 35;
//    int length = 20;
////    ArrayShoes* arr = new ArrayShoes(4);
////    ShoesBase* new_element = new ShoesBase(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike);
////    std::ofstream outf("Create.txt");
////    std::ofstream outf2("Add.txt");
////    std::ofstream outf3("Delete.txt");
////    if (!outf.is_open() || !outf2.is_open() || !outf3.is_open()){
////        std::cerr << "Uh oh, Filet.txt could not be opened for writing!" << endl;
////        exit(1);
////    }
////    cout << "\33[1:35mСоздание массива.\33[0m" << endl;
////    arr->createArrayShoes();
////    arr->show_array();
////    arr->SaveInFile(outf);
////    cout << "\n\33[1:35mДобавление объекта.\33[0m" << endl;
////    arr->add_object(*new_element);
////    arr->test_insert(*new_element);
////    arr->SaveInFile(outf2);
////    int index =2;
////    cout << "\n\33[1:35mПоиск элемента по индексу: \33[0m" << index << endl;
////    cout << "\33[1:33mShoes #" << index+1 << ":\33[0m";
////    cout<<"\n"<< arr/*[index]<<endl;*/->Get_object(index).toString()<< endl;
////    cout << "\33[1:35mУдаление элемента по индексу: \33[0m" << index << endl;
////    arr->delete_element(index);
////    arr->test_remove();
////    arr->SaveInFile(outf3);
////    outf.close();
////    outf2.close();
////    outf3.close();
////    cout << "\n\33[1:35mПоиск ортопедической обуви брендов Найк и Пума.\33[0m" <<endl;
////    arr->OrtopedicNikePuma();
//
//    cout << "\33[1:34mКросовки\33[0m\n" <<endl;
//
//    ArrayShoes* arr1 = new ArrayShoes(4, 1);
//    Sneakers* new_element1 = new Sneakers(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike,true, Sneakers::Purpose::casual);
//    cout << "\33[1:35mСоздание массива.\33[0m" << endl;
//    arr1->createArraySneakers();
//    arr1->show_array();
//    cout << "\n\33[1:35mДобавление объекта.\33[0m" << endl;
//    arr1->add_objectSneakers(*new_element1);
//    arr1->test_insertSneakers(*new_element1);
//    int index1 =2;
//    cout << "\n\33[1:35mПоиск элемента по индексу: \33[0m" << index1 << endl;
//    cout << "\33[1:33mShoes #" << index1+1 << ":\33[0m";
//    cout<<"\n"<< arr1/*[index1]<<endl;*/->Get_objectSneakers(index1).toStringSneakers()<< endl;
//    cout << "\33[1:35mУдаление элемента по индексу: \33[0m" << index1 << endl;
//    arr1->delete_elementSneakers(index1);
////    arr1->test_removeSneakers();
//    cout << "\n\33[1:35mПоиск самых дешёвых беговых кроссовок.\33[0m" <<endl;
//    arr1->CheapRunningShoes();
//
////    cout << "\33[1:34mБотинки\33[0m\n" <<endl;
////
////    ArrayShoes* arr2 = new ArrayShoes(4, 2);
////    Boots* new_element2 = new Boots(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike,true, Boots::Season::spring);
////    cout << "\33[1:35mСоздание массива.\33[0m" << endl;
////    arr2->createArrayBoots();
////    arr2->show_array();
////    cout << "\n\33[1:35mДобавление объекта.\33[0m" << endl;
////    arr2->add_objectBoots(*new_element2);
////    arr2->test_insertBoots(*new_element2);
////    int index2 =2;
////    cout << "\n\33[1:35mПоиск элемента по индексу: \33[0m" << index2 << endl;
////    cout << "\33[1:33mShoes #" << index2+1 << ":\33[0m";
////    cout<<"\n"<< (*arr2)[index2]<<endl;//*/->Get_objectBoots(index2).toStringBoots()<< endl;
////    cout << "\33[1:35mУдаление элемента по индексу: \33[0m" << index2 << endl;
////    arr2->delete_elementBoots(index2);
//////    arr2->test_removeBoots();
////    cout << "\n\33[1:35mПоиск ботинок больше 39-того размера.\33[0m" <<endl;
////    arr2->SizeMore39();
//}