A comparison showing how data is grouped in a C structure.
struct Student{
    char name[4];
    int roll;
    float total
};

void main(){
    struct Student A; // c declaration
    strcpy(A.name, "sheldon");
    A.roll = 999;
    A.total = 595.5
}
