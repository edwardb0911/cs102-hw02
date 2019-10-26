#include <stdio.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
  // TODO: add fields here for major and year
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
	case MAJOR_AND_NAME:
	  printf("%s %s %s\n", s.major, s.first_name, s.last_name);
	  break;
	case YEAR_AND_NAME:
	  printf("%i %s %s\n", s.year, s.first_name, s.last_name);
	  break;
	  
	
  // TODO: handle other cases
  }
}

/*
argv[1] will be the Mode integer.
argv[2]-argv[5] will be student info in the form [first_name, last_name, major, year].
argv[6]-argv[9], if present will be student info for a second student in the same form, and so on.
You will need to check argc to determine the number of students passed at runtime.
The fields are all strings (char[]), except year is a number (int)
*/
int main(int argc, char **argv) {
  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:
  Student s1, s2;
  s1.first_name = "Julia";
  s1.last_name = "A";
  s2.first_name = "Peter";
  s2.last_name = "Cooper";
  
  print_student(NAME_ONLY, s1);
  print_student(NAME_ONLY, s2);
  return 0;
}
