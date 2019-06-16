
// Dear TA,
//
// This is the first version of my_list.
// but since it uses replace function to print out multiplce courses,
// thought to be deviated from the orientation as it is firstly assigned.
// So another my_list is added and this is remained as a draft.
//
// 2014018940
// HyungKwon-Ko

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

#define DELIM_CHAR   ":"

using namespace std;

// function to split string based on the given delimiter
string* split(const string& str, const string& delim) {
    string* string_list = new string[10];
    int idx = 0;
    char* token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
    while(token != NULL) {
        string_list[idx] = token;
        token = strtok(NULL, delim.c_str());
        ++idx;
    }
    return string_list;
}

// function to replace one string to another
string replace(string &str, const string& from, const string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

// count the number of lines in the txt file
int line_count(char *name) {
    FILE *fp;
    int line = 0;
    char c;
    fp = fopen(name, "r");
    while((c=fgetc(fp)) != EOF)
        if(c=='\n')
            line++;
    fclose(fp);
    return line;
}

typedef struct Item {
    string name;
    string age;
    string id;
    string course;
    Item* next;
} Item;

// initialize the node
struct Item* create_item() {
    Item* item = new Item;
    item->next = NULL;
    return item;
}

// find end of the linked list
struct Item* find_end_of_list(struct Item* linked_list_first_item) {
    Item* current_node = linked_list_first_item;
    while(current_node->next != NULL) {
        current_node = current_node->next;
    }
    return current_node;
}

// insert node to the last one
void insert_item(struct Item *prev_item, struct Item *item) {
    if(prev_item == NULL) {
        cout << "no prev_item exists!\n";
        return;
    } else {
        prev_item->next = item;
    }
}

int main(void) {
   
    ifstream fin;
    string* lt;
    Item* head;
    char file_name[20] = "input.txt";
    
    int line_num = line_count(file_name);
    Item **node = new Item*[line_num];
    
    fin.open(file_name);
    if(fin.is_open()) {
        
        string line;
        for(int i=0; i<line_num; i++) {
            getline(fin, line);
            //cout << line << endl; // print line by line
            lt = split(line, DELIM_CHAR);
            node[i] = create_item();
            node[i]->name = lt[0];
            node[i]->age = lt[1];
            node[i]->id = lt[2];
            lt[3] = replace(lt[3], ",", " & ");
            node[i]->course = lt[3];
            
            if(i == 0) {
                head = node[i];
            } else {
                insert_item(find_end_of_list(head), node[i]);
            }
        }

        while(head != NULL) {
            if(head->id[2] == '1' && head->id[3] == '3')
                cout << head->name << "(" << head->id << "): " << head->course << endl;
            head = head->next;
        }
        fin.close();
    }
    delete[] node;
    return 0;
}
