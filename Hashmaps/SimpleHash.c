#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int simple_hash(char* key, int hashmap_size) {
    //Hash fnxn using the ASCII values of characters
    int hashVal = 0;
    
    while (*key != '\0'){
        hashVal += (int)(*key);
        key++;
    }
    // Modulo operation to fit within the hashmap size
    return hashVal % hashmap_size;
}


int test_main(){
    //it is like a main for testing !
    
    // Test the simple_hash function
    char key1[] = "hello";
    char key2[] = "world";
    int hashmap_size = 100;

    int hash1 = simple_hash(key1, hashmap_size);
    int hash2 = simple_hash(key2, hashmap_size);

    printf("Hash of '%s': %d\n", key1, hash1);
    printf("Hash of '%s': %d\n", key2, hash2);

    return 0;
}
