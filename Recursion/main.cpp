//
//  main.cpp
//  Recursion - File System Traversal
//
//  Created by Atabay on 2024/3/28.
//

#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

void list_files(fs::path path){
    if (fs::is_regular_file(path)) {
        cout<<path<<endl;
    }else if(fs::is_directory(path)){
        cout<<path<<":"<<endl;
        for(auto& entry : fs::directory_iterator(path)){
            list_files(entry.path());
        }
    }
}

int main() {
    fs::path path = "/Users/name/Desktop"; // insert path here
    list_files(path);
    
    return 0;
}
