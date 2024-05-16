/* including the header files */
#include<IOStream>

/* function declerations */
int getRows();
void printPattern(int);

/* function definations */

/* function defination to get number of rows as input -- takes nothing, returns integer */
int getRows(){

    int rows;

    std::cout<<"Enter the number of rows: ";
    std::cin>>rows;

    return rows;

}

/* function defination to print the pattern -- takes integer, returns nothing */
void printPattern(int rows){
    
    int row;
    int col;

    for( row = 0; row < rows; row++){

        for( col=0; col < rows; col++){

            if( row == 0 || col == 0 || row == rows-1 || col == rows-1 )
                std::cout<<" * ";
            else
                std::cout<<"   ";
        
        }

        std::cout<<std::endl;

    }

}

/* main function */
int main(){

    int rows = getRows();
    printPattern(rows);

    return 0;

}
