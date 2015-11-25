//
//  main.c
//  prob2.3
//
//  Enter data for Student structure (including name, year of birth, school year) and re-print to screen
//
//  Created by Thanh C. Tran on 25/11/15.
//  Copyright © 2015 Thanh C. Tran. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SIZE 100

typedef struct {
    char* name;
    unsigned int birth_year;
    unsigned int school_year;
} Student;

int main(int argc, const char * argv[]) {
    // insert code here...
    Student st;
    
    /* Allocate memory and check if okay. */
    st.name = malloc (MAX_NAME_SIZE);
    if (st.name == NULL) {
        printf ("No memory\n");
        return 1;
    }
    
    printf("Student name: ");
    /* Get the name, with size limit. */
    fgets (st.name, MAX_NAME_SIZE, stdin);
    /* Remove trailing newline, if there. */
    if ((strlen(st.name)>0) && (st.name[strlen(st.name) - 1] == '\n')) {
        st.name[strlen(st.name) - 1] = '\0';
    }
    
    printf("Student birth year: ");
    scanf("%d", &(st.birth_year));
    
    printf("Student school year: ");
    scanf("%d", &(st.school_year));
    
    printf("Student data:\n");
    printf("Name: %s\n", st.name);
    printf("Birth year: %d\n", st.birth_year);
    printf("School year: %d\n", st.school_year);
    
    printf("Hello, World!\n");
    
    /* Free memory and exit. */
    free (st.name);
    return 0;
}
