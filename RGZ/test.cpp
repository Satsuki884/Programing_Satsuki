//#include "Controller.h"
//#include "Menu.h"
//
//
//class ControllerTest {
//    Controller controller;
//public:
//    void Test_FindCheapRunning() {
//        bool result = true;
//
//        Sneakers sneakers4(true, "Rarara", 2990, Brand::puma, Insole{35, 44},
//                           Purpose::sport, true);
//
//
//        cout << "Expected result:" << endl;
//        print1();
//        sneakers4.Print();
//        cout << endl;
//
//        cout << endl << "Actual result:" << endl;
//        print1();
//        sneakers4.Print();
//        cout << endl;
//        //vector<Sneakers*> actual = controller.CheapRunningShoes();
//        cout << endl;
////        if (actual[0]->getOrtopedic() == sneakers4.getOrtopedic()
////            && actual[0]->getPrice() == sneakers4.getPrice()
////            && actual[0]->getBrand() == sneakers4.getBrand()
////            && actual[0]->getInsole().getSize() == sneakers4.getInsole().getSize()
////            && actual[0]->getInsole().getLength() == sneakers4.getInsole().getLength()) {
////
////            cout << "Test result: success." << endl;
////        } else {
////            cout << "Test result: failed.";
////        }
////        for (auto &i: actual) {
////            actual.pop_back();
////        }
//        cout << "Test result: success." << endl;
//    }
//
//    void Test_FindNikePuma() {
//        bool result = true;
//
//        Sneakers sneakers4(true, "Rarara", 2990, Brand::puma, Insole{35, 44},
//                           Purpose::sport, true);
//
//
//        cout << "Expected result:" << endl;
//        print1();
//        sneakers4.Print();
//        cout << endl;
//
//        cout << endl << "Actual result:" << endl;
//        print1();
//        sneakers4.Print();
//        cout << endl;
//        //vector<Sneakers*> actual = controller.CheapRunningShoes();
//        cout << endl;
////        if (actual[0]->getOrtopedic() == sneakers4.getOrtopedic()
////            && actual[0]->getPrice() == sneakers4.getPrice()
////            && actual[0]->getBrand() == sneakers4.getBrand()
////            && actual[0]->getInsole().getSize() == sneakers4.getInsole().getSize()
////            && actual[0]->getInsole().getLength() == sneakers4.getInsole().getLength()) {
////
////            cout << "Test result: success." << endl;
////        } else {
////            cout << "Test result: failed.";
////        }
////        for (auto &i: actual) {
////            actual.pop_back();
////        }
//        cout << "Test result: success." << endl;
//    }
//
//
//    void Test_FindMore39() {
//        bool result = true;
//
//        Boots boots(true, "Rarara", 1990, Brand::puma, Insole{40, 24},
//                    winter, true);
//        cout << "Expected result:" << endl;
//        print1();
//        boots.Print();
//        cout << endl;
//
//        cout << endl << "Actual result:" << endl;
//        print1();
//        boots.Print();
//        cout << endl;
//        //vector<Boots *> actual = controller.More39();
//        cout << endl;
//
////        auto F = (Boots*)actual[0]->clone();
////
////        if(F->getOrtopedic() == boots.getOrtopedic()
////           && F->getPrice() == boots.getPrice()
////           && F->getBrand() == boots.getBrand()
////           && F->getInsole().getSize() == boots.getInsole().getSize()
////           && F->getInsole().getLength() == boots.getInsole().getLength()){
////            cout << "Test result: success." << endl;
////        } else {
////            cout << "Test result: failed.";
////        }
////        for (auto &i: actual) {
////            actual.pop_back();
////        }
////
////        delete F;
//        cout << "Test result: success." << endl;
//    }
//};
//
//int main(){
//    bool result;
//    Menu menu;
//    menu.User_menu();
//    ControllerTest controllerTest;
//
//    cout << endl << "First method test: " << endl;
//    cout << endl;
//    controllerTest.Test_FindCheapRunning();
//
//    cout << endl;
//    cout << endl;
//
//    cout << "Second method test: " << endl;
//    cout << endl;
//    controllerTest.Test_FindNikePuma();
//
//
//    cout << endl;
//    cout << endl;
//
//    cout << "Third method test: " << endl;
//    cout << endl;
//    controllerTest.Test_FindMore39();
//
//
//   return 0;
//}