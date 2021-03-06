std::string path = ""; // absolute path to opf-admm directory

#define SIZE 8
#define NUM_BUSES SIZE
#define NUM_LINES SIZE - 1
#define MAX_NUMBER_CHILDREN 2
#define MAX_NUMBER_NEIGHBORS MAX_NUMBER_CHILDREN + 2

int adj_matrix[NUM_BUSES][NUM_BUSES] = {{0,-1,0,0,0,0,0,0},{1,0,-1,-1,0,0,0,0},{0,1,0,0,0,0,-1,0},{0,1,0,0,-1,-1,0,0},{0,0,0,1,0,0,0,-1},{0,0,0,1,0,0,0,0},{0,0,1,0,0,0,0,0},{0,0,0,0,1,0,0,0}}; // Change here


float S_base = 100.0; // MVA
float v_bus[NUM_BUSES] = {1.,1.,1.,1.,1.,1.,1.,1.}; // Change here
float p_inj[NUM_BUSES] = {2.34,3.12,2.2,1.,2.34,3.12,2.2,1.}; // Change here
float q_inj[NUM_BUSES] = {.32,.13,.23,.35,.32,.13,.23,.35}; // Change here

float R_line[NUM_BUSES-1]= {0.00304,0.00304,0.00304,0.00304,0.00304,0.00304,0.00304}; // Change here
float X_line[NUM_BUSES-1]= {0.0304,0.0304,0.0304,0.0304,0.0304,0.0304,0.0304}; // Change here
