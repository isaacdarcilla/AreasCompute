#include <iostream>
#include <stdlib.h>

using namespace std;

const float PI = 3.1415;

int area_menu(){
    char is_choice;
        cout<<"\n\t\t--------------------------------------------------";
        cout<<"\n\t\t|  SELECT AN OPERATION\t\t\t       x |\n\t\t--------------------------------------------------";
        cout<<"\n\t\t|  1\t\t    AREA OF A CIRCLE\t\t |\t\n \t\t|  2\t          AREA OF A RECTANGLE\t\t |\n\t\t|  3 \t        PERIMETER OF RECTANGLE\t\t |\n\t\t|  4 \t            VOLUME OF CUBE\t\t |\n  \t\t|  5\t\t\t  EXIT\t\t\t |\n\t\t--------------------------------------------------\n";
        cout<<"  \t\tSelect an operation: ";
            cin>>is_choice;
            return is_choice;
}
int area_for_circ(){
    float rad;
        cout<<"\n  Radius of the circle: ";
        cin>>rad; return rad;
}
float area_rad(float r){
    float rad = area_for_circ();
    cout<<"\n  Radius: "<<rad;
        float area;
        area=2*PI*rad;
        return area;

}
int area_rec_length(){
    float length;
        cout<<"\t\t|\n  \t\tLength of the rectangle: ";
        cin>>length; return length;
}
int area_rec_width(){
    float width;
        cout<<"  \t\tWidth of the rectangle : ";
        cin>>width; return width;
}
int area_for_rec(float a){
        float rec_leng = area_rec_length();
        float rec_wid = area_rec_width();
        cout<<"\t\t|\n  \t\tLength: "<<rec_leng<<endl;
        cout<<"  \t\tWidth : "<<rec_wid;
            float area;
            area = rec_leng * rec_wid;
            return area;
}
void draw_rectangle(){
        for(int i=0; i<=10;i++){
            cout<<"-";
        }
}

int peri_rec_length(){
    float length;
        cout<<"\n  Length of the rectangle: ";
        cin>>length; return length;
}
int peri_rec_width(){
    float width;
        cout<<"  Width of the rectangle : ";
        cin>>width; return width;
}
int perimeter_of_rec(float p){
    float per_leng = peri_rec_length();
    float per_wid = peri_rec_width();
        cout<<"\n  Length: "<<per_leng<<endl;
        cout<<"  Width : "<<per_wid;
        float area;
        area = 2 * (per_leng + per_wid);
        return area;
}
int get_volume_cube(){
    float side;
        cout<<"  Length of side of the cube: ";
        cin>>side; return side;
}
int compute_vol_cube(float v){
    int vol_cube = get_volume_cube();
        cout<<"\n  Length: "<<vol_cube;
        float volume;
        volume = vol_cube*vol_cube*vol_cube;
        return volume;
}
int function_redo(){
    char redo='y';
    cout<<"Do you want to try again [Y/N]? ";
    cin>>redo;
    if(redo == 'y' || redo == 'Y'){
        main();
    }

}
int main()
{
    char yes_no = 'y';
    while(yes_no=='y' || yes_no=='Y'){
        int is_choice = area_menu();
        if(is_choice == '1'){
                float area_circ;
                float radius;
                    area_circ = area_rad(radius);
                    cout<<"\n\n  Area of a circle: "<<area_circ<<endl;
        }else if(is_choice == '2'){
                float area_rec;
                float leng_wid;
                    area_rec = area_for_rec(leng_wid);
                    cout<<"\n\t\t|\n  \t\tArea of a rectangle: "<<area_rec<<endl;
                    function_redo();
        }else if(is_choice == '3'){
                float peri_rec;
                float leng_wid;
                    peri_rec = perimeter_of_rec(leng_wid);
                    cout<<"\n\n  Perimeter of a rectangle: "<<peri_rec<<endl;
        }else if(is_choice == '4'){
                float vol_cube;
                float side_of_cube;
                    vol_cube = compute_vol_cube(side_of_cube);
                    cout<<"\n\n  Volume of a cube: "<<vol_cube<<endl;
        }else if(is_choice == '5'){
                cout<<"\n Program terminated.\n";
                return 0;
        }else if(cin.fail()){
            cin.clear();
            cin.ignore(0);
        }
        else{
            system("cls");
            cout<<"\n  Warning: Invalid user input.\n";
        }
    }
    return 0;
}
